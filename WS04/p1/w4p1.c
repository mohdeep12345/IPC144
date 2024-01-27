/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #4 (P1)
Full Name  : Mohdeep Singh  
Student ID#: 109600239
Email      : msingh810@myseneca.ca
Section    : NBB

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{

    //Declaring Variable
    char user_input;
    int x;
    int loop=1;
    int no = 0;
    printf("+----------------------+\n"
        "Loop application STARTED\n"
        "+----------------------+\n\n");

    //Ruuning a loop until loop get 0 or Q0 entered
    while(loop==1)
    {
        printf("D = do/while | W = while | F = for | Q = quit\n");
        printf("Enter loop type and the number of times to iterate (Quit=Q0): ");
        scanf("%c%d%*c", &user_input, &x);

        if (user_input == 'D' || user_input == 'W' || user_input == 'F')
        {
            if (x >= 3 && x <= 20)
            {

                if (user_input == 'D')
                {
                    printf("DO-WHILE: ");           
                    
                        do {                                    //Excuting a Do - While loop
                            printf("%c", user_input);
                            no++;
                        } while (x > no);
                        no = 0;
                        printf("\n\n");
                                        
                }


                else if (user_input == 'W')
                {
                    printf("WHILE   : ");
                    while (x > no)                              //Excuting a While loop
                    {
                        printf("%c", user_input);
                        no++;
                    }
                    no = 0;
                    printf("\n\n");

                }

                else if (user_input == 'F')
                {
                    printf("FOR     : ");
                    for (no = 0; x > no; no++)              //Excuting a For loop
                    {
                        printf("%c", user_input);
                    }
                    no = 0;
                    printf("\n\n");
                }
            }

            else {
                printf("ERROR: The number of iterations must be between 3-20 inclusive!\n\n");
            }
        }
        else
        {
            if (user_input == 'Q') 
            { 
                if (x == 0)
                {
                    loop = 0;                               //When user Entered Q0... This will end the loop by assigning 0 to loop variable
                                                  
                }
                else
                {
                    printf("ERROR: To quit, the number of iterations should be 0!\n\n");  
                }

            }
            else
            { 
                printf("ERROR: Invalid entered value(s)!\n\n");    
            }
        }
    }
    printf("\n+--------------------+\n");                                    //ENDING
    printf("Loop application ENDED\n"); 
    printf("+--------------------+\n"); 
    printf("\n"); 
    return 0;
}



    


