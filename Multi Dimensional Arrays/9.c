// Write a program in C to accept a matrix and determine whether it is a sparse matrix.
#include<stdio.h>
int main()
{
    int a[3][3],i,j,count=0;
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
            if(a[i][j]==0)
                count++;
        }
    }
    if(count>9/2)
        printf("sparse matrix");
    else
        printf("dense matrix");
    return 0;
}
