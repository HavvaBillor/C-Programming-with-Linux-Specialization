#include <stdio.h>
int main(void){
    int num,i;
    char name[101];
    char surname[101];
    
    printf("How many person do you have:");
    scanf("%d",&num);
    for(i=0;i<num;i++){
        printf("%d. first name and lastname",i+1);
        scanf("%s %s",name,surname);
        printf("%s %s\n",surname,name);
        
    }
    
    return 0;
}