/*
Problem Statement:
Your program should first read an integer number indicating how many tracking codes you plan on entering. Next, for each successive tracking code 
your program should read in the integer length of code followed by a space and then the type of code ('i' for integer, 'd' for decimal, or 'c' for character). 
Finally your program should print the total amount of space required to store all of the tracking codes (in bytes). If the user enters an incorrect type for 
any tracking number, the program should print 'Invalid tracking code type' and exit.

*/

#include <stdio.h>

int main(void) {
    int n, i, num;
    printf("how many process do you have?\n");
    scanf("%d", &n);
    char type[n];
    int sum = 0;
    int result[n];

    printf("please enter a space and enter the c for char,i for integer and d for double variables\n");
    printf("an example for you: 4 i\n");

    for (i = 0; i < n; i++) {
        scanf("%d %c", &num, &type[i]);

        if (type[i] == 'i') {
            result[i] = num * sizeof(int);
        } else if (type[i] == 'c') {
            result[i] = num * sizeof(char);
        } else if (type[i] == 'd') {
            result[i] = num * sizeof(double);
        } else {
            printf("Invalid tracking code type");
            return 1; // Exit the program with an error code
        }

        sum += result[i];
    }

    printf("%d bytes", sum);
    return 0;
}
