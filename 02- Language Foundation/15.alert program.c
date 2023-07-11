/*University chemists have developed a new process for the 
manufacturing of a drug that heals wounds extremely quickly. 
The manufacturing process is very lengthy and requires monitoring 
the chemicals at all times, sometimes for hours! Entrusting this 
task to a student is not possible; students tend to fall asleep or 
not pay close attention after a while. Therefore you need to program an 
automatic device to monitor the manufacturing of the drug. The device 
measures the temperature every 15 seconds and provides these measurement to your program. 

Your program should first read two integers representing the minimum and 
maximum safe temperatures. Next, your program should continuously read 
temperatures (integers) that are being provided by the device. Once the chemical 
reaction is complete the device will send a value of -999, indicating to you that 
temperature readins are done. For each recorded temperature that is in the correct range 
(it could also be equal to the min or max values), your program should display the text 
"Nothing to report". But as soon as a temperature reaches an unsafe level your program must 
display the text "Alert!" and stop reading temperatures (although the device may continue sending temperature values).
*/

#include <stdio.h>

int main(void) {
    int mintemp, maxtemp,i=1;
    int currenttemp = 0;
    int stopvalue = -999;

    //input the safe temperature
    scanf("%d%d", &mintemp, &maxtemp);

    
    while (i) {

        //input the current temperature
        scanf("%d", &currenttemp);


        //if the stopvalue works, the loop will end
        if (currenttemp == stopvalue)
            break;
    
        if (currenttemp >= mintemp && currenttemp <= maxtemp)
            printf("Nothing to report\n");
        else{
            i=0;
            printf("Alert!\n");

            //if we see the alert, we have to stop this loop
            currenttemp=stopvalue;
        }   
    }

    return 0;
}