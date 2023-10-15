// Write a recursive function to print binary of a given decimal number
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    DtoB(n);
    return 0;
}
void DtoB(int n)
{
    if(n>=1)
    {
        DtoB(n/2);
        printf("%d",n%2);
    }
}
