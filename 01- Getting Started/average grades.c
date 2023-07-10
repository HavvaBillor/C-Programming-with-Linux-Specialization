#include <stdio.h>
int main(void){
    
    int i,sum,numStudent,grade;
    sum=0;
    
    // entering the number of the grades of the students
    scanf("%d",&numStudent);

    // the user enters each of the grades 
    for(i=0; i<numStudent;i++){
        scanf("%d",&grade);
        
        sum += grade;
    }

    //the evaluate average
    printf("%.2lf",(double)sum/numStudent);
    return 0;
}