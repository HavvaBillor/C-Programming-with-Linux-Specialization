/*Problem Statement:
You want to determine the number of cities
 in a given region that have a population 
 strictly greater than 10,000. To do this, 
 you write a program that first reads the 
 number of cities in a region as an integer, 
 and then the populations for each city one 
 by one (also integers).
*/

#include <stdio.h>
int main(void){
    int i,num;
    int maxPopulation=10000;
    int sum =0;
    printf("how many cities:");
    scanf("%d",&num);
    
    int Cities[num];
    
    for(i=0;i<num;i++){
        
        printf("the population of %d. city ",i+1);    
        scanf("%d",&Cities[i]);
        
        if(Cities[i]> maxPopulation) sum = sum +  1;
    }
    printf("%d",sum);
    return 0;
    
}