// Write a recursive function to calculate sum of first N even natural numbers
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    printf("%d",sum_even(n));
    return 0;
}
int sum_even(int n)
{   int s;
    if(n==1)
        return 2;
    s=2*n+sum_even(n-1);
    return s;
}
