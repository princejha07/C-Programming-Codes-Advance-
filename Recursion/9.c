// Write a recursive function to print octal of a given decimal number
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    DtoO(n);
    return 0;
}
void DtoO(int n)
{
    if(n>=1)
    {
        DtoO(n/8);
        printf("%d",n%8);
    }
}

