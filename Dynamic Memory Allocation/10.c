// Find out the maximum and minimum from an array using dynamic memory allocation in C.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*p,i,max,min;
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
    max=min=(*(p+0));
    for(i=1;i<n;i++)
    {
        if(*(p+i)>max)
            max=(*(p+i));
        if(*(p+i)<min)
            min=(*(p+i));
    }
    printf("largest element is %d",max);
    printf("smallest element is %d",min);
    return 0;
}
