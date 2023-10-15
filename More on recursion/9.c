// Write a program in C to count the digits of a given number using recursion.
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    printf("count is %d",count_digit(n));
    return 0;
}
int count_digit(int n)
{
    if(n==0)
        return 0;
    return(1+count_digit(n/10));
}
