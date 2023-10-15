// Write a program in C to find the transpose of a given matrix.
#include<stdio.h>
int main()
{
    int a[3][3],i,j;
    printf("enter the elements of 1st matrix \n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nTranspose matrix: \n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
  return 0;
}
