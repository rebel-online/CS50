#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    // Prompt for change
    float n;
    do
    {
       n = get_float("Change owed: ");
    }
    while (n < 0);

    //Convert change to pennies and round to integer
    int p = round(n * 100);

    //How many coins of change
    int c = 0;

    //How many quarters
    while ((p - 25) >= 0)
    {
        p = p - 25;
        c++;
    }
    //How many dimes
    while ((p - 10) >= 0)
    {
        p = p - 10;
        c++;
    }
    //How many nickels
    while ((p - 5) >= 0)
    {
        p = p - 5;
        c++;
    }
    //How many pennies
    while ((p - 1) >= 0)
    {
        p = p - 1;
        c++;
    }
    printf("%i\n", c);
}