#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int num,i,sum=0,n;

    for(;;)
    {
        sum=0;
        printf("enter the total numbers\n");
        scanf("%d",&num);
        for(i=1;i<=num;i++)
        {
            printf("the value %d  :",i);
            scanf("%d",&n);
            sum=sum+n;
        }
        printf("the sum is =%d \n --\n",sum);
    }




    return 0;
}