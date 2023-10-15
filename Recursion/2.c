// Write a recursive function to print first N natural numbers in reverse order
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    reverse(n);

}
void reverse(int n)
{
    if(n>=1)
    {
        printf("%d ",n);
        reverse(n-1);
    }
}
