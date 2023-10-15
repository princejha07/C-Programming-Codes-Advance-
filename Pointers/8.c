// Write a program to compute the sum of all elements in an array using pointers.
#include<stdio.h>
int main()
{
    int a[5],i,*p,sum=0;
    printf("enter 5 elements ");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    p=a;
    for(i=0;i<5;i++)
    {
        sum=sum+(*(p+i));
    }
    printf("sum is %d",sum);
    return 0;
}
