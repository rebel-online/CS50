#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    //Prompt positive number under 23
    do
    {
        n = get_int("Number: ");
    }
    while (n < 0 || n > 23);
     //Generate pyramid
    for (int i = 0;i < n;i++)
    {
        for (int j = i;j < n-1;j++)
        {
            printf(" ");
        }
        for (int k = n-2;k < n+i;k++)
        {
            printf("#");
        }
        printf("\n");
    }
}