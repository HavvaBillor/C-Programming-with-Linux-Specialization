/*
In this problem you will continue developing the data feature which you started 
implementing in the previous problem. You will implement a "tomorrow" feature in 
the C programming language via a function called "advanceDay()". The function advanceDay() 
should take as input a date (stored in a struct date) and return the date of the following day. 
You do not have to take into account leap years (although you may if you wish to). That is, it is 
okay for your function to always return March 1 as the day following February 28, no matter the year.
*/

#include <stdio.h>

struct date {
    int year;
    int month;
    int day;
};

void printDate(struct date);
void readDate(struct date *);
struct date advanceDay(struct date); 

int main(void) {
    struct date today, tomorrow;
    readDate(&today);
    printDate(today);
    tomorrow = advanceDay(today);
    printDate(tomorrow);
    return 0;
}

void readDate(struct date *todayptr) {
    scanf("%d %d %d", &todayptr->year, &todayptr->month, &todayptr->day);
}

void printDate(struct date todayscr) {
    printf("%02d/%02d/%04d\n", todayscr.month, todayscr.day, todayscr.year);
}

struct date advanceDay(struct date todayscr) {
    switch(todayscr.month) {
        case 2:
            if (todayscr.day == 28) {
                todayscr.month = 3;
                todayscr.day = 1;
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if (todayscr.day == 30) {
                todayscr.month++;
                todayscr.day = 1;
            }
            break;
        default:
            if (todayscr.day == 31) {
                if (todayscr.month == 12) {
                    todayscr.year++;
                    todayscr.month = 1;
                } else {
                    todayscr.month++;
                }
                todayscr.day = 1;
            } else {
                todayscr.day++;
            }
            break;
    }
    
    return todayscr;
}