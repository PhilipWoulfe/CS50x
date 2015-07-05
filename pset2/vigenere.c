#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

// prototyes
bool isalphastr();
int whichkey();

// global variables
int counter = 0;

int main(int argc, string argv[])
{
    string inputString = "";
    // string outputString = "";
    string key = "";
    // int counter = 0;
    
    // if correct num of args
    if (argc == 2)
    {   
        // is string is all alpha
        if (isalphastr(argv[1]))
        {
            key = argv[1];
            inputString = GetString();
            
            // cycle through chars
            for (int i = 0, n = strlen(inputString); i < n; i++)
            {
                char newchar = inputString[i];
                
                // is c is alpha
                if (isalpha(newchar))
                {
                    if (isupper(newchar))
                    {
                        // print new version of char
                        printf("%c", (((newchar - 'A') + whichkey(key)) % 26)
                                + 'A');
                    }
                    else
                    {                        
                        // print new version of char
                        printf("%c", (((newchar - 'a') + whichkey(key)) % 26)
                                + 'a');
                    }
                }
                else 
                {
                    printf("%c", inputString[i]);
                }
            }
            printf("\n");
            
            return 0;
            
        }
        else 
        {
            printf("\nKey contains non alpha chars\n");
            return 1;
        }
    }
    else 
    {
        printf("\nIncorrect number of arguments\n");
        return 1;
    }
}

// method to check a string is completely alphabet chars
bool isalphastr(string newstring)
{
    bool result = false;

    for (int i = 0, n = strlen(newstring); i < n; i++)
    {
        if (isalpha(newstring[i]))
        {
            result = true;
        }
        else 
        {
            result = false;
        }
     }

    return result; 
}

// strign to determine what value the key is using
int whichkey(string newstring)
{
    char newchar = newstring[(counter++) % strlen(newstring)];
    int result;

    if (isupper(newchar))
    {
        result = newchar - 'A';
    }
    else 
    { 
        result = newchar - 'a';
    }

    return result;
}
