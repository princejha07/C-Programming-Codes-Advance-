// Write a program to find the second smallest number in an array.Take array values from the user.
#include<stdio.h>
int main()
{
    int a[10],i,min;
    printf("enter 10 numbers ");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    min=a[0];
    for(i=1;i<10;i++)
    {
        if(a[i]<min)
            min=a[i];
    }
    do
    {
        min++;
        for(i=0;i<10;i++)
        {
            if(min==a[i])
                break;
        }
        if(i!=10)
            break;
    }while(1);
    printf("second smallest number is %d",min);
    return 0;
}
