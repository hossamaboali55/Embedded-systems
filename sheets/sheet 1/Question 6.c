//Write a program to calculate the power of a number. The number and its power are input from user.

#include <stdio.h>

int main()
{
    unsigned int base,power = 1, exponent,i;

    for(;;)
    {
        power=1;
        printf("Enter base: ");
        scanf("%d", &base);
        printf("Enter exponent: ");
        scanf("%d", &exponent);

        for(i=1; i<=exponent; i++)
        {
            power = power * base;
        }

        printf("%d ^ %d = %lld\n", base, exponent, power);
    }


    return 0;
}