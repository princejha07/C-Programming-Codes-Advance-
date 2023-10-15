// Write a recursive function to print first N even natural numbers
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    even(n);
    return 0;
}
void even(int n)
{
    if(n>=1)
    {
        even(n-1);
        printf("%d ",2*n);
    }
}

