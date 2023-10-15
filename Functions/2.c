// Write a function to calculate HCF of two numbers. (TSRS)
#include<stdio.h>
int HCF(int,int);
int main()
{
    int a,b,H;
    printf("enter two numbers ");
    scanf("%d%d",&a,&b);
    H=HCF(a,b);
    printf("HCF is %d",H);
    return 0;
}
int HCF(int a,int b)
{
    int min,h;
    min=a>b?b:a;
    for(h=min;h>=1;h--)
    {
        if(a%h==0 && b%h==0)
            break;
    }
    return h;
}

