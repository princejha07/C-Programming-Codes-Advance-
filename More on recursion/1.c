// Write a recursive function to calculate sum of first N natural numbers
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0;
}
int sum(int n)
{   int s;
    if(n==1)
        return 1;
    s=n+sum(n-1);
    return s;
}
