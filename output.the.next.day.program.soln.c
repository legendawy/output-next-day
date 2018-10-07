#include <stdio.h>

int main(void){

    int month, day, year, leapyear;     //Initialize the variables for our month, day and year inputs. Included would be the leapyear variable for checking whether the year is a leap year or not.

    printf("Input Month, Day and Year: ");
    scanf("%d %d %d",&month,&day,&year);

    if(year%4==0)                       //To check whether the given year is a leap year. We use modulo on it by 4 to determine whether it is divisible by 4
        leapyear=1;                     //If it is divisible by 4. It is a leap year. Hence we assign a value of 1 to the variable leapyear. We will use it later on.
    else
        leapyear==0;                    //If it is not divisible by 4. It is not a leap year. Hence we assign a value of 0 to the variable leapyear. We will use it later on.

    if(month==2){                       //Check whether month is February. Since Feb. is a special case with changing length of 28 or 29 days whether it's a leap year or not.
        if(leapyear==1){                //If leapyear==1 this means that the year is a leap year. We have to check whether the day given is 29.
            if(day==29){                //If the day given is 29 we use:
                month++;                //month++ to add 1 to the month since 29 is the last day of February in a leap year.
                day=1;                  //We then set the variable day to 1. Since the next day is the first day of the next month.
            }
            else
                day++;                  //If day is not ==29 then we simply use day++ to add 1 to the variable day.
        }
        else{                           //If the year is not a leap year then we execute these statements.
            if(day==28){                //If the day given is 28 we use:
                month++;                //month++ to add 1 to the month since 28 is the last day of February if it is not leap year.
                day=1;                  //We then set the variable day to 1. Since the next day is the first day of the next month.
            }
            else
                day++;                  //If day is not ==28 then we simply use day++ to add 1 to the variable day.
        }
    }
    else if(month==4 || month==6 || month == 9 || month==11){           //If the given month has 30 days we execute these statements.
        if(day==30){                    //If the day given is 30 we use:
            month++;                    //month++ to add 1 to the month since 30 is the last day of these months.
            day=1;                      //We then set the variable day to 1. Since the next day is the first day of the next month.
        }
        else
            day++;                      //If day is not ==30 then we simply use day++ to add 1 to the variable day.
    }
    else if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12){            //If the given month has 31 days we execute these statements.
        if(month==12 && day==31){       //We check whether the month is December and the day is 31. This is a special case since this is the last day of the year.
            year++;                     //We then use year++ to add 1 to the year.
            day=1;                      //We then set the day to 1 since it is the first day of the month of the following year.
            month=1;                    //We then set the month back to January since it is a whole new year.
        }
        else if(day==31){               //If the day given is 31 but the month is not December then we use:
            month++;                    //month++ to add 1 to the month since 31 is the last day of these months.
            day=1;                      //We then set the variable day to 1. Since the next day is the first day of the next month.
        }
        else
            day++;                      //If day is not ==31 then we simply use day++ to add 1 to the variable day.
    }
    printf("The next Day is %d-%d-%d",month,day,year);                  //We print the next day's date.


}
