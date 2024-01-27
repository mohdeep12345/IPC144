/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #2 (P1)
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

#define SIZE 11
#include <stdio.h>





    int main(void) {

        char fName[SIZE];

        printf("Enter First Name: ");

        //Obtain input and store in fname

        scanf("%s", fName);

        // Print each character at a time until all characters are printed.

        int i = 0;



        while (fName[i] != '\0') {



            printf("%c\n", fName[i]);

            i++;



        }



        return 0;

    }

