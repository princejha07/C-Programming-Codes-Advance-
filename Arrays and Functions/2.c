// Write a function to find the smallest number from the given array of any size. (TSRS)
#include<stdio.h>
int smallest(int b[],int size);
int main()
{
    int a[10],i,min;
    printf("enter 10 elements ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    min=smallest(a,10);
    printf("smallest element is %d",min);
    return 0;
}
int smallest(int b[],int size)
{
    int i,min;
    min=b[0];
    for(i=1;i<size;i++)
    {
        if(min>b[i])
        {
            min=b[i];
        }
    }
    return min;
}

