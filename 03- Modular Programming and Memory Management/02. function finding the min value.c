/*
The goal of this problem is to find the smallest 
integer in a list of numbers.

To help you with this task, please write a function called min() that 
finds and returns the smallest amongst two integers (be sure to also 
write a prototype for this function). The function thus takes two integers 
as input and returns the smallest of the two. This function will use an 
if statement with a condition that contains either "less than" or "greater than".

Next, please use min() in your main function to work your way through an entire 
list of numbers in order to find its minimum. The first number you read gives 
the number of elements in the list of integers under consideration. You will then 
read the integer values, using min() to keep only the smallest integer read at each step. 
In the end, please print out the smallest integer in the list

*/

#include <stdio.h>

int min(int,int);

int main(void){
    int num,i=0;
    int currentvalue,minvalue;
    
    printf("how many integer do you have?");
    scanf("%d",&num);
    
    printf("please enter the values:");
    // to compare other ones, we have to do this
    scanf("%d",&currentvalue);
    minvalue=currentvalue;
    
    for(i=0;i<num;i++){
        
        scanf("%d",&currentvalue);
        minvalue = min(currentvalue,minvalue);
    }
    printf("the minimum value is %d\n",minvalue);
    
}
int min(int currentvalue,int minvalue){
    
    if(currentvalue < minvalue){
        return currentvalue;
    }
    
    return minvalue;
}