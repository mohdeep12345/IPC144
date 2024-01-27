/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #3 (P2)
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

#include <stdio.h>

int main(void)
{
    // You will need this when converting from grams to pounds (lbs)
    const double GRAMS_IN_LBS = 453.5924;
    char cof_str1, cream1, cof_str2, cream2, cof_str3, cream3; 
    
    int bag_weight1, bag_weight2, bag_weight3; 
    

    //Getting information for Coffee -1
    printf("Take a Break - Coffee Shop\n"
        "==========================\n\n"
        "Enter the coffee product information being sold today...\n\n"
        "COFFEE-1...\n");
    printf("Type ([L]ight,[M]edium,[R]ich): ");  
    scanf("%c%*c", &cof_str1);    
    printf("Bag weight (g): ");
    scanf("%d", &bag_weight1); 
    printf("Best served with cream([Y]es, [N]o):");
    scanf("%c%*c", &cream1);   

    //Getting information for Coffee -2
    printf("\n\nCOFFEE-2...\n");
    printf("Type ([L]ight,[M]edium,[R]ich): ");
    scanf("%c%*c", &cof_str2); 
    printf("Bag weight (g): "); 
    scanf("%d", &bag_weight2); 
    printf("Best served with cream([Y]es, [N]o):"); 
    scanf("%c%*c", &cream2); 

    //Getting information for Coffee -3
    printf("\n\nCOFFEE-3...\n");
    printf("Type ([L]ight,[M]edium,[R]ich): ");
    scanf("%c%*c", &cof_str3); 
    printf("Bag weight (g): ");
    scanf("%d", &bag_weight3); 
    printf("Best served with cream([Y]es, [N]o):");
    scanf("%c%*c", &cream3); 

    //table showing the coffee 1,2,3 values
    printf("\n---+------------------------+---------------+-------+\n"
           "   |    Coffee              |   Package     | Best  |\n"
           "   |     Type               |  Bag Weight   | Served|\n"
           "   +------------------------+---------------+ With  |\n"
           "ID | Light | Medium | Rich  |  (G) | Lbs    | Cream |\n"
           "---+------------------------+---------------+-------|\n");
    printf("hello");
    printf(" 1 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n", (cof_str1 == 'l') || (cof_str1 == 'L'), (cof_str1 == 'm') || (cof_str1 == 'M'), (cof_str1 == 'r' )||( cof_str1 == 'R'), bag_weight1, ((double)bag_weight1 / GRAMS_IN_LBS), (cream1 == 'y'|| cream1=='Y'));  
    printf(" 2 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n", (cof_str2 == 'l') || (cof_str2 == 'L'), (cof_str2 == 'm') || (cof_str2 == 'M'), (cof_str2 == 'r') || (cof_str2 == 'R'), bag_weight2, ((double)bag_weight2 / GRAMS_IN_LBS), (cream2 == 'y' || cream2 == 'Y')); 
    printf(" 3 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n", (cof_str3 == 'l') || (cof_str3 == 'L'), (cof_str3 == 'm') || (cof_str3 == 'M'), (cof_str3 == 'r') || (cof_str3 == 'R'), bag_weight3, ((double)bag_weight3 / GRAMS_IN_LBS), (cream3 == 'y' || cream3 == 'Y'));
  

    return 0;
}


/*

Provided formatting parts for printf statements:

As described in step-7
======================
printf(" 1 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n",

As described in step-10
=======================
printf(" 1|       %d         |      %d      |   %d   |\n",

*/