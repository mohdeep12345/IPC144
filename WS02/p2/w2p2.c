

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{    /*
    //Declaring Variable 
    const double TAX = 0.13;
    const char patSize = 'S', salSize = 'M', tomSize = 'L';
    double sShirtprice, mShirtprice, lShirtprice;
    int pattynshirts, tommynshirts, sallynshirts ; 
    double psubTotal, ptaxes, ptotal;
    double ssubTotal, staxes, stotal;
    double tsubTotal, ttaxes, ttotal;
    double pstsubTotal, pstTax, pstTotal;


    // Get shirt Prices
    printf("Set Shirt Prices\n"
        "================\n"
        "Enter the price for a SMALL shirt: $");
    scanf("%lf", &sShirtprice);
    printf("Enter the price for a MEDIUM shirt: $");
    scanf("%lf", &mShirtprice);
    printf("Enter the price for a LARGE shirt: $");
    scanf("%lf", &lShirtprice); 

    //Display shirt price list
    printf("\nShirt Store Price List\n"
        "======================\n");
    printf("SMALL  : $%.2lf\n", sShirtprice);
    printf("MEDIUM : $%.2lf\n", mShirtprice);
    printf("LARGE  : $%.2lf\n", lShirtprice);
    
    //Patty's information
    printf("\nPatty's shirt size is \'%c\'\n", patSize);
    printf("Number of shirts Patty is buying: ");
    scanf("%d", &pattynshirts); 

    //Tommy's information
    printf("\nTommy's shirt size is \'%c\'\n", tomSize);
    printf("Number of shirts Tommy is buying: ");
    scanf("%d", &tommynshirts); 

    //Sally's information
    printf("\nSally's shirt size is \'%c\'\n", salSize);  
    printf("Number of shirts Sally is buying: ");
    scanf("%d", &sallynshirts); 

   
    //Calculate the shopping cart for Patty
    psubTotal = sShirtprice * pattynshirts;  
    ptaxes = TAX * psubTotal; 
    ptaxes = ptaxes + 0.005; 
    ptaxes = ptaxes * 100; 
    ptaxes = (int)ptaxes;  
    ptaxes = ptaxes / 100;   
    ptotal = psubTotal + ptaxes; 

    //Calculate the shopping cart for Tommy
    tsubTotal = lShirtprice * tommynshirts;   
    ttaxes = TAX * tsubTotal;
    ttaxes = ttaxes + 0.005;
    ttaxes = ttaxes * 100;
    ttaxes = (int)ttaxes;
    ttaxes = ttaxes / 100;
    ttotal = tsubTotal + ttaxes;

    //Calculate the shopping cart for Sally
    ssubTotal = mShirtprice * sallynshirts;  
    staxes = TAX * ssubTotal; 
    staxes = staxes + 0.005;
    staxes = staxes * 100;
    staxes = (int)staxes;
    staxes = staxes / 100;
    stotal = ssubTotal + staxes; 

    // Display the shopping cart for all three
    printf("\nCustomer Size Price Qty Sub-Total       Tax     Total\n"
        "-------- ---- ----- --- --------- --------- ---------\n");
    printf("Patty    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n", patSize, sShirtprice, pattynshirts, psubTotal, ptaxes, ptotal); 
    printf("Sally    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n", salSize, mShirtprice, sallynshirts, ssubTotal, staxes, stotal); 
    printf("Tommy    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n", tomSize, lShirtprice, tommynshirts, tsubTotal, ttaxes, ttotal); 
    printf("-------- ---- ----- --- --------- --------- ---------\n"); 


    pstsubTotal = ssubTotal + psubTotal + tsubTotal; 
    pstTax = staxes + ptaxes + ttaxes;
    pstTotal = stotal + ptotal + ttotal;


    printf("%33.4lf %9.4lf %9.4lf\n", pstsubTotal, pstTax, pstTotal);

    //Declare Variable for coins breakdown
    int toonies, loonies, quarter, dims, nickels, pennies; 
    double bto, bl, bq, bd, bn, bp;
    
    // toonies calc.
    toonies = (int)pstsubTotal / 2;
    bto = (int)(pstsubTotal * 100) % 200 / 100.0;

    // loonies calc.
    loonies = (int)bto / 1;
    bl = (int)(bto * 100) % 100 / 100.0;

    // Quarters calc.
    quarter = (int)(bl *100) / 25;
    bq = (int)(bl * 100) % 25 / 100.0;

    // Dims calc.
    dims = (int)(bq*100) / 10;
    bd = (int)(bq * 100) % 10 / 100.0;

    // nickels calc.
    nickels = (int)(bd*100) / 5; 
    bn = (int)(bd * 100) % 5 / 100.0;

    // Pennies calc.
    pennies = (int)(bn*100) / 1;
    bp = (int)(bn * 100) % 1 / 100.0;

    printf("\nDaily retail sales represented by coins\n"
        "=======================================\n\n"
        "Sales EXCLUDING tax\n"
        "Coin     Qty   Balance\n"
        "-------- --- ---------\n"); 
    printf("              %.4lf\n", pstsubTotal);
    printf("Toonies  %d    %.4lf\n", toonies, bto);
    printf("Loonies    %d    %.4lf\n", loonies, bl);
    printf("Quarters   %d    %.4lf\n", quarter, bq);
    printf("Dimes      %d    %.4lf\n", dims, bd);
    printf("Nickels    %d    %.4lf\n", nickels, bn);  
    printf("Pennies    %d    %.4lf\n\n", pennies, bp);

    //Average of shirts Excluding tax
    double avrgofshirt;
    avrgofshirt = pstsubTotal / (pattynshirts + sallynshirts + tommynshirts)  ; 

        printf("Average cost/shirt: $%.4lf\n\n", avrgofshirt);   
        
        // Sales including tax
    printf( "Sales INCLUDING tax\n"
            "Coin     Qty   Balance\n"
            "-------- --- ---------\n");

    //Declare Variable for coins breakdown
    int itoonies, iloonies, iquarter, idims, inickels, ipennies;
    double ibto, ibl, ibq, ibd, ibn, ibp;

    // toonies calc.
    itoonies = (int)pstTotal / 2; 
    ibto = (int)(pstTotal * 100) % 200 / 100.0; 

    // loonies calc.
    iloonies = (int)ibto / 1;
    ibl = ((int)(ibto * 100) % 100) / 100.0; 

    // Quarters calc.
    iquarter = (int)(ibl * 100) / 25; 
    ibq = ((int)(ibl * 100) % 25) / 100.0; 
    ibq = ibq + 0.01;

    // Dims calc.  
    idims = (int)(ibq * 100) / 10; 
    ibd = ((int)(ibq * 100) % 10) / 100.0;
    ibd = ibd + 0.01;

    // nickels calc.
    inickels = (int)(ibd * 100) / 5;
    ibn = ((int)(ibd * 100) % 5) / 100.0; 
    ibn = ibn + 0.01;

    // Pennies calc.
    ipennies = (int)(ibn * 100) / 1;
    ibp = ((int)(ibn * 100) % 1) / 100.0;

    
    printf("              %.4lf\n", pstTotal);   
    printf("Toonies  %d    %.4lf\n", itoonies, ibto);
    printf("Loonies    %d    %.4lf\n", iloonies, ibl);
    printf("Quarters   %d    %.4lf\n", iquarter, ibq);
    printf("Dimes      %d    %.4lf\n", idims, ibd);
    printf("Nickels    %d    %.4lf\n", inickels, ibn);
    printf("Pennies    %d    %.4lf\n\n", ipennies, ibp);

    //Average of shirts including tax
    double iavrgofshirt;  
    iavrgofshirt = pstTotal/(pattynshirts + sallynshirts + tommynshirts);    

    printf("Average cost/shirt: $%.4lf\n\n", iavrgofshirt); 
    */



if (x > y)

{

    if (Blank 1) { printf("X>Y>Z"); }

    else if (Blank 2) { printf("X>Z>Y"); }

    else { printf("Z>X>Y"); }

}

else

{

    if (Blank 3) { printf("Y>X>Z"); }

    else if (Blank 4) { printf("Y>Z>X"); }

    else { printf("Z>Y>X"); }

}

}




    return 0;
}