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

#define MIN_YEAR 2012
#define MAX_YEAR 2022 

#include <stdio.h>
#include <string.h>
int main(void)
{//Declaring Variables
    int year, month;     
    char a, b, c; 
    int count2 = 1;
    int count = 1, log_day = 01, count1=1; 
    double sum_mr =0 , sum_er=0, total_rating=0; 
    double mor_rate, eve_rate;  
    double avg_mr = 0, avg_er = 0, avg_total = 0; 


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

    
    
    
    //loop to get three days rating
 
    do {
        printf("%d-%c%c%c-%.2d\n", year, a,b,c, log_day); 
        //getting morning rating from the user
        do {
            printf("   Morning rating (0.0-5.0): ");
            scanf("%lf", &mor_rate);
            if ((mor_rate >= 0) && (mor_rate <= 5)) { 
                
                count2 = 0; 
                
            }
            else
            {
                printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n"); 
                                            //loop to exit from morning rating 
            }
            
        } while (count2 == 1);

        //getting evening rating from the user
          
        do {
            printf("   Evening rating (0.0-5.0): ");
            scanf("%lf", &eve_rate);
            if ((eve_rate >= 0) && (eve_rate <= 5)) {
                count1 = 0; 
                

            }
            else
            {
                printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");                    //loop to exit from evening rating 
            } 
            
        } while (count1 == 1);
        printf("\n");        
        log_day++; 
        sum_mr = sum_mr + mor_rate;
        sum_er = sum_er + eve_rate;  
    } while (log_day < 4);   
    printf("Summary\n"
        "=======\n");
    printf("Morning total rating: %0.3lf\n", sum_mr); 
    printf("Evening total rating: %6.3lf\n", sum_er); 

    //Adding Morning ratings and Evening ratings of three days
    total_rating=sum_mr + sum_er; 
    printf("----------------------------\n"
        "Overall total rating: %0.3lf\n\n", total_rating); 
          
    //Calculation for average morning rating, average evening rating, average total rating
    avg_mr = sum_mr / 3;
    avg_er = sum_er / 3;
    avg_total = (avg_mr + avg_er)/2;
    printf("Average morning rating:%5.1lf\n", avg_mr); 
    printf("Average evening rating:%5.1lf\n", avg_er); 
    printf("----------------------------\n"
        "Average overall rating:%5.1lf\n", avg_total);  




    return 0;

}