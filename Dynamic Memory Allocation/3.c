// Write a program to calculate the sum of n numbers entered by the user using malloc and free.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*p,i,sum=0;
    printf("how many data values you want to enter ");
    scanf("%d",&n);
    p=(int*)malloc(sizeof(int)*n);
    if(p==NULL)
    {
        printf("not able to allocate the memory ");
        return 1;
    }
    printf("enter %d elements \n",n);
    for(i=0;i<n;i++)
        scanf("%d",(p+i));
    for(i=0;i<n;i++)
        sum=sum+(*(p+i));
    printf("sum of data values are %d",sum);
    return 0;
}
