// Write a program to print the elements of an array in reverse order.
#include<stdio.h>
int main()
{
    int a[5],i,*p;
    printf("enter 5 elements ");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    p=a;
    for(i=4;i>=0;i--)
        printf("%d ",*(p+i));
    return 0;
}
