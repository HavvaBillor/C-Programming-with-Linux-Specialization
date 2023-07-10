#include <stdio.h>
int main(void){
    int i,num;
    scanf("%d",&num);
    for(i=0; i<11; i++){
        printf("%dx%d = %d\n",i,num,i*num);
    }
    return 0;
}