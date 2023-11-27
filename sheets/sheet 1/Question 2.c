//Write a program to take numbers from user and find the max and min from them (let users choose the No of numbers).


#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int num,i,max=0,min,n;

    for(;;)
    {
        printf("enter the total numbers\n");
        scanf("%d",&num);
        min=num;
        for(i=1;i<=num;i++)
        {
            printf("the value %d  :",i);
            scanf("%d",&n);
            if(n>max)
            {
            max=n;
            }
             if(n<min)
            {
            min=n;
            }
        }
        printf("the max is =%d the min is =%d\n --\n",max,min);
    }




    return 0;
}