#include <stdio.h>
#include <cs50.h>

int main(void)
{
     //Prompt user for number of rows
    int n;
    do {
        n = get_int("Number: ");
    } while (n < 0 || n > 23);
    //Loop the rows of the pyramid
    for (int i = 0;i < n;i++) {
        //Loop the left spaces for each row
        for (int j = i;j < n-1;j++) {
            printf(" ");
        }
        //Loop the left bricks for each row
        for (int k = n-1;k < n+i;k++) {
            printf("#");
        }
        //Print the gap for each row
        printf("  ");
        //Loop the right bricks for each row
        for (int l = n-1;l < n+i;l++) {
            printf("#");
        }
        //Start the next row
        printf("\n");
    }
}