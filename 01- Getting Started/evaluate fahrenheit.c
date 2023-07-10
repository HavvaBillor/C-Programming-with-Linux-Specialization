#include <stdio.h>
int main(void){
    double tempC,tempF;

    // enter the temparature as a Celcius
    scanf("%lf",&tempC);
    
    // calculator formula Fahrenheit
    tempF= tempC * 9.0/5.0 +32.0;
    printf("%.1lf",tempF);
    
return 0;
}