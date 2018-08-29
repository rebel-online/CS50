#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    // Prompt for credit card number
    long long n;
    do
    {
        n = get_long_long("Enter your credit card number: ");
    }
    while (n < 0);

    //Checksum
    long long na = n;
    long long a = 0;
    while(na)
    {
        a = a + (na % 10);
        na = na / 100;
    }

    long long b = 0;
    long long c = 0;
    long long nb = n / 10;
    long long mb;
    while(nb)
    {
        mb = nb % 10;
        if (mb >= 5)
        {
            b = b + ((mb * 2) % 10) + ((mb * 2) / 10);
        }
        if (mb < 5)
        {
            c = c + (mb * 2);
        }
        nb = nb / 100;
    }

    long long r = (a + b + c) % 10;
    //Amex 15 digits
    long long am = n / 10000000000000;
    long long amo = 99999999999999;
    long long amu = 1000000000000000;
    long long mc = n / 100000000000000;
    long long mco = 999999999999999;
    long long mcu = 10000000000000000;
    long long vso = 999999999999;
    long long vsu = 10000000000000;
    long long vsa = n / 1000000000000;
    long long vsb = n / 1000000000000000;
    if (n > amo && n < amu && r == 0 && (am == 34 || am == 37))
    {
        printf("AMEX\n");
    }
    //MasterCard 16 digits
    else if (n > mco && n < mcu && r == 0 && (mc == 51 || mc == 52 || mc == 53 || mc == 54 || mc == 55))
    {
        printf("MASTERCARD\n");
    }
    //MasterCard 13 digits
    else if (n > vso && n < vsu && r == 0 && vsa == 4)
    {
        printf("VISA\n");
    }
    //Visa 16 digits
    else if (n > mco && n < mcu && r == 0 && vsb == 4)
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
}