#include<stdio.h>
#include<cs50.h>
int main (void)
{
    int height;
    int c = 0;
    do
    {
        printf("Height?\n");
        height = get_int();

    }while(height < 0 || height > 23);

    for(int a = height; a > 0; a--)
    {
        for(int b = 0; b < a - 1; b++)
        {
            printf(" ");

        }
        printf("#");
        c++;
        for (int d = 0; d < c; d++)
        {
            printf("#");
        }
        printf("\n");
    }
}