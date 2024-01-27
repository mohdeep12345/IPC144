/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #8 (P2)
Full Name  : Mohdeep Singh  
Student ID#: 109600239
Email      : msingh820@myseneca.ca
Section    : NBB

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define POUNDSTOKG 2.20462 

#define MAX_PRODUCTS 3


#define GRAMS_NUMBER 64





// ----------------------------------------------------------------------------
// structures

struct ReportData
{
    int skuNumber;
    double productPrice;
    int calories;
    double productWeightPounds;
    double productWeightKilos;
    int productWeightGrams;
    double servings;
    double costPerServing;
    double costCaloriesPerServing;
};

struct CatFoodInfo {
    int skuNumber; 
    double productPrice; 
    int calories;
    double productWeight;
};

// ----------------------------------------------------------------------------
// function prototypes

// 1. Get user input of int type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
int getIntPositive(int*);

// 2. Get user input of double type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
double getDoublePositive(double*);

// 3. Opening Message (include the number of products that need entering)
void openingMessage(int);

// 4. Get user input for the details of cat food product
struct CatFoodInfo getCatFoodInfo(int);

// 5. Display the formatted table header
void displayCatFoodHeader(void);

// 6. Display a formatted record of cat food data
void displayCatFoodData(int, double*, int, double*);

// 7. Logic entry point
void start(void);

// ----------------------------------------------------------------------------
// PART-2

// 8. convert lbs: kg
double convertLbsKg(const double* pounds, double* conversionResultToKg);

// 9. convert lbs: g
int convertLbsG(const double* pounds, int* conversionResultToG);

// 10. convert lbs: kg / g
void convertLbs(const double* pounds, double* conversionResultToKg, int* conversionResultToG);

// 11. calculate: servings based on gPerServ
double calculateServings(const int servingSizeGrams, const int totalGrams, double* numberOfServings);

// 12. calculate: cost per serving
double calculateCostPerServing(const double* price, const double* numberOfServings, double* result);

// 13. calculate: cost per calorie
double calculateCostPerCal(const double* price, const double* calories, double* result);

// 14. Derive a reporting detail record based on the cat food product data
struct ReportData calculateReportData(struct CatFoodInfo cfi);

// 15. Display the formatted table header for the analysis results
void displayReportHeader(void);

// 16. Display the formatted data row in the analysis table
void displayReportData(const struct ReportData rd, const int cheapestProductCheck);

// 17. Display the findings (cheapest)
void displayFinalAnalysis(const struct CatFoodInfo cfi);

// ----------------------------------------------------------------------------

// 7. Logic entry point 
void start(void);