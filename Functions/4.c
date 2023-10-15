// Write a function to find the next prime number of a given number. (TSRS)
#include<stdio.h>
int is_prime(int);
int main()
{
   int n;
   printf("enter a number ");
   scanf("%d",&n);
   printf("next prime number is %d",next_prime(n));
   return 0;
}
int next_prime(int x)
{
    do
    {
        x++;
    }while(!(is_prime(x)));
    return x;
}
int is_prime(int x)
{
    int i;
    for(i=2;i<x;i++)
    {
        if(x%i==0)
        {
            break;
        }
    }
    if(i==x)
        return 1;
    return 0;
}

