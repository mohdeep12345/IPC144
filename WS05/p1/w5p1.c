/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #5 (P1)
Full Name  : Mohdeep Singh  
Student ID#: 109600239
Email      : msingh820@myseneca.ca
Section    : NBB

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS
#define MIN_YEAR 2012
#define MAX_YEAR 2022   
#include <stdio.h>

int main(void)


{   //Declaring Variables
    int year, month;
    int count = 1, log_day = 01;
    char a, b, c; 

    printf("General Well-being Log\n"
        "======================\n");
    do {
        printf("Set the year and month for the well-being log (YYYY MM): ");
        scanf("%d %d", &year, &month);
        if ((year >= MIN_YEAR) && (year <= MAX_YEAR)) { 

            if ((month > 0) && (month <= 12)) {
                printf("\n*** Log date set! ***\n\n");
                count = 0;
            }
            else {
                printf("   ERROR: Jan.(1) - Dec.(12)\n");
            }
        }
        else if ((month > 0) && (month < 13)) {
            printf("   ERROR: The year must be between 2012 and 2022 inclusive\n");
           
        }
        else {
            printf("   ERROR: The year must be between 2012 and 2022 inclusive\n");
            printf("   ERROR: Jan.(1) - Dec.(12)\n");
        }

    } while (count == 1);
    
    switch (month) { 
    case 1:                                                      //To Print JANUARY in Month
        a = 'J';
        b = 'A';
        c = 'N';
        break;
    case 2:                                                      //To Print FEBUARY in Month
        a = 'F';
        b = 'E';
        c = 'B';
        break;
    case 3:                                                       //To Print MARCH in Month
        a = 'M';
        b = 'A';
        c = 'R';
        break;
    case 4:                                                        //To Print APRIL in Month
        a = 'A';
        b = 'P';
        c = 'R';
        break;
    case 5:                                                        //To Print MAY in Month
        a = 'M';
        b = 'A';
        c = 'Y';
        break;
    case 6:                                                        //To Print JUNE in Month
        a = 'J';
        b = 'U';
        c = 'N';
        break;
    case 7:                                                       //To Print JULY in Month
        a = 'J';
        b = 'U';
        c = 'L';
        break;
    case 8:                                                        //To Print AUGUST in Month
        a = 'A';
        b = 'U';
        c = 'G';
        break;
    case 9:                                                       //To Print SEPTEMBER in Month
        a = 'S';
        b = 'E';
        c = 'P';
    case 10:                                                       //To Print OCTOBER in Month
        a = 'O';
        b = 'C';
        c = 'T';
        break;
    case 11:                                                       //To Print NOVEMBER in Month
        a = 'N';
        b = 'O';
        c = 'V';
        break;
    case 12:                                                       //To Print DECEMBER in Month
        a = 'D';
        b = 'E';
        c = 'C';
        break;
          
    default:
        a = 'E';
        b = 'R';
        c = 'R';
    }

    printf("Log starting date: %d-%c%c%c-%.2d\n", year, a,b,c, log_day);        //To avoid Hardcoding I Made above line a..b..c..    

    return 0;
}
