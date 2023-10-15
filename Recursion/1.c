// Write a recursive function to print first N natural numbers
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    print(n);
}
void print(int n)
{
    if(n>=1)
    {
        print(n-1);
        printf("%d ",n);
    }
}
