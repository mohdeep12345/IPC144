/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #3 (P1)
Full Name  : Mohdeep Singh  
Student ID#: 109600239
Email      : msingh820
Section    : NBB

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#include <stdio.h>

int main(void)
{
    // You must use this variable in #3 data analysis section!
    const double testValue = 330.99;
    const int p1_id = 111, p2_id = 222, p3_id = 111;
    const double p1_price = 111.49, p2_price = 222.99, p3_price = 334.49;
    const char p1_tax = 'Y', p2_tax = 'N', p3_tax = 'N'; 
    double avg_price; //to store average price 

    printf("Product Information\n"
        "===================\n");

        //Showing Information for Product 1
        printf("Product-1 (ID:%d)\n", p1_id); 
        printf("  Taxed: %c\n", p1_tax);
        printf("  Price: $%.4lf\n\n", p1_price); 

        //Showing Information for Product 2
        printf("Product-2 (ID:%d)\n", p2_id);
        printf("  Taxed: %c\n", p2_tax);
        printf("  Price: $%.4lf\n\n", p2_price);
       
        //Showing Information for Product 3
        printf("Product-3 (ID:%d)\n", p3_id);
        printf("  Taxed: %c\n", p3_tax);
        printf("  Price: $%.4lf\n\n", p3_price);

        //Calculation the average price of product 1, product 2 & product 3
        avg_price = (p1_price + p2_price + p3_price)/3;        

        printf("The average of all prices is: $%.4lf\n\n", avg_price);

        //Relational & Logical Expressions
        printf("About Relational and Logical Expressions!\n"
            "========================================\n"
            "1. These expressions evaluate to TRUE or FALSE\n"
            "2. FALSE: is always represented by integer value 0\n"
            "3. TRUE : is represented by any integer value other than 0\n\n"
            "Some Data Analysis...\n"
            "=====================\n");

            //Comparing and showing results with 1 & 0, Relational & Logical Expressions
             
            printf("1. Is product 1 taxable? -> %d\n\n",p1_tax == 'y' || p1_tax == 'Y'); 
            printf("2. Are products 2 and 3 both NOT taxable (N)? -> %d\n\n", p2_tax||p3_tax != 'N');   
            printf("3. Is product 3 less than testValue ($%.2lf)? -> %d\n\n", testValue, p3_price<testValue);
            printf("4. Is the price of product 3 more than both product 1 and 2 combined? -> %d\n\n", p3_price > (p1_price + p2_price));
            printf("5. Is the price of product 1 equal to or more than the price difference\n");
            printf("   of product 3 LESS product 2? ->  %d (price difference: $%.2lf)\n\n", p1_price >= (p3_price-p2_price), (p3_price - p2_price));  
            printf("6. Is the price of product 2 equal to or more than the average price? -> %d\n\n", p2_price>=avg_price);
            printf("7. Based on product ID, product 1 is unique -> %d\n\n", (p1_id != p2_id) && (p1_id != p3_id));    
            printf("8. Based on product ID, product 2 is unique -> %d\n\n", (p2_id != p1_id) && (p2_id != p3_id));
            printf("9. Based on product ID, product 3 is unique -> %d\n\n", (p3_id != p2_id) && (p3_id != p1_id));
  
     return 0;

}