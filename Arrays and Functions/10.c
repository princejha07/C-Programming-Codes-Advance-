// Write a function in C to count the frequency of each element of an array.
#include<stdio.h>
void count_freq(int[],int);
int main()
{
    int a[10],i;
    printf("enter 10 elements ");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    count_freq(a,10);
    return 0;
}
void count_freq(int b[],int size)
{
    int arr[1000]={0},i;
    for(i=0;i<size;i++)
    {
        arr[b[i]]++;
    }
    for(i=0;i<1000;i++)
    {
        if(arr[i]!=0)
        printf("%d->%d\n",i,arr[i]);
    }
}
