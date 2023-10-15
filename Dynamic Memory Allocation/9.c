/* Write a program to allocate memory dynamically of the size in bytes entered by the
user. Also handle the case when memory allocation is failed. */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*p,i;
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
        printf("%d ",*(p+i));
    return 0;
}
