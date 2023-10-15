// Write a function in C to read n number of values in an array and display it in reverse order.
#include<stdio.h>
reverse_oreder(int [],int);
int main()
{
    int a[5],i,ad;
    printf("enter 5 elements ");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    reverse_order(a,5);
    return 0;
}
void reverse_order(int b[],int size)
{
    int i;
    for(i=size-1;i>=0;i--)
        printf("%d ",b[i]);
}
