/**
 * mario.c 
 *
 * Philip Woulfe
 * philip.woulfe@gmail.com
 *
 * Create pyramid for mario to climb based on user input number
 */
 
#include <stdio.h>
#include <cs50.h>

int main(void) 
{
    int input = 0;
    
    
    // Takes input bewteen 0 and 24 from user from user
    do
    {
        printf("Enter the desired height (Between 1 and 23 inclusive):");
        input = GetInt();
        
        // exit if input is 0
        if (input == 0) 
        {
            return 0;
        }
    }
    while (!(input > 0 && input <= 23)); 
    
    // Creates pyramid lines
    for (int lines = 1; lines <= input; lines++)
    {   
        // Creates white space before pyramid
        for (int spaces = input - lines; spaces > 0; spaces--)
        {
            printf(" ");
        }
        
        // Creates Pyramid
        for (int blocks = 0; blocks < 1 + lines; blocks++)
        {
            printf("#");
        }
        
        printf("\n");
    }
    
    return 0;
}
