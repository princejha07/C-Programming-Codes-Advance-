/* Write a program to ask the user to input a number of data values he would like to
enter then create an array dynamically to accommodate the data values. Now take
the input from the user and display the average of data values.
note: if somehow malloc or calloc is unable to allocate the memory then it returns NULL */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*p,i;
    float avg,sum=0;
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
    avg=sum/n;
    printf("average of data values are %f",avg);
    return 0;
}
