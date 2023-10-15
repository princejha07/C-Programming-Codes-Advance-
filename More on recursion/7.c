// Write a recursive function to calculate HCF of two numbers
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two numbers ");
    scanf("%d%d",&a,&b);
    printf("HCF is %d",HCF(a,b));
    return 0;
}
int HCF(int a,int b)
{
    if(a%b==0)
        return b;
    if(b%a==0)
        return a;
    if(a>b)
    {
        HCF(a%b,b);
    }
    else
        HCF(a,b%a);
}
