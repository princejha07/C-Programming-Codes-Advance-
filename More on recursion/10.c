// Write a program in C to calculate the power of any number using recursion.
#include<stdio.h>
int main()
{
    int n,p;
    printf("enter a number ");
    scanf("%d",&n);
    printf("enter power ");
    scanf("%d",&p);
    printf("power of %d on %d is %d",n,p,power(n,p));
    return 0;
}
int power(int n,int p)
{
    if(p==1)
        return n;
    return(n*power(n,p-1));
}
