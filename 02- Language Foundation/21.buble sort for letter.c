/*
Problem Statement:
This time, you'd like to write a program to find out 
how many letters occur multiple times in a given word. 
Your program should read a word from the input and then 
sort the letters of the word alphabetically (by their ASCII codes). 
Next, your program should iterate through the letters of the word and 
compare each letter with the one following it. If these equal each other, 
you increase a counter by 1, making sure to then skip ahead far enough so that 
letters that occur more than twice are not counted again. You may assume that 
the word you read from the input has no more than 50 letters, and that the word is all lowercase.

*/

#include <stdio.h>
#include <string.h>

int main(void){
    
    int i,j;
    char text[51],swap;
    int length;
    
    scanf("%s",text);
    
    int repeat=0;
    length= strlen(text);
    
    for(i=0;i<length;i++){
        for(j=0;j<length-i-1;j++){
            if(text[j]>text[j+1]){
                swap=text[j+1];
                text[j+1]=text[j];
                text[j]=swap;
            }
        }
    }
    for(i=0;i<length-1;i++){
        if(text[i] == text[i+1]){
          repeat++;
          while(text[i]== text[i+1]){
              i++;
          }
        }
    }
    printf("%d",repeat);
    return 0;
}