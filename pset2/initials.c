#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    string input = GetString();
    char firstInit = input[0];
    
    printf("%c", toupper(firstInit));


    // cycle through chars in string
    for (int i = 0; i < strlen(input); i++)
    {
        // if char is a space
        if (isspace(input[i])) 
        {
            // take the next char
            int num = i + 1;
            printf("%c", toupper(input[num]));
        }
    }
    printf("\n");
}

