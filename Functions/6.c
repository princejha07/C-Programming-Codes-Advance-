// Write a function to print all Prime numbers between two given numbers. (TSRN)
#include<stdio.h>
void prime(int a,int b);
int main()
{
    int a,b;
    printf("enter two numbers ");
    scanf("%d%d",&a,&b);
    prime(a,b);
    return 0;
}
void prime(int a,int b)
{
    int i,n;
    for(n=a;n<b;n++)
    {
        for(i=2;i<n;i++)
        {
            if(n%i==0)
                break;
        }
        if(i==n)
            printf("%d ",n);
    }
}
