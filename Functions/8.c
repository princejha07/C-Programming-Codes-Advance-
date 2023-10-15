// Write a function to print PASCAL Triangle. (TSRN)
/*
enter a number 6
      1
     1  1
    1  2  1
   1  3  3  1
  1  4  6  4  1
 1  5 10 10  5  1
 */
#include<stdio.h>
int factorial(int n);
void Pascal(int);
int combination(int n,int r);
int main()
{
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    Pascal(n);
    return 0;
}
void Pascal(int n)
{
    int i,j,r,k;
    for(i=1;i<=n;i++)
    {
        r=0;
        k=1;
        for(j=1;j<=2*n-1;j++)
        {
            if(j>=n+1-i && j<=n-1+i && k)
            {

                    printf("%2d",combination(i-1,r));
                    k=0;
                    r++;
            }
            else
            {
                printf(" ");
                k=1;
            }
        }
        printf("\n");
    }
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
int combination(int n,int r)
{
    return((factorial(n))/(factorial(r)*factorial(n-r)));
}

