//Write a program to sum the digits in a decimal number 145 -> 1+4+5=10.

#include <stdio.h>

int main()
{
    unsigned int  i,n,rem,sum;

    for(;;)
    {
        printf("enter the digit numbers\n");
        scanf("%d", &n);
        for (; n>0;)
        {
            rem=n%10;
            sum=sum+rem;
            n=n/10;
        }
        printf(" the sum =%d \n",sum);
    }

    return 0;
}