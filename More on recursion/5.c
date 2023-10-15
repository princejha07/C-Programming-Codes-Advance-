// Write a recursive function to calculate sum of digits of a given number
int main()
{
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    printf("%d",sum_digit(n));
    return 0;
}
int sum_digit(int n)
{
    if(n==0)
        return 0;
    return(n%10+sum_digit(n/10));
}
