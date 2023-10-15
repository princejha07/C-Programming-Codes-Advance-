// Write a function to print first N terms of Fibonacci series (TSRN)
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}
void fibonacci(int n)
{
    int a=-1,b=1,c;
    int i;
    for(i=1;i<=n;i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;b=c;
    }
}
