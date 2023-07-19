/*
Problem Statement:
Please write a C-program that uses a recursive function called "sumOfDigits()" 
to compute the sum of the digits of a number. To do so, your main function should 
first read an integer number as input and then call sumOfDigits(), 
which should in turn call itself until there are no digits left to sum, at which point 
the final sum should display to the user.

*/


#include <stdio.h>

int sumofdigits(int);

int main(void){
    int num;

    printf("please enter the numbers");
    scanf("%d",&num);
    
    printf("%d is the sum of the digits that you entered",sumofdigits(num));
    
return 0;
}

int sumofdigits(int n){
    
    if(n<10){
        return n;
    }
    else{
        return n%10 + sumofdigits(n/10);
    }
}