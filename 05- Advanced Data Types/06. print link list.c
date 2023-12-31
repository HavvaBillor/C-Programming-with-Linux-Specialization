/*
In this task you will continue working on the linked list of students in which you would 
like to store, for each student, their name and age. As before you are provided with some 
code that you should not modify:
Your new task is to write a function printStudents() which takes as input a pointer that 
holds the address of the start of a linked list of students. Your function should then 
print this list of students to the screen as specified in the example below. Your function 
should not return anything.
*/
#include <stdio.h>
#include <stdlib.h>

struct student {
      char name[50];
      int age;
      struct student *next;
};

struct student *createStudent(char studentName[50], int studentAge);
struct student * append(struct student * end, struct student * newStudptr); 
void printStudents(struct student *start);


void loadStudent(struct student *, char[], int);

int main(void) {
    struct student *start, *newStudptr, *end, *tmp;
    int ageP, ageR, ageM;

    scanf("%d %d %d", &ageP, &ageR, &ageM);

    start = createStudent("Petra", ageP);
    end = start;

    newStudptr = createStudent("Remi", ageR);
    end = append(end, newStudptr);

    newStudptr = createStudent("Mike", ageM);
    end = append(end, newStudptr);

    printStudents(start);
    tmp = start->next;

    free(start);

    start = tmp;
    tmp = start->next;

    free(start);
    free(tmp);

    return 0;
}

/* Place your function definitions here. Be sure to include the definitions for 
   createStudent() and append() as well as any other functions you created for 
   the previous tasks. */

  struct student * createStudent(char name[], int age) {
  struct student * ptr;
  ptr = (struct student *) malloc(sizeof(struct student));
  loadStudent(ptr, name, age);
  return ptr;
}

void loadStudent(struct student * ptr, char name[], int age) {
  int i = 0;
  while (name[i]!='\0') {
    ptr->name[i] = name[i];
    i++;
  }
  ptr->age = age;
}

struct student * append(struct student * end, struct student * new) {
  end->next = new;
  end = new;
  return end;
}

void printStudents(struct student * start) {
  struct student * ptr = start;
  while (ptr!=NULL) {
    printf("%s is %d years old.\n", ptr->name, ptr->age);
    ptr = ptr->next;
  }
}