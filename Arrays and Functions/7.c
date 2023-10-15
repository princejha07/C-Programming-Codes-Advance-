// Write a function in C to count a total number of duplicate elements in an array.
#include<stdio.h>
int main()
{
    int a[10],i,c;
    printf("enter 10 elements");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    c=duplicate_elements(a,10);
    printf("there is %d duplicate elements ",c);
    return 0;
}
int duplicate_elements(int b[],int size)
{
    int i,j,count=0;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(b[i]==b[j])
            {
                count++;
                break;
            }
        }
    }
    return count;
}
