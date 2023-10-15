// Write a recursive function to calculate sum of squares of first n natural numbers
#include<stdio.h>
int sum_square(int n);
int main()
{
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    printf("%d",sum_square(n));
    return 0;
}
int sum_square(int n)
{   int s;
    if(n==1)
        return 1;
    s=n*n+sum_square(n-1);
    return s;
}

