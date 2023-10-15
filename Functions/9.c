// Write a program in C to find the square of any number using the function.
#include<stdio.h>
int square(int);
int main()
{
    int s,n;
    printf("enter a number ");
    scanf("%d",&n);
    s=square(n);
    printf("square is %d",s);
    return 0;
}
int square(int n)
{
    return (n*n);
}
