#include <cs50.h>

#include <stdio.h>

#include <string.h>

#include <ctype.h>

int main(int argc, string argv[]) {
    // Returns 1 if there is no message
    if (argc != 2)
    {
        printf("Usage: /home/cs50/pset/vigenere <keyword>\n>");
        return 1;
    } else if (argv[1])
    {
        int keylength = strlen(argv[1]);

        // Checks if each character are letters only
        for (int i = 0; i < keylength; i++)
        {
            if (!isalpha(argv[1][i]))
            {
                printf("Keyword must only contain letters A-Z and a-z\n");
                return 1;
            }
        }
    }
    string plaintext = GetString();
    int ptlength = strlen(plaintext);
    string key = argv[1];
    int keylength = strlen(key);
    
    for (int i = 0; i < ptlength; i++)
    {
        //printf("%c", key[i % keylength]);
        if (isalpha(plaintext[i]))
        {
            // This formula cycles 4 cases to check each character
            // of the key AND the plaintext and encrypts accordingly
            if (isupper(plaintext[i]))
            {
                if (isupper(key[i % keylength]))
                {
                    printf("%c", ((plaintext[i] - 'A' + key[i % keylength] - 'A') % 26) + 'A');
                }
                else
                {
                   printf("%c", ((plaintext[i] - 'A' + key[i % keylength] - 'a')  % 26) + 'A');    
                }
            }
            // Further explanation: Checks character is both lower
            // or lower and key is upper
            if (islower(plaintext[i]))
            {
                if (isupper(key[i % keylength]))
                {
                    printf("%c", ((plaintext[i] - 'a' + key[i % keylength] - 'A') % 26) + 'a');    
                }   
                else
                {
                    printf("%c", ((plaintext[i] - 'a' + key[i % keylength] - 'a') % 26) + 'a');    
                }                
            }   
        }
        // Other character will be printed as normal
        else
        {
            printf("%c", plaintext[i]);
        }
    }

    printf("\n");
}
