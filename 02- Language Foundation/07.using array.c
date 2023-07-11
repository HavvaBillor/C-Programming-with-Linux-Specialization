/*Problem Statement: 
Your grandparents gave you a fantastic cooking recipe but you can never remember 
how much of each ingredient you have to use! There are 10 ingredients in the recipe 
and the quantities needed for each of them are given as input (in grams). 
Your program must read 10 integers (the quantities needed for each of the ingredients, in order) 
and store them in an array. It should then read an integer which represents an ingredient's ID number (between 0 and 9), 
and output the corresponding quantity.
 */


#include <stdio.h>
int main(void){
    int i;
    int array[10];

    //input the values of arrays

    for(i=0;i<10;i++){
        printf("enter the array's %d . input:",i+1);
        scanf("%d",&array[i]);
    }

    //if you enter the number grater than 9, you can rewrite your value 

    input_value:
    printf("enter the value that you can see in array");
    scanf("%d",&i);
    if(i<10) printf("%d",array[i]);
    else{
        printf("your array has only 10 value\nPlease enter the number between 0 and 9\n\n"); 
        goto input_value;

    }


    return 0;
}