/*
Problem Statement:
You are conducting a linguistic study and are interested in 
finding words that contain the letter 't' or 'T' in the 
first half of the word (including the middle letter if there is one). 
Specifically, if the first half of the word does contain a 't' or a 'T', 
your program should output a 1. If the first half does not contain the letter 't' or 'T', 
but the second half does, then your program should output a 2. Otherwise, if there is 
no 't' or 'T' in the word at all, your program's output should be -1. You may assume that 
the word entered does not have more than 50 letters.
*/

#include <stdio.h>
#include <string.h>

int main(void) {
    char word[51];
    
    printf("enter a word:");
    scanf("%s", word);
    int length = strlen(word);
    //To include the middle letter in the first half,
    int halfLength = (length + 1) / 2; 
    
    int i, found = 0;
    for (i = 0; i < halfLength; i++) {
        if (word[i] == 't' || word[i] == 'T') {
            found = 1;
            break;
        }
    }
    
    if (found) {
        printf("1\n");
    } else {
        found = 0;
        for (i = halfLength; i < length; i++) {
            if (word[i] == 't' || word[i] == 'T') {
                found = 1;
                break;
            }
        }
        
        if (found) {
            printf("2\n");
        } else {
            printf("-1\n");
        }
    }
    
    return 0;
}
