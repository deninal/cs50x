#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    void initialize(string name);

    string name = get_string();

    // Check if null
    if (name != NULL)
    {
        initialize(name);
    }

    return 0;
}

void initialize(string name)
{
    int first = 0;

    // Get first letter as initial and checking for spaces
    while (name[first] == ' ') //increment if there is a space
    {
        first++;
    }

    printf("%c", toupper(name[first])); // first letter to uppercase

    // Go through rest of name
    for (int i = first + 1, n = strlen(name); i < n; i++)
    {
        // Get Letter after space
        while (name[i] == ' ')
        {
            i++;

            // Only print if next character is not a space
            if (i < n && name[i] != ' ')
            {
                printf("%c", toupper(name[i]));
            }
        }
    }


    printf("\n"); // Print new line
}