// Write a function to sort an array of any size. (TSRS)
#include<stdio.h>
void sort(int b[],int size);
int main()
{
    int a[5],i;
    printf("enter 5 elements ");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    sort(a,5);
    printf("sorted array ");
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
void sort(int b[],int size)
{
    int round,i,temp;
    for(round=1;round<size;round++)
    {
        for(i=0;i<size-round;i++)
        {
            if(b[i]>b[i+1])
            {
                temp=b[i];
                b[i]=b[i+1];
                b[i+1]=temp;
            }
        }
    }
}
