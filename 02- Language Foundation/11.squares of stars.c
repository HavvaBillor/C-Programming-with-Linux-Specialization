#include <stdio.h>
int main(void){
    int i,j;
    int num;
    
    // input the dimension of square
    scanf("%d",&num);
    
    for(i=0; i<num; i++){
        for(j=0; j<num; j++){
            printf("*");
        }
        printf("\n");
    } 
return 0;    
}