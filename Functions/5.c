// Write a function to print first N prime numbers (TSRN)
#include<stdio.h>
void n_prime(int n);
int main()
{
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    n_prime(n);
    return 0;
}
void n_prime(int n)
{
    int i,x;
    for(x=1;x<=n;x++)
    {
        for(i=2;i<x;i++)
        {
            if(x%i==0)
                break;
        }
        if(i==x)
            printf("%d ",x);
    }
}
