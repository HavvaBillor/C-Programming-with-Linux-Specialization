/*Problem Statement: The population of a city has risen sharply over the past few years,
thanks to a high birth rate. However, 
this poses a number of problems, including a housing shortage. 
The mayor has decided to deal with the problem and would like to estimate the future growth of
the population, and he has called you in to help!

Please write a C-program that first reads an integer representing the current population of the city, 
and that next reads a decimal number for the projected population growth as a percentage (either positive or negative). 
The program should then display the expected population of the city in a year as a whole number. 
By convention we will only consider "whole" people. So a population of 31.8 inhabitants will be considered as having 31 inhabitants.

*/
#include <stdio.h>
int main(void){

    double rate,population,futurePopulation;

    scanf("%lf%lf",&population,&rate);
    
    // the formula of future population
    futurePopulation = population * (1 + (rate/100));
    
    printf("%d",(int)futurePopulation);
    
    return 0;
    
}