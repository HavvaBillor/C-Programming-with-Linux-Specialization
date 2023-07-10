/*Problem:You are planning a car trip so you post on a carpooling
 website in order to share the cost of the trip.

If you have 0 passengers the carpool site does not charge anything and 
you alone pay the full cost of the trip. If you have 1 or more passengers 
the carpool site adds a $1 fee to the cost of the trip and evenly divides 
the total cost ($1 fee + gas) among the passengers and you. You want to write a program 
that calculates the cost you have to pay. The program should read the number of passengers (an integer) and 
the cost of gas for the trip (a decimal number). The program should then print the cost that you have to pay 
(a decimal number) with 2 digits after the decimal point. */

#include <stdio.h>
int main(void){
    int passenger;
    double cost;
    
    scanf("%d",&passenger); 
    scanf("%lf",&cost);
    
    if(passenger >= 1){
        cost += 1;
        printf("%.2lf",cost/(1+passenger));
    } else{
        printf("%.2lf",cost);
    }
    
    return 0;
}