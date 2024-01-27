/*/////////////////////////////////////////////////////////////////////////
                        Assignment 1 - Milestone 2
Full Name  : Mohdeep Singh
Student ID#: 109600239
Email      : msingh820@myseneca.ca
Section    : NBB

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/


//
// Copy your work done from Milestone #1 (core.c) into this file
// - Organize your functions in the same order as they are listed in the core.h file
// - Also copy the commented "sections" to help with finding functions quickly!
//


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> 
#include<ctype.h> 

#include "core.h"  

// Clear the standard input buffer
void clearInputBuffer(void)


{
    // Discard all remaining char's from the standard input buffer:
    while (getchar() != '\n')
    {
        ; // do nothing!
    }
}

// Wait for user to input the "enter" key to continue 
void suspend(void)
{
    printf("<ENTER> to continue...");
    clearInputBuffer();
    putchar('\n');
}

//  This function guarantees that an integer value is entered and returned. If an invalid value is entered, an error message would be displayed.
int inputInt(void) {
    char character = ' ';
    int value;

    do {
        scanf("%d%c", &value, &character);

        if (character != '\n') {
            clearInputBuffer();
            printf("Error! Input a whole number: ");
        }


    } while (character != '\n');

    // If the character after the integer is a new line character that means an appropriate value was entered
    return value;
}

// This function guarantees a positive integer value is entered and returned. If a zero or a negative value in entered, an error message would be displayed.
int inputIntPositive(void) {
    char character = ' ';
    int value;

    do {
        scanf("%d%c", &value, &character);

        if (character != '\n') {
            clearInputBuffer();
            printf("Error! Input a number: ");
        }

        if (value <= 0) {
            printf("ERROR! Value must be > 0: ");
        }
    } while (value <= 0);

    // After checking, We should return this value 
    return value;
}

/* This function ensures that an integer value is entered and returned that falls inside the range(inclusive).
Display an error message and keep prompting until a value within the specified range is supplied if a value outside the range is entered. */
int inputIntRange(int lowerBound, int upperBound) {
    char character = ' ';
    int value;

    do {
        scanf("%d%c", &value, &character);

        if (character != '\n') {
            clearInputBuffer();
            printf("Error! Input a whole number: ");
        }

        else if (!(value <= upperBound && value >= lowerBound)) {
            printf("ERROR! Value must be between -3 and 11 inclusive: ");
        }
    } while (!(value <= upperBound && value >= lowerBound));

    // Upon completion of checks, we can return the value.
    return value;
}

/* The assurance of this function is that a single character value will be entered from the list of acceptable characters and returned.
Display an error notice and ask the user again if the character they input is not among the valid characters.*/
char inputCharOption(char str[]) {
    int i, count = 0;
    char input;



    do {
        scanf(" %c", &input);

        for (i = 0; str[i] != '\0'; i++) {
            if (input == str[i]) {
                count++;
            }
        }

        if (count == 0) {
            printf("ERROR: Character must be one of [%s]: ", str);
        }
    } while (count == 0);

    //  Upon completion of checks, we can return the value.
    clearInputBuffer();
    return input;
}




// This function guarantees a C string value is entered containing the number of characters within the range specified by the 2nd and 3rd arguments.
void inputCString(char* str, int minChar, int maxChar) {
    int flag = 1;
    char ch = 'a';

    while (flag == 1) {
        int len = 0;
        // until it encounters a newline character, it accepts a string as input.
        while (ch != '\n' && len <= maxChar) {
            ch = getchar();


            str[len] = ch;
            len++;
        };

        // The string will simply have "0" added to the end to indicate its end if it is less than or equal to the maxChars.
        if (ch == '\n' && len <= (maxChar + 1)) {
            len--;
            str[len] = '\0';
        }
        //In the event that length exceeds maxChar, we shall tack on '0' and disregard the additional characters. The additional characters will also be taken out of the buffer.
        else {
            str[maxChar] = '\0';
            clearInputBuffer();
        }

        if (minChar == maxChar && len != minChar) {
            printf("ERROR: String length must be exactly %d chars: ", minChar);
            ch = 'a';
        }
        else if (len < minChar || len > maxChar) {


            if (len > maxChar) {
                printf("ERROR: String length must be no more than %d chars: ", maxChar);
                ch = 'a';
            }
            else if (len < minChar) {
                printf("ERROR: String length must be between %d and %d chars: ", minChar, maxChar);
                ch = 'a';
            }
        }
        else {
            flag = 0;
        }
    }
}

// This function's objective is to format a 10-character string of digits into a phone number and display it.
void displayFormattedPhone(char* str) {
    int len = 0, i;

    while (str != NULL && str[len] && isdigit(str[len])) {
        len++;
    }
    if (len == 10) {
        i = 0;
        printf("(");
        while (i < 3) {
            printf("%c", str[i]);
            i++;
        }
        printf(")");
        while (i < 6) {
            printf("%c", str[i]);
            i++;
        }
        printf("-");
        while (i < 10) {
            printf("%c", str[i]);
            i++;
        }
    }
    else {
        printf("(___)___-____");

    }
    if (str != 0) {
        for (i = 0; str[i] != '\0'; i++)
            len++;
    }
}