//Write a recursive function to print first N odd natural numbers in reverse order
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    rev_odd(n);
    return 0;
}
void rev_odd(int n)
{
    if(n>=1)
    {
        printf("%d ",2*n-1);
        rev_odd(n-1);
    }
}
