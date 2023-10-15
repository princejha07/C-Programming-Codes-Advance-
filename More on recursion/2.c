// Write a recursive function to calculate sum of first N odd natural numbers
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    printf("%d",sum_odd(n));
    return 0;
}
int sum_odd(int n)
{   int s;
    if(n==1)
        return 1;
    s=2*n-1+sum_odd(n-1);
    return s;
}
