/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #6 (P1)
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
    int count1 = 1, count2 = 1, count3 = 1, count4 = 1, count5=1;   
    int wish_list_items, no_of_items = 1, i = 1, imp_no[4], item_no = 1; 
    double item_cost[4], sum_of_cost, monthly_net_income;    
    char finance[4]; 
    

    printf("+--------------------------+\n"
           "+   Wish List Forecaster   |\n"
           "+--------------------------+\n\n");  
    while (count1 == 1) { 
        printf("Enter your monthly NET income: $");
        scanf("%lf", &monthly_net_income);
        if (monthly_net_income <min_income) {  
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
        if ((wish_list_items > 0)&&(wish_list_items <= 10)) {  
            
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
        printf("Item-%d Details:\n",no_of_items); 
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
            if ((imp_no[i] >0) && (imp_no[i]<4)) {
                 
                count4 = 0;                      //Flag to end the loop
                
            }
            else {
                printf("      ERROR: Value must be between 1 and 3\n"); 
            } 


        }
        while (count5 == 1) {
            printf("   Does this item have financing options? [y/n]: ");
            scanf(" %c%*c", &finance[i]);   
            if ((finance[i] !='y') && (finance[i] !='n')) { 
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
        printf("%3d  %5d    %5c    %11.2lf\n", item_no+1, imp_no[2], finance[2], item_cost[2]);
        printf("%3d  %5d    %5c    %11.2lf\n", item_no+2, imp_no[3], finance[3], item_cost[3]);
        printf("---- -------- -------- -----------\n");

        //Sum of cost of all items
        sum_of_cost = item_cost[1] + item_cost[2] + item_cost[3];
        
        printf("                      $%11.2lf\n\n", sum_of_cost);
        printf("Best of luck in all your future endeavours!\n\n");
   
        return 0;
} 