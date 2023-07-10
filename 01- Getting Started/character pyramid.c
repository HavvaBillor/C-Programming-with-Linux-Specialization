#include <stdio.h>
int main(void){

int i,j;
char letter;
// enter the character pyramid
scanf("%c",&letter);

for(i=0; i<5; i++){
    for(j=0; j<4-i; j++){
        printf("+");
    }
    for(j=0; j<2*i+1;j++){
        printf("%c",letter);
    }
    for(j=0; j<4-i; j++){
        printf("+");
    }
    printf("\n");
}

return 0;
}