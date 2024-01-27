/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #8 (P2)
Full Name  : Mohdeep Singh
Student ID#: 109600239
Email      : msingh820@myseneca.ca
Section    : NBB

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3ef party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS

// System Libraries
#include <stdio.h>


// User Libraries
#include "w8p2.h"


// 1. Get user input of int type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
int getIntPositive(int* int_ptr) {
	int input;
	int flag = 1;

	do {
		scanf("%d", &input);
		if (input <= 0)
		{
			printf("ERROR: Enter a positive value: ");
		}
		else
		{
			flag = 0;
		}
	} while (flag == 1);

	if (int_ptr != NULL)
	{
		*int_ptr = input; 
	}
	return input;
}



// 2. Get user input of double type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
double getDoublePositive(double* double_ptr) {
	double input;
	int flag = 1;

	do {
		scanf("%lf", &input);

		if (input <= 0)
		{
			printf("ERROR: Enter a positive value: ");
		}
		else
		{
			flag = 0;
		}
	} while (flag == 1);

	if (double_ptr != NULL)
	{
		*double_ptr = input;
	}
	return input;
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
	} while (flag == 1);

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
	} while (flag == 1);

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
	} while (flag == 1);

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

// 6. Display a formatted recoef of cat food data
void displayCatFoodData(int sku_number, double* product_price, int calorie_per_serving, double* product_weight_lbs)
{
	printf("%07d %10.2lf %10.1lf %8d\n", sku_number, *product_price, *product_weight_lbs, calorie_per_serving);
}
// 7. Logic entry point

void start(void)
{
	// Struct Arrays
	struct ReportData ef[MAX_PRODUCTS] = { {0} };
	struct CatFoodInfo cfi[MAX_PRODUCTS] = { {0} };

	// Declaring variables
	int i, cheapestIndex = 0;

	// Printing the opening message
	openingMessage(MAX_PRODUCTS);

	// Filling the cfi array
	for (i = 0; i < MAX_PRODUCTS; i++) {
		cfi[i] = getCatFoodInfo(i);
		ef[i] = calculateReportData(cfi[i]);
	}

	// Dsiplaying cat food header
	displayCatFoodHeader();

	// Displaying cat food data
	for (i = 0; i < MAX_PRODUCTS; i++) {
		displayCatFoodData(cfi[i].skuNumber, &cfi[i].productPrice, cfi[i].calories, &cfi[i].productWeight);
	}

	// Determining the cheapest product's sku and price
	double cheapestProductPrice = ef[0].costPerServing;
	for (i = 0; i < MAX_PRODUCTS; i++)
	{
		if (ef[i].costPerServing <= cheapestProductPrice)
		{
			cheapestProductPrice = ef[i].costPerServing;
			cheapestIndex = i;
		}
	}
	printf("\n");

	// Displaying the report header
	displayReportHeader();

	// Displaying the report data
	for (i = 0; i < MAX_PRODUCTS; i++)
	{
		displayReportData(ef[i], cheapestIndex);

		if (cheapestIndex == i)
		{
			printf(" ***\n");
		}
		else
		{
			printf("\n");
		}
	}
	printf("\n");

	// Displaying final analysis
	for (i = 0; i < MAX_PRODUCTS; i++)
	{
		if (i == cheapestIndex)
		{
			displayFinalAnalysis(cfi[i]);
		}
	}
}
// ----------------------------------------------------------------------------
// PART-2

// 8. convert lbs: kg (divide by 2.20462)
double convertLbsKg(const double* pounds, double* conversionResultToKg) {

	double pounds_to_kg = (*pounds) / POUNDSTOKG;

	if (conversionResultToKg != NULL)
	{
		*conversionResultToKg = pounds_to_kg;
	}

	return pounds_to_kg;
}

// 9. convert lbs: g (call convertKG, then * 1000)
int convertLbsG(const double* pounds, int* conversionResultToG) {

	int poundsToG = ((*pounds) / POUNDSTOKG) * 1000; 

	if (conversionResultToG != NULL)
	{
		*conversionResultToG = poundsToG;
	}

	return poundsToG;
}

// 10. convert lbs: kg and g
void convertLbs(const double* pounds, double* conversionResultToKg, int* conversionResultToG) {

	double pounds_to_kg = (*pounds) / POUNDSTOKG;
	int poundsToG = ((*pounds) / POUNDSTOKG) * 1000; 

	if (conversionResultToG != NULL && conversionResultToKg != NULL)
	{
		*conversionResultToG = poundsToG;
		*conversionResultToKg = pounds_to_kg;
	}
}

// 11. calculate: servings based on gPerServ
double calculateServings(const int servingSizeGrams, const int totalGrams, double* numberOfServings) {

	double servings = ((double)totalGrams) / servingSizeGrams;

	if (numberOfServings != NULL)
	{
		*numberOfServings = servings;
	}

	return servings;
}

// 12. calculate: cost per serving
double calculateCostPerServing(const double* price, const double* numberOfServings, double* result) {

	double costPerServing = (*price) / (*numberOfServings);

	if (result != NULL)
	{
		*result = costPerServing;
	}

	return costPerServing;
}

// 13. calculate: cost per calorie
double calculateCostPerCal(const double* price, const double* totalCalories, double* result) {

	double costPerCal = (*price) / (*totalCalories);

	if (result != NULL)
	{
		*result = costPerCal;
	}

	return costPerCal;
}

// 14. Derive a reporting detail recoef based on the cat food product data
struct ReportData calculateReportData(struct CatFoodInfo cfi) { 

	struct ReportData ef;

	// Assigning Values
	ef.skuNumber = cfi.skuNumber;
	ef.productPrice = cfi.productPrice;
	ef.productWeightPounds = cfi.productWeight;
	ef.calories = cfi.calories;

	// Assigning calculated values
	ef.productWeightKilos = convertLbsKg(&ef.productWeightPounds, &ef.productWeightKilos);
	ef.productWeightGrams = convertLbsG(&ef.productWeightPounds, &ef.productWeightGrams);


	ef.servings = calculateServings(GRAMS_NUMBER, ef.productWeightGrams, &ef.servings);

	// Total calories
	double totalCalories = ef.calories * ef.servings;



	ef.costPerServing = calculateCostPerServing(&ef.productPrice, &ef.servings, &ef.costPerServing);

	ef.costCaloriesPerServing = calculateCostPerCal(&ef.productPrice, &totalCalories, &ef.costCaloriesPerServing);


	// Returning the struct
	return ef;
}

// 15. Display the formatted table header for the analysis results
void displayReportHeader(void)
{
	printf("Analysis Report (Note: Serving = %dg)\n", GRAMS_NUMBER);
	printf("---------------\n");
	printf("SKU         $Price    Bag-lbs     Bag-kg     Bag-g Cal/Serv Servings  $/Serv   $/Cal\n"
	"------- ---------- ---------- ---------- --------- -------- -------- ------- -------\n"); 
}

// 16. Display the formatted data row in the analysis table
void displayReportData(const struct ReportData ef, const int cheapestProductCheck) {

	printf("%07d %10.2lf %10.1lf %10.4lf %9d %8d %8.1lf %7.2lf %7.5lf", ef.skuNumber, ef.productPrice, ef.productWeightPounds, ef.productWeightKilos, ef.productWeightGrams, ef.calories, ef.servings, ef.costPerServing, ef.costCaloriesPerServing);
}

// 17. Display the findings (cheapest)
void displayFinalAnalysis(const struct CatFoodInfo cfi) {

	printf("Final Analysis\n");

	printf("--------------\n");
	printf("Based on the comparison data, the PURRR-fect economical option is:\n");

	printf("SKU:%07d Price: $%5.2lf\n", cfi.skuNumber, cfi.productPrice);
	printf("\n");

	// Ending line
	printf("Happy shopping!\n");
	printf("\n");
}


// ----------------------------------------------------------------------------
