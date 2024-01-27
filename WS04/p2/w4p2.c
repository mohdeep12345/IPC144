/*
*****************************************************************************
                          Workshop - #4 (P2)
Full Name  : Mohdeep Singh  
Student ID#: 109600239
Email      : msingh820@myseneca.ca
Section    : NBB

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{

    int stock_apples, stock_oranges, stock_pears, stock_tomatoes, stock_cabbages;
    int need_apples, need_oranges, need_pears, need_tomatoes, need_cabbages;
    int continue_shopping = 1;

    while (continue_shopping == 1) {
        printf("Grocery Shopping\n"
            "================\n");

        
            printf("How many APPLES do you need? : ");
            scanf("%d", &stock_apples);
            while (stock_apples < 0)                // loop runs until we get the apples value more than 0
            {
                printf("ERROR: Value must be 0 or more.\n");
                printf("How many APPLES do you need? : ");
                scanf("%d", &stock_apples);  
            }
            printf("\n"); 
        
            printf("How many ORANGES do you need? : ");    
            scanf("%d", &stock_oranges);
            while (stock_oranges < 0)                     // loop runs until we get the oranges value more than 0
            {
                printf("ERROR: Value must be 0 or more.\n");
                printf("How many ORANGES do you need? : ");
                scanf("%d", &stock_oranges); 
            }
            printf("\n");
        

            printf("How many PEARS do you need? : ");      
            scanf("%d", &stock_pears); 
            while (stock_pears < 0)                           // loop runs until we get the pears value more than 0
            {
                printf("ERROR: Value must be 0 or more.\n");
                printf("How many PEARS do you need? : ");
                scanf("%d", &stock_pears);
            }
            printf("\n");

            printf("How many TOMATOES do you need? : ");
            scanf("%d", &stock_tomatoes); 
            while (stock_tomatoes < 0)                        // loop runs until we get the tomatoes value more than 0
            {
                printf("ERROR: Value must be 0 or more.\n");
                printf("How many TOMATOES do you need? : ");
                scanf("%d", &stock_tomatoes); 
            }
            printf("\n");

            printf("How many CABBAGES do you need? : "); 
            scanf("%d", &stock_cabbages); 
            while (stock_cabbages < 0)                        // loop runs until we get the cabbages value more than 0
            {
                printf("ERROR: Value must be 0 or more.\n");
                printf("How many CABBAGES do you need? : ");
                scanf("%d", &stock_cabbages);
            }
            printf("\n");

        printf("--------------------------\n"
            "Time to pick the products!\n"
            "--------------------------\n\n");

        // Picking up Apples
        while (stock_apples > 0)
        {
            printf("Pick some APPLES... how many did you pick? : ");
            scanf("%d", &need_apples);

            if (need_apples > stock_apples)
            {
                printf("You picked too many... only %d more APPLE(S) are needed.\n", stock_apples);
            }
            else if (need_apples <= 0)
            {
                printf("ERROR: You must pick at least 1!\n");
            }
            else if ((need_apples < stock_apples) && (need_apples > 0))
            {
                printf("Looks like we still need some APPLES...\n");
                stock_apples = stock_apples - need_apples;
            }
            else if (need_apples == stock_apples)
            {
                printf("Great, that's the apples done!\n\n");
                break;
            }
        }

        // Picking up Oranges
        while (stock_oranges > 0)
        {
            printf("Pick some ORANGES... how many did you pick? : ");
            scanf("%d", &need_oranges);

            if (need_oranges > stock_oranges)
            {
                printf("You picked too many... only %d more ORANGE(S) are needed.\n", stock_oranges);
            }
            else if (need_oranges <= 0)
            {
                printf("ERROR: You must pick at least 1!\n");
            }
            else if ((need_oranges < stock_oranges) && (need_oranges > 0))
            {
                printf("Looks like we still need some ORANGES...\n");
                stock_oranges = stock_oranges - need_oranges;
            }
            else if (need_oranges == stock_oranges)
            {
                printf("Great, that's the oranges done!\n\n");
                break;
            }
        }
        //Picking up PEARS
        while (stock_pears > 0)
        {
            printf("Pick some PEARS... how many did you pick? : ");
            scanf("%d", &need_pears);

            if (need_pears > stock_pears)
            {
                printf("You picked too many... only %d more PEAR(S) are needed.\n", stock_pears);
            }
            else if (need_pears <= 0)
            {
                printf("ERROR: You must pick at least 1!\n");
            }
            else if ((need_pears < stock_pears) && (need_pears > 0))
            {
                printf("Looks like we still need some PEARS...\n");
                stock_pears = stock_pears - need_pears;
            }
            else if (need_pears == stock_pears)
            {
                printf("Great, that's the pears done!\n\n");
                break;
            }
        }
        // Picking up Tomatoes
        while (stock_tomatoes > 0) 
        {
            printf("Pick some TOMATOES... how many did you pick? : ");
            scanf("%d", &need_tomatoes);

            if (need_tomatoes > stock_tomatoes)
            {
                printf("You picked too many... only %d more TOMATO(ES) are needed.\n", stock_tomatoes);
            }
            else if (need_tomatoes <= 0)
            {
                printf("ERROR: You must pick at least 1!\n");
            }
            else if ((need_tomatoes < stock_tomatoes) && (need_tomatoes > 0))
            {
                printf("Looks like we still need some TOMATOES...\n");
                stock_tomatoes = stock_tomatoes - need_tomatoes;
            }
            else if (need_tomatoes == stock_tomatoes)
            {
                printf("Great, that's the tomatoes done!\n\n");
                break;
            }
        }
        //Picking up CABBAGES
        while (stock_cabbages > 0)
        {
            printf("Pick some CABBAGES... how many did you pick? : ");
            scanf("%d", &need_cabbages);

            if (need_cabbages > stock_cabbages)
            {
                printf("You picked too many... only %d more CABBAGE(S) are needed.\n", stock_cabbages);
            }
            else if (need_cabbages <= 0)
            {
                printf("ERROR: You must pick at least 1!\n");
            }
            else if ((need_cabbages < stock_cabbages) && (need_cabbages > 0))
            {
                printf("Looks like we still need some CABBAGES...\n");
                stock_cabbages = stock_cabbages - need_cabbages;
            }
            else if (need_cabbages == stock_cabbages)
            {
                printf("Great, that's the cabbages done!\n\n");
                break;
            }
        }

        printf("All the items are picked!\n\n"
            "Do another shopping? (0=NO): ");
        scanf("%d", &continue_shopping);
        printf("\n");
    }
    printf("Your tasks are done for today - enjoy your free time!\n"); 


    return 0;
}