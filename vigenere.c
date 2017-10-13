// Title: Vigenere cipher
// Description: A program that encrypts messages using Vigenère’s cipher

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    // Check if correct number of arguments given
    if (argc != 2)
    {
        printf("Usage: ./vigenere k\n");

        return 1;
    }
    else
    {

        for (int i = 0, n = strlen(argv[1]); i < n; i++)
        {

            if (!isalpha(argv[1][i]))
            {
                printf("Usage ./vigenere k\n");

                return 1;
            }
        }
    }
    printf("plaintext: ");

    // Store key as string and get length
    string k = argv[1];
    int kLen = strlen(k);

    // Get text to cipher
    string p = get_string();

    printf("ciphertext: ");

    // Loop through text
    for (int i = 0, j = 0, n = strlen(p); i < n; i++)
    {

        // Get key for this letter
        int letterKey = tolower(k[j % kLen]) - 'a';

        // Keep case of letter
        if (isupper(p[i]))
        {
            // Get % number and add to appropriate case
            printf("%c", 'A' + (p[i] - 'A' + letterKey) % 26);

            // Only increment j when used
            j++;
        }
        else if (islower(p[i]))
        {
            printf("%c", 'a' + (p[i] - 'a' + letterKey) % 26);
            j++;
        }
        else
        {
            // return unchanged
            printf("%c", p[i]);
        }
    }

    printf("\n");

    return 0;
}