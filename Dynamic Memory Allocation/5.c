/* Write a program to read a one dimensional array, print sum of all elements along with
inputted array elements using dynamic memory allocation. */
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
