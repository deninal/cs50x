#include <cs50.h>
#include <stdio.h>

int times(int n);
int main(void)
{
    printf("How many minutes did you spent in the shower? ");
    int x = get_int();
    printf("You used %i bottles of drinking water\n", times(x));
}
int times (int n)
{
    return n*12;
}