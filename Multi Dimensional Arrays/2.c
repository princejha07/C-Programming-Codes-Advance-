// Write a program to calculate the product of two matrices each of order 3x3.
#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3],i,j,k,sum;
    printf("enter the elements of 1st matrix \n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the elements of 2nd matrix \n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            sum=0;
            for(k=0;k<=2;k++)
            {
                sum=sum+a[i][k]*b[k][j];
            }
            c[i][j]=sum;
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
 return 0;
}
