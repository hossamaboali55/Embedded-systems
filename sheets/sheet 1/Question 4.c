
//Write a program that take two numbers and multiply them without using * operation

#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int num,i,n1,n2,base,mult=0;

    for(;;)
    {
        n1=0;
        n2=0;
        base=0;
        mult=0;
        printf("enter two numbers\n");
        scanf("%d",&n1);
         printf("\n");
           scanf("%d",&n2);
           base=n1;
        for(i=1;i<=n2;i++)
        {
            mult=mult+base;

        }
        printf("the mult is =%d \n --\n",mult);
    }




    return 0;
}