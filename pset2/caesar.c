#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    // declare variables
    string inputString = ""; 
    int key;

    // if the length of the array is not 2
    if (argc != 2)
    {
        printf("Error, incorrect number of inputs!\n");
        return  1;
    }
    else
    {   
        // if the command line arg isn't a number
        if (isdigit(argv[1][0]))
        {
            // convert alpha to int
            key = atoi(argv[1]) % 26;
            inputString = GetString();
    
            // cycle through the elements of the input
            for (int i = 0; i < strlen(inputString); i++)
            {
                // if capital letter
                if (inputString[i] >= 'A' && inputString[i] <= 'Z')
                {
                    // loop if greater that Z
                    if ((inputString[i] + key) > 'Z')
                    {
                        printf("%c", (((inputString[i] - 'A') + key)
                                    % 26) + 'A' );
                    }
                    else 
                    {
                        printf("%c", inputString[i] + key);
                    }

                }
                // if lower case letter
                else if (inputString[i] >= 'a' && inputString[i] <= 'z')
                {
                    // loop if greater that z
                    if ((inputString[i] + key) > 'z')
                    { 
                        printf("%c", (((inputString[i] - 'a') + key)
                                   % 26) + 'a' );
                    }
                    else 
                    {
                        printf("%c", inputString[i] + key);
                    }

                }
                else
                {
                    printf("%c", inputString[i]);
                }
            }
        }
        else 
        {
            printf("Key must be a number\n");
        }
        
        printf("\n");
        return 0;
    }
    
}
