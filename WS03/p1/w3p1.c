

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{  /*
    // You will need this when converting from grams to pounds (lbs)
    const double GRAMS_IN_LBS = 453.5924;
    char cof_str1, cream1, cof_str2, cream2, cof_str3, cream3;
    char light, medium, rich;
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

    //table showing the customer 1,2,3 values
    printf("\n---+------------------------+---------------+-------+\n"
        "   |    Coffee              |   Package     | Best  |\n"
        "   |     Type               |  Bag Weight   | Served|\n"
        "   +------------------------+---------------+ With  |\n"
        "ID | Light | Medium | Rich  |  (G) | Lbs    | Cream |\n"
        "---+------------------------+---------------+-------|\n");
    printf("%d", bag_weight1);
    printf(" 1 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n", (cof_str1 == 'l') || (cof_str1 == 'L'), (cof_str1 == 'm') || (cof_str1 == 'M'), (cof_str1 == 'r') || (cof_str1 == 'R'), bag_weight1, ((double)bag_weight1 / GRAMS_IN_LBS), (cream1 == 'y' || cream1 == 'Y'));

   

    double a[3];
    double id[3];
    int i;
for(i = 0; i<3; i++) { 
    printf("Marks for %d  :", i+1);    
    scanf("%lf", &a[i]);

    printf("Id No for %d  :", i+1); 
    scanf("%lf", &id[i]);  
    printf("\n");
}
double avg;
avg = (a[0] + a[1] + a[2]) / 3;
printf("Average of three marks is :%.2lf", avg);
 */

    char name[41]; 
    int i=0;
    printf("Please Enter your First name :"); 
    scanf("%40[^\n]", name);
    while (name[i] != '\0') {
       

        printf("%c\n", name[i]);  
        i++;
    } 

      
    
    return 0;
}