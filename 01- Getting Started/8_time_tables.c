#include <stdio.h>
int main(void){
    int number=8;
    int i;
    
    for(i=0; i<11; i++){
        printf("%dx%d = %d\n",i,number,i*number);
    }
    return 0;
}