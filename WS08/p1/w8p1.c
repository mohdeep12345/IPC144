/*
*****************************************************************************
						  Workshop - #8 (P1)
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



// System Libraries
#include <stdio.h>




// User Libraries
#include "w8p1.h"

// 1. Get user input of int type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
int getIntPositive(int* int_ptr) {
	int user_input; 
	int flag = 1;

	do {
		scanf("%d", &user_input); 
		if (user_input <= 0)
		{
			printf("ERROR: Enter a positive value: ");
		}
		else
		{
			flag = 0;
		}
	} while (flag==1);

	if (int_ptr != NULL)
	{
		*int_ptr = user_input;
	}
	return user_input;
}



// 2. Get user input of double type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
double getDoublePositive(double* double_ptr) {
	double user_input;
	int flag = 1;

	do {
		scanf("%lf", &user_input);

		if (user_input <= 0)
		{
			printf("ERROR: Enter a positive value: ");
		}
		else
		{
			flag = 0;
		}
	} while (flag==1);

	if (double_ptr != NULL)
	{
		*double_ptr = user_input;
	}
	return user_input;
}



// 3. Opening Message (include the number of products that need entering)
void openingMessage(const int seq_number) {

	printf("Cat Food Cost Analysis\n"
	"======================\n");
	printf("\n"); 

	printf("Enter the details for %d dry food bags of product data for analysis.\n", MAX_PRODUCTS);
	printf("NOTE: A 'serving' is %dg\n", GRAMS_NUMBER);
	printf("\n");
}

// 4. Get user input for the details of cat food product
struct CatFoodInfo getCatFoodInfo(const int seq_number) {
	struct CatFoodInfo exe;
	int flag;
	printf("Cat Food Product #%d\n", seq_number + 1);
	printf("--------------------\n");
	flag = 1;

	// SKU
	printf("SKU           : ");
	flag = 1;
	do {
		scanf("%d", &exe.skuNumber);
		if (exe.skuNumber <= 0)
		{
			printf("ERROR: Enter a positive value: ");
		}
		else
		{
			flag = 0;
		}
	} while (flag==1);

	// Price
	printf("PRICE         : $");
	flag = 1;
	do {
		scanf("%lf", &exe.productPrice);
		if (exe.productPrice <= 0)
		{
			printf("ERROR: Enter a positive value: ");
		}
		else
		{
			flag = 0;
		}
	} while (flag);

	// Weight
	printf("WEIGHT (LBS)  : ");
	flag = 1;
	do {
		scanf("%lf", &exe.productWeight);
		if (exe.productWeight <= 0)
		{
			printf("ERROR: Enter a positive value: ");
		}
		else
		{
			flag = 0;
		}
	} while (flag==1);

	// Calories
	printf("CALORIES/SERV.: ");
	flag = 1;
	do {
		scanf("%d", &exe.calories);
		if (exe.calories <= 0)
		{
			printf("ERROR: Enter a positive value: ");
		}
		else
		{
			flag = 0;
		}
	} while (flag==1);

	printf("\n");

	// Returning the struct
	return exe;

}

// 5. Display the formatted table header
void displayCatFoodHeader(void)
{
	printf("SKU         $Price    Bag-lbs Cal/Serv\n"
	"------- ---------- ---------- --------\n"); 
}

// 6. Display a formatted record of cat food data
void displayCatFoodData(int sku_number, double* product_price, int calorie_per_serving, double* product_weight_lbs)
{
	printf("%07d %10.2lf %10.1lf %8d\n", sku_number, *product_price, *product_weight_lbs, calorie_per_serving);
}

// 7. Logic entry point
void start(void)
{
	int i;
	struct CatFoodInfo exe[MAX_PRODUCTS] = { {0} };
	openingMessage(MAX_PRODUCTS);

	for (i = 0; i < MAX_PRODUCTS; i++) {
		exe[i] = getCatFoodInfo(i);
	}


	displayCatFoodHeader();

	for (i = 0; i < MAX_PRODUCTS; i++) {
		displayCatFoodData(exe[i].skuNumber, &exe[i].productPrice, exe[i].calories, &exe[i].productWeight);
	}

}