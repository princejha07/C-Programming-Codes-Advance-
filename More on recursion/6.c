// Write a recursive function to calculate factorial of a given number
int main()
{
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    printf("%d",factorial(n));
    return 0;
}
int factorial(int n)
{
    if(n==1)
        return 1;
    return(n*factorial(n-1));
}

