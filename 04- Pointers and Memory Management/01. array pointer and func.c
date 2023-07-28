/*
Problem Statement:
Please write a C program that uses a function "behind()" (which you also have to write) in order to help with this task. 
Your program should first read, from the user input, the number of players participating in the game. There are never more than 
10 players in the game. Next, your program should read the current scores of each player and store them in an array. Then you should call the function behind(), 
to which you pass as a first argument, the array holding the player's scores, and as a second argument the number of players in the game. The function behind 
should replace the scores stored in the array with the number of points by which each individual player is behind the top-scoring player.
*/

#include <stdio.h>

void behind(int *, int);

int main(void) {
    int array[10];
    int N, i;
    
    scanf("%d", &N);
    for (i=0; i<N; i++) {
        scanf("%d", &array[i]);
    }
    behind(array, N);
    for (i=0; i<N; i++) {
        printf("%d\n", array[i]);
    }
    
    return 0;
}

void behind(int *ptr,int num){
   int i;
   int max=ptr[0];
   for(i=0;i<num;i++){
       if(ptr[i]>max) max=ptr[i];
   }
    for(i=0;i<num;i++){
        ptr[i]=max-ptr[i];
    }
    
}