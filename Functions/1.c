// Write a function to calculate LCM of two numbers. (TSRS)
#include<stdio.h>
int LCM(int,int);
int main()
{
    int a,b,L;
    printf("enter two numbers ");
    scanf("%d%d",&a,&b);
    L=LCM(a,b);
    printf("LCM is %d",L);
    return 0;
}
int LCM(int a,int b)
{
    int max,l;
    max=a>b?a:b;
    for(l=max;l<=a*b;l=l+max)
    {
        if(l%a==0 && l%b==0)
            break;
    }
    return l;
}
