// Write a program to find the maximum number between two numbers using a pointer
#include<stdio.h>
int main()
{
    int a,b,*p,*q;
    printf("enter 2 numbers ");
    scanf("%d%d",&a,&b);
    p=&a;
    q=&b;
    if(*p>*q)
        printf("%d is large",*p);
    else
        printf("%d is large",*q);
    return 0;
}
