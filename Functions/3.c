// Write a function to check whether a given number is Prime or not. (TSRS)
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    if(is_prime(n))
        printf("Prime number");
    else
        printf("not prime number");
    return 0;
}
int is_prime(int x)
{
    int i;
    for(i=2;i<x;i++)
    {
        if(x%i==0)
        {
            break;
        }
    }
    if(i==x)
        return 1;
    return 0;
}
