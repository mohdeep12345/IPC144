/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #5 (P2)
Full Name  : 
Student ID#: 
Email      : 
Section    : 

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{//Declaring Variables
    int year, month;
    double mor_rate, eve_rate; 

    char name[100];
    int count2 = 1;
    int count = 1, log_day = 01;
    printf("General Well-being log\n"
        "======================\n");
    do {
        printf("Set the year and month for the well-being log (YYYY MM): ");
        scanf("%d %d", &year, &month);
        if ((year >= 2012) && (year <= 2022)) {

            if ((month > 0) && (month <= 12)) {
                printf("\n*** Log date set! ***\n\n");
                count = 0;
            }
            else {
                printf("ERROR: Jan.(1) - Dec.(12)\n");
            }
        }
        else if ((month > 0) && (month < 13)) {
            printf("ERROR: The year must be between 2012 and 2022 inclusive\n");

        }
        else {
            printf("ERROR: The year must be between 2012 and 2022 inclusive\n");
            printf("ERROR: Jan.(1) - Dec.(12)\n");
        }

    } while (count == 1);
    switch (month) {
    case 1:
        strcpy(name, "JAN");
        break;
    case 2:
        strcpy(name, "FEB");
        break;
    case 3:
        strcpy(name, "MAR");
        break;
    case 4:
        strcpy(name, "APR");
        break;
    case 5:
        strcpy(name, "MAY");
        break;
    case 6:
        strcpy(name, "JUN");
        break;
    case 7:
        strcpy(name, "JUL");
        break;
    case 8:
        strcpy(name, "AUG");
    case 9:
        strcpy(name, "SEP");
        break;
    case 10:
        strcpy(name, "OCT");
        break;
    case 11:
        strcpy(name, "NOV");
        break;
    case 12:
        strcpy(name, "DEC");
        break;

    default:
        strcpy(name, "Invalid month");
        break;
    }

    printf("Log starting date: %d-%s-%.2d\n", year, name, log_day);

    do {
        printf("   Morning rating (0.0-5.0): ");
        scanf("%lf", &mor_rate);
        if ((mor_rate >= 0) && (mor_rate <= 5)) {
            count2=0;
            

        }
        else
        {
            printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n"); 
        }

    } while (count2 == 1);







    return 0;

}