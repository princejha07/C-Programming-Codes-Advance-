// Write a recursive function to print reverse of a given number
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    reverse(n);
    return 0;

}
void reverse(int n)
{
    if(n>=1)
    {
        printf("%d",n%10);
        reverse(n/10);
    }
}

