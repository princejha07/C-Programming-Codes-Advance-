// Write a recursive function to print squares of first N natural numbers
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    square(n);
    return 0;
}
void square(int n)
{
    if(n>=1)
    {
        square(n-1);
        printf("%d ",n*n);
    }
}

