// Write a function in C to print all unique elements in an array.
#include<stdio.h>
void unique_elements(int[],int);
int main()
{
    int a[10],i;
    printf("enter 10 elements ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    unique_elements(a,10);
    return 0;
}
void unique_elements(int b[],int size)
{
    int i,j,count;
    for(i=0;i<size;i++)
    {
        count=0;
        for(j=0;j<size;j++)
        {
            if(b[i]==b[j])
                count++;
        }
        if(count==1)
            printf("%d ",b[i]);
    }
}
