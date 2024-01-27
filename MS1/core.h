/*/////////////////////////////////////////////////////////////////////////
                        Assignment 1 - Milestone 1
Full Name  : Mohdeep Singh
Student ID#: 109600239
Email      :msingh820@myseneca.ca
Section    :NBB

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/



#include <stdio.h>
#include<ctype.h> 
//Delete the default input buffer 
void clearInputBuffer(void);


// Wait for the user to press the "enter" key before proceeding. 
void suspend(void);

// This function ensures that both the input and the output are integer values. An error message would appear if an invalid value was entered.
int inputInt(void);

// This function guarantees a positive integer value is entered and returned. If a zero or a negative value in entered, an error message would be displayed.
int inputIntPositive(void);




/* This function ensures that an integer value is entered and returned that falls inside the range (inclusive).
Display an error message and keep prompting until a value within the specified range is supplied if a value outside the range is entered.*/
int inputIntRange(int lowerBound, int upperBound);

/*  The assurance of this function is that a single character value will be entered from the list of acceptable characters and returned.
Display an error notice and ask the user again if the character they input is not among the valid characters.*/
char inputCharOption(char str[]);

// This function guarantees a C string value is entered containing the number of characters within the range specified by the 2nd and 3rd arguments.
void inputCString(char* str, int minChar, int maxChar);

// This function's objective is to format a 10-character string of digits into a phone number and display it.
void displayFormattedPhone(char str[]);