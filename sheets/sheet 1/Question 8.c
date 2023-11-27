//Write a program that reads a positive integer and checks if it is a prime.


#include <stdio.h>

int main()
{
    int n,i,sum;

    for(;;)

    {

        printf("enter the number\n");
        scanf("%d",&n);
        for(i=2;i<n;i=i+1)
        {
            if(n%i==0)
            {
                printf(" not prime\n ");

            }
            else
            {
                printf("  prime\n ");


            }
        }
    }


    return 0;
}