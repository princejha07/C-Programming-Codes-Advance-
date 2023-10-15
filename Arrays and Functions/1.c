// Write a function to find the greatest number from the given array of any size. (TSRS)
#include<stdio.h>
int greatest(int b[],int size);
int main()
{
    int a[10],i,max;
    printf("enter 10 elements ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    max=greatest(a,10);
    printf("greatest element is %d",max);
    return 0;
}
int greatest(int b[],int size)
{
    int i,max;
    max=b[0];
    for(i=1;i<size;i++)
    {
        if(max<b[i])
        {
            max=b[i];
        }
    }
    return max;
}
