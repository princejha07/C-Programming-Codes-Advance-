// Write a program in C to copy the elements of one array into another array.Take array values from the user.
#include<stdio.h>
int main()
{
    int a[10],b[10],i;
    printf("enter 10 elements ");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    for(i=0;i<10;i++)
        b[i]=a[i];
    printf("1st array ");
    for(i=0;i<10;i++)
        printf("%d ",a[i]);
    printf("\n2nd array ");
    for(i=0;i<10;i++)
        printf("%d ",b[i]);
    return 0;
}
