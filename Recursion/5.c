// Write a recursive function to print first N even natural numbers in reverse order
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    rev_even(n);
    return 0;
}
void rev_even(int n)
{
    if(n>=1)
    {
        printf("%d ",2*n);
        rev_even(n-1);
    }
}
