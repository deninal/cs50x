
/**
 * Title: Caesar Cipher
 * Descriptioon: A simple program for encrypting a message usign Caesar Cipher
 */

#include <cs50.h> //include cs50 library
#include <stdio.h>
#include <stdlib.h>
#include <string.h>//for strlen
#include <ctype.h>


int main(int argc, string argv[])
{
    //accept a single command-line argument, a non-negative integer
    string key = argv[1];
    if (argc != 2)
    {
        printf("Enter a valid key!");
        return 1;
    }
    else
    {
        // Convert a string to an integer
        int k = atoi(key) % 26;

        // Check if it is a valid key
        if (k == 0)
        {
            printf("Invalid key. Try again\n");
            return 1;
        }

		printf("plaintext: ");
        // Get the text to encrypt
        string plainText = get_string();
        if (plainText != NULL)
        {
			printf("ciphertext: ");
            // Encrypt the text and print
            for (int i = 0, n = strlen(plainText); i < n; i++)
            {

                int c = 0;

                // Check if text is upper case or lower case and if so, encrypt
                if (isupper(plainText[i]))
                {

                    c = (((int)plainText[i] - 65 + k) % 26) + 65;
                    printf("%c", (char) c);
                }
                else if (islower(plainText[i]))
                {

                    c = (((int)plainText[i] - 97 + k) % 26) + 97;
                    printf("%c", (char) c);
                }
                else
                {
                    printf("%c", plainText[i]);
                }

            }
            printf("\n");
            return 0;
        }
    }
}
