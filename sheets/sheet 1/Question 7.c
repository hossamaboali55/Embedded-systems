//Write a program that reads a positive integer and computes the factorial.


#include <stdio.h>

int main()
{
     int n,i,sum;

    for(;;)
    {
        sum=1;
        printf("Enter the positive number\n");
        scanf("%d",&n);
        if(n<=0)
        {
            printf("Error! Factorial of a negative number doesn't exist.");
        }
        else
        {
            for(i=1; i<=n; i=i+1)
            {
                sum=sum*i;


            }
            printf("the factorial =%d\n",sum);
        }

    }


    return 0;
}