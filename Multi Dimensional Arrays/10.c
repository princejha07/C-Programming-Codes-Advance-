// Write a program in C to find the row with maximum number of 1s.
#include<stdio.h>
int main()
{
    int a[3][3],i,j,count,max=0,row;
    printf("enter the elements of 1st matrix \n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<=2;i++)
    {   count=0;
        for(j=0;j<=2;j++)
        {
            if(a[i][j]==1)
                count++;
        }
        if(count>max)
        {
            max=count;
            row=i;
        }
    }
    printf("%d row has max 1 i.e %d",row,max);

    return 0;
}
