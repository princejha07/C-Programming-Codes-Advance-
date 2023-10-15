// Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the function.
int series(int);
int main()
{
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    printf("sum of series is %d",series(n));
    return 0;
}
int series(int n)
{
    int i,s=0;
    for(i=1;i<=n;i++)
    {
        s=s+(factorial(i)/i);
    }
    return s;
}
int factorial(int n)
{
    int f=1;
    while(n!=0)
    {
        f=f*n;
        n--;
    }
    return f;
}
