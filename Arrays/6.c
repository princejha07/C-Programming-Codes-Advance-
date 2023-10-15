// Write a program to sort elements of an array of size 10. Take array values from the user.
#include<stdio.h>
int main()
{
    int a[10],i,round,temp;
    printf("enter 10 numbers ");
    for(i=0;i<10;i++)
     scanf("%d",&a[i]);
    for(round=1;round<10;round++)
    {
        for(i=0;i<10-round;i++)
        {
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
    for(i=0;i<10;i++)
        printf("%d ",a[i]);
    return 0;
}
