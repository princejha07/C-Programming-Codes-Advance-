// Write a program to find the greatest number stored in an array of size 10. Take array values from the user.
#include<stdio.h>
int main()
{
    int a[10],i,max;
    printf("enter 10 numbers ");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    max=a[0];
    for(i=1;i<10;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    printf("maximum is %d",max);
    return 0;
}
