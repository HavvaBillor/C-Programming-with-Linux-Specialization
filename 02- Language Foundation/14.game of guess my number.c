/*
We would like you to develop a program capable of 
making a child play automatically the game of "more or less" -- 
the child must try to guess a secret number. The program should 
respond to each guess with "it is more" or "it is less" until the 
child finds the right number.

Your program must first read an integer indicating the number that 
the child will have to find during the game. Next the program should repeatedly 
read the player's guesses and display the text "it is more" if the child has submitted 
a smaller number or "it is less" if they have submitted a larger number. Once the correct 
number is reached, the program should print "Number of tries needed:" followed by a new line 
and the integer number of tries that it took the guesser.
*/

#include <stdio.h>
int main(void){
    
    int number,numtries=0;
    int guess=0;
    
    printf("input the number to guess");
    scanf("%d",&number);
    
    while(guess != number){

    	printf("your guess:");
        scanf("%d",&guess);
        
        if(guess>number) printf("it is less\n");
        else if(guess<number) printf("it is more\n");
        else printf("Number of tries needed\n");
        numtries++;
    }
    printf("%d",numtries);
    
    return 0;
    
    
}