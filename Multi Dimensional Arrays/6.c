// Write a program in C to find the sum of rows and columns of a Matrix.
#include<stdio.h>
int main()
{
    int a[3][3],i,j,sum;
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
        sum=0;
        for(j=0;j<=2;j++)
        {
            sum=sum+a[i][j];
        }
        printf("sum of row %d is %d",i+1,sum);
        printf("\n");
    }
    for(i=0;i<=2;i++)
    {
        sum=0;
        for(j=0;j<=2;j++)
        {
            sum=sum+a[j][i];
        }
        printf("sum of column %d is %d",i+1,sum);
        printf("\n");
    }
    return 0;
}
