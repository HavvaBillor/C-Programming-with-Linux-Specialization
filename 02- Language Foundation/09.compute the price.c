/*Problem Statement:
You plan to make a delicious meal and want to take 
the money you need to buy the ingredients. Fortunately 
you know in advance the price per pound of each ingredient 
as well as the exact amount you need. The program should read 
in the number of ingredients (up to a maximum of 10 ingredients), 
then for each ingredient the price per pound. Finally your program should 
read the weight necessary for the recipe (for each ingredient in the same order). 
Your program should calculate the total cost of these purchases, 
then display it with 6 decimal places.
 */


#include <stdio.h>
int main(void){
    int num,i;
     
     printf("how many ingreditiens:");
     scanf("%d",&num);
     
     double price[num],lbl[num],counter[num];
     double sum=0.0;
     for(i=0; i<num;i++){
        
        printf("enter the %d. price:",i+1);
        scanf("%lf",&price[i]);
     }
     for(i=0;i<num;i++){
         
         printf("enter the %d. lbl:",i+1);
         scanf("%lf",&lbl[i]);
         counter[i]=price[i]*lbl[i];
         sum += counter[i];
     }
     printf("the total price that you have to pay is %.6lf",sum);
     
     return 0;
     
}
