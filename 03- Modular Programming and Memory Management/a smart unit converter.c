// Write a C-program that converts metric measurements to imperial system values. 
// Measurements are provided to your program in meters, grams or degrees Celsius 
// and must be converted to feet, pounds and degrees Fahrenheit, respectively.

// Here are the conversion rules to use:
//  1 meter = 3.2808 feet;
//  1 gram = 0.002205 pounds;
//  temperature in degrees Fahrenheit = 32 + 1.8 × temperature in degrees Celsius.

// On the first input line you are given the number of conversions to be made. 
// Each of the following lines contains a value to be converted as well as its unit: 
// m, g or c (for meters, grams or degrees Celsius). There will be a space between 
// the number and the unit. You should print your output value for each input line 
// immediately after calculating it (ie, you do not have to wait until you have 
// read all inputs).

// Display the converted values with 6 decimal places, followed by a space and their unit: 
// ft, lbs or f (for feet, pounds or degrees Fahrenheit). Each conversion result should 
// be printed on its own line, and you should store and display all decimal values as doubles.

#include <stdio.h>

double convertmeters(double);
double convertgram(double);
double converttemparature(double);


int main(void){
    
    int num,i=0;
    char unit;
    double value;
    char meters='m';
    char gram='g';
    
    printf("how many conversion operation do you want to do?");
    scanf("%d",&num);
    
    printf("please enter the m for meters, g for grams and c for temparature");
    for(i=0;i<num;i++){
        
        scanf("%lf %c", &value,&unit);
        if(unit == meters){
          printf("%lf ft\n",convertmeters(value));
        }
        else if(unit == gram){
           printf("%lf lbs\n",convertgram(value));
        }
        else{
          printf("%lf f\n",converttemparature(value));  
        }
        
    }
    return 0;
}
double convertmeters(double value){
    return value*3.2808;
}
double convertgram(double value){
    return value* 0.002205;
}
double converttemparature(double value) {
    return 32 + 1.8* value;
}