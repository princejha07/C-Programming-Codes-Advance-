// Write a program in C to find the sum of left diagonals of a matrix.
#include<stdio.h>
int main()
{
    int a[3][3],i,j,sum=0;
    printf("enter the elements of 1st matrix \n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            if(j==2-i)
                sum=sum+a[i][j];
        }
    }
   printf("sum of left diagonal is %d",sum);
   return 0;
}
