/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #7 (P1)
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
#define MAX_PATH_LENGHT 70
#define MIN_PATH_LENGHT 10
#define MULTIPLE 5

//Making a User Defined Data type
struct Playerinfo {
    char playercharacter;  
    int no_of_lives;
    int treasure_count;
    int position_history[MAX_PATH_LENGHT]; 
};

//Making another User Defined Data type
struct Gameinfo {
    int moves;
    int path_length; 
    int bomb_location[MAX_PATH_LENGHT];
    int treasure_location[MAX_PATH_LENGHT];
    };

int main(void)
{
    // Allocation of memory for game and player
    struct Playerinfo player;
    struct Gameinfo game;
    int i, j, k;
    //Declaring variable for loop
    int  count1 = 1;

    printf("================================\n"
        "         Treasure Hunt!\n"
        "================================\n\n"
        "PLAYER Configuration\n"
        "--------------------\n");

    //Player Configration
    printf("Enter a single character to represent the player: ");
    scanf("%c", &player.playercharacter);  

    do {
        printf("Set the number of lives: "); 
        scanf("%d", &player.no_of_lives); 
        if ((player.no_of_lives <= 0) || (player.no_of_lives > MIN_PATH_LENGHT)) {  
            printf("     Must be between 1 and 10!\n"); 
        }
        else {
            count1 = 0;  
        }
    } while (count1 == 1);  
    printf("Player configuration set-up is complete\n\n");
    
    
    // Configuring the game
    printf("GAME Configuration\n"
           "------------------\n");

    do {
        printf("Set the path length (a multiple of 5 between 10-70): ");
        scanf("%d", &game.path_length);

        if ((game.path_length < MIN_PATH_LENGHT || game.path_length > MAX_PATH_LENGHT) || (game.path_length % MULTIPLE != 0))
        {
            printf("     Must be a multiple of 5 and between 10-70!!!\n");
        }
       
    } while ((game.path_length < MIN_PATH_LENGHT || game.path_length > MAX_PATH_LENGHT) || (game.path_length % MULTIPLE != 0));
    

    // Number of moves
    do {
        printf("Set the limit for number of moves allowed: ");
        scanf("%d", &game.moves);

        if (game.moves < player.no_of_lives || game.moves >(int) (0.75 * game.path_length))
        {
            printf("    Value must be between %d and %d\n", player.no_of_lives, (int)(0.75 * game.path_length));
        }
    } while (game.moves < player.no_of_lives || game.moves >(int) (0.75 * game.path_length));
    printf("\n");

    // Bomb Placement in Arrays
    printf("BOMB Placement\n"
           "--------------\n"
           "Enter the bomb positions in sets of 5 where a value\n"
           "of 1=BOMB, and 0=NO BOMB. Space-delimit your input.\n"
           "(Example: 1 0 0 1 1) NOTE: there are 35 to set!\n");

    
    // Prompting for bomb placement
    for (i = 0; i < game.path_length; i = i + 5)
    {
        printf("   Positions [%2d-%2d]: ", i + 1, i + 5);
        scanf("%d %d %d %d %d", &game.bomb_location[i], &game.bomb_location[i + 1], &game.bomb_location[i + 2], &game.bomb_location[i + 3], &game.bomb_location[i + 4]);
    }

    printf("BOMB placement set\n"); 
    printf("\n"); 


    // Treasure Placement in Arrays
    printf("TREASURE Placement\n"
    "------------------\n"
    "Enter the treasure placements in sets of 5 where a value\n"
    "of 1=TREASURE, and 0=NO TREASURE. Space-delimit your input.\n"
    "(Example: 1 0 0 1 1) NOTE: there are 35 to set!\n"); 

    // Prompting for treasure placement
    for (i = 0; i < game.path_length; i = i + 5)  
    {
        printf("   Positions [%2d-%2d]: ", i + 1, i + 5); 
        scanf("%d %d %d %d %d", &game.treasure_location[i], &game.treasure_location[i + 1], &game.treasure_location[i + 2], &game.treasure_location[i + 3], &game.treasure_location[i + 4]);
    }
    printf("TREASURE placement set\n"
           "\n"
           "GAME configuration set-up is complete...\n"
           "\n");

    // Displaying the treasure Hunt configuration settings
    printf("------------------------------------\n"
    "TREASURE HUNT Configuration Settings\n"
    "------------------------------------\n");

    // Player Details
    printf("Player:\n");
    printf("   Symbol     : %c\n", player.playercharacter); 
    printf("   Lives      : %d\n", player.no_of_lives);
    printf("   Treasure   : [ready for gameplay]\n"); 
    printf("   History    : [ready for gameplay]\n"); 
    printf("\n");

    // Game Details
    printf("Game:\n");
    printf("   Path Length: %d\n", game.path_length);

    // -----Bombs-----
    printf("   Bombs      : ");
    // Displaying bombs array
    for (j = 0; j < game.path_length; j++)
    {
        printf("%d", game.bomb_location[j]);
    }
    printf("\n");

    // Treasures
    printf("   Treasure   : ");
    // Displaying treasures array
    for (k = 0; k < game.path_length; k++) 
    {
        printf("%d", game.treasure_location[k]);  
    }
    printf("\n\n");

    // End of the Settlement .
    printf("====================================\n");
    printf("~ Get ready to play TREASURE HUNT! ~\n");
    printf("====================================\n");
    printf("\n");
    return 0;
}   
