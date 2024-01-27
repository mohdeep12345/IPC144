/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #6 (P2)
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
#define MAX_NO_OF_ITEMS 10
#define max_income 400000
#define min_income 500
#include <stdio.h>

int main()
{   //Declaring Variable
    int count1 = 1, count2 = 1, count3 = 1, count4 = 1, count5 = 1, count6 = 1;
    int wish_list_items, no_of_items = 1, i = 1, imp_no[6], item_no = 1, filter, priority;
    double item_cost[6], sum_of_cost, monthly_net_income;
    char finance[6];


    printf("+--------------------------+\n"
        "+   Wish List Forecaster   |\n"
        "+--------------------------+\n\n");
    while (count1 == 1) {
        printf("Enter your monthly NET income: $");
        scanf("%lf", &monthly_net_income);
        if (monthly_net_income < min_income) {
            printf("ERROR: You must have a consistent monthly income of at least $500.00\n\n");
        }
        else if (monthly_net_income > max_income) {
            printf("ERROR: Liar! I'll believe you if you enter a value no more than $400000.00\n\n");
        }
        else {
            count1 = 0;                  //Flag to end the loop
            printf("\n");
        }

    }
    while (count2 == 1) {
        printf("How many wish list items do you want to forecast?: ");
        scanf("%d", &wish_list_items);
        if ((wish_list_items > 0) && (wish_list_items <= 10)) {

            count2 = 0;                      //Flag to end the loop
        }
        else {
            printf("ERROR: List is restricted to between 1 and 10 items.\n\n");
        }
    }
    do {
        count3 = 1;
        count4 = 1;
        count5 = 1;
        printf("\n");
        printf("Item-%d Details:\n", no_of_items);
        while (count3 == 1) {
            printf("   Item cost: $");
            scanf("%lf", &item_cost[i]);
            if (item_cost[i] < 100) {
                printf("      ERROR: Cost must be at least $100.00\n");
            }
            else {
                count3 = 0;                  //Flag to end the loop

            }
        }

        while (count4 == 1) {
            printf("   How important is it to you? [1=must have, 2=important, 3=want]: ");
            scanf("%d", &imp_no[i]);
            if ((imp_no[i] > 0) && (imp_no[i] < 4)) {

                count4 = 0;                      //Flag to end the loop

            }
            else {
                printf("      ERROR: Value must be between 1 and 3\n");
            }


        }
        while (count5 == 1) {
            printf("   Does this item have financing options? [y/n]: ");
            scanf(" %c%*c", &finance[i]);
            if ((finance[i] != 'y') && (finance[i] != 'n')) {
                printf("      ERROR: Must be a lowercase 'y' or 'n'\n");


            }
            else {
                count5 = 0;                      //Flag to end the loop

            }


        }
        i = i + 1;
        no_of_items = no_of_items + 1;
    } while (wish_list_items >= no_of_items);

    printf("\nItem Priority Financed        Cost\n");
    printf("---- -------- -------- -----------\n");

    //Showing the user input data in a tabular form
    printf("%3d  %5d    %5c    %11.2lf\n", item_no, imp_no[1], finance[1], item_cost[1]);
    printf("%3d  %5d    %5c    %11.2lf\n", item_no + 1, imp_no[2], finance[2], item_cost[2]);
    printf("%3d  %5d    %5c    %11.2lf\n", item_no + 2, imp_no[3], finance[3], item_cost[3]);
    printf("%3d  %5d    %5c    %11.2lf\n", item_no + 3, imp_no[4], finance[4], item_cost[4]);
    printf("%3d  %5d    %5c    %11.2lf\n", item_no + 4, imp_no[5], finance[5], item_cost[5]);
    printf("---- -------- -------- -----------\n");

    //Sum of cost of all items
    sum_of_cost = item_cost[1] + item_cost[2] + item_cost[3] + item_cost[4] + item_cost[5];

    printf("                      $%11.2lf\n\n", sum_of_cost);

    do {
        printf("How do you want to forecast your wish list?\n");
        printf(" 1. All items (no filter)\n");
        printf(" 2. By priority\n");
        printf(" 0. Quit/Exit\n");
        printf("Selection: ");
        scanf("%d", &filter);
        if (filter == 1) {

            printf("\n====================================================\n");
            printf("Filter:   All items\n");
            printf("Amount:   $%.2lf\n", sum_of_cost);

            //Calculation 1. All Items Forecast

            double x = sum_of_cost / monthly_net_income;
            int years = x / 12;
            double y = (x / 12) - years;
            int monthes = (y * 12) + 1;


            printf("Forecast: %d years, %d months\n", years, monthes);
            printf("NOTE: Financing options are available on some items.\n"
                "      You can likely reduce the estimated months.\n"
                "====================================================\n\n");


        }
        else if (filter == 2) {
            printf("\nWhat priority do you want to filter by? [1-3]: ");
            scanf("%d", &priority);
            if (priority == 1) {

                double prioriy_1_sum = item_cost[1] + item_cost[4];
                printf("\n====================================================\n");
                printf("Filter:   by priority (1)\n");
                printf("Amount:   $%.2lf\n", prioriy_1_sum);  

                //Calculation 1. All Items Forecast

                double x_1 = prioriy_1_sum / monthly_net_income; 
                int years_1 = x_1 / 12;  
                double y_1 = (x_1 / 12) - years_1;   
                int monthes_1 = (y_1 * 12) + 1;  


                printf("Forecast: %d years, %d months\n", years_1, monthes_1); 
                printf("NOTE: Financing options are available on some items.\n" 
                    "      You can likely reduce the estimated months.\n"
                    "====================================================\n\n");
            }
            else if (priority == 2) {

                double prioriy_2_sum = item_cost[3]; 
                printf("\n====================================================\n");
                printf("Filter:   by priority (2)\n");
                printf("Amount:   $%.2lf\n", prioriy_2_sum); 

                //Calculation 1. All Items Forecast

                double x_2 = prioriy_2_sum / monthly_net_income; 
                int years_2 = x_2 / 12; 
                double y_2 = (x_2 / 12) - years_2; 
                int monthes_2 = (y_2 * 12) + 1;


                printf("Forecast: %d years, %d months\n", years_2, monthes_2); 
                printf("====================================================\n\n");
            }
            else if (priority == 3) {

                double prioriy_3_sum = item_cost[2]+item_cost[5];
                printf("\n====================================================\n");
                printf("Filter:   by priority (3)\n");
                printf("Amount:   $%.2lf\n", prioriy_3_sum); 

                //Calculation 1. All Items Forecast

                double x_3 = prioriy_3_sum / monthly_net_income;
                int years_3 = x_3 / 12; 
                double y_3 = (x_3 / 12) - years_3;
                int monthes_3 = (y_3 * 12) + 1; 


                printf("Forecast: %d years, %d months\n", years_3, monthes_3);
                printf("NOTE: Financing options are available on some items.\n"
                    "      You can likely reduce the estimated months.\n"
                    "====================================================\n\n");
            }
            else {
                printf("ERROR: It should be from 1 to 3\n"); 
            }
                
        }
        else if (filter == 0) {
            count6 = 0;
            printf("\n");
        }
        else
        {
            printf("\nERROR: Invalid menu selection.\n\n");
        }
    } while (count6 == 1);                                               //Flag to exit from the system of forecast
    printf("Best of luck in all your future endeavours!\n");
    return 0;
}