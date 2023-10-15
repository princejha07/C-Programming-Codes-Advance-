// Write a recursive function to print first N odd natural numbers
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    odd(n);
    return 0;
}
void odd(int n)
{
    if(n>=1)
    {
        odd(n-1);
        printf("%d ",2*n-1);
    }
}
