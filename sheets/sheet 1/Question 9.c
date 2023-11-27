//Write a program that reads a positive integer and checks if it is a perfect square.


#include <stdio.h>

int main()
{
    int i, n;
    for(;;)
    {
         int flag=0;
        printf("Enter a number:\n ");
        scanf("%d", &n);
        for(i = 0; i <= n; i++)
        {

            if(n == i*i)
            {
                printf("%d is a Perfect Square\n", n);
                flag=1;
                break;
            }
        }
        if(flag == 0)
            printf("%d is not a Perfect Square\n", n);
    }

    return 0;
}