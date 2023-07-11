/*
Your job is to find the length of the longest word 
in a text with no punctuation or special characters of 
any kind - only contains words. To do so, please write a 
C-program that takes as a input first the number of words in a text, 
followed by all of the words in the text. The output of your program should be 
the length of the longest word in the text.

To simplify your program, you can assume that the longest word will not exceed 100 characters.
*/

#include <stdio.h>
int main(void){
    int numWord,i;
    int j=0,maxsize=0;
    
    char text[101];
    
    printf("how many words do you want to enter:");
    scanf("%d",&numWord);
    int length[numWord];
    
    for (i=0;i<numWord;i++){
        scanf("%s",text);
        
        j=0;
        while(text[j] != '\0'){
            j++;
        }
        length[i]=j;
    }
    
    for(i=0;i<numWord;i++){
        if(length[i]>maxsize) maxsize=length[i];
    }
    printf("%d",maxsize);
    return 0;
    
}

//************************************************************

//WE CAN USE THE FUNCTION OF strlen() TO FIND THE LENGTH OF EACH WORD
/*

#include <stdio.h>
#include <string.h>

int main(void) {
    int numWord, i;
    int maxsize = 0;

    char text[101];

    scanf("%d", &numWord);
    int length[numWord];

    for (i = 0; i < numWord; i++) {
        scanf("%s", text);
        length[i] = strlen(text);
    }

    for (i = 0; i < numWord; i++) {
        if (length[i] > maxsize)
            maxsize = length[i];
    }

    printf("%d\n", maxsize);

    return 0;
}
*/