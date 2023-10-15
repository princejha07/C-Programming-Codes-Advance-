// Write a function to swap values of two int variables of calling function. (TSRS)
#include<stdio.h>
void swap(int*,int*);
int main()
{
    int a,b;
    printf("enter two numbers ");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("swapped values are: a=%d and b=%d",a,b);
    return 0;
}
void swap(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
