// Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]
#include<stdio.h>
void sort(int *p,int size);
int main()
{
    int a[5],i;
    printf("enter 5 numbers ");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    sort(a,5);
    for(i=0;i<5;i++)
    printf("%d ",a[i]);
    return 0;
}
void sort(int *p,int size)
{
    int round,i,temp;
    for(round=1;round<size;round++)
    {
        for(i=0;i<size-round;i++)
        {
            if(*(p+i)>(*(p+i+1)))
            {
                temp=(*(p+i));
                *(p+i)=(*(p+i+1));
                *(p+i+1)=temp;
            }
        }
    }
}
