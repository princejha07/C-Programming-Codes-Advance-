// Write a program to find second largest in an array.Take array values from the user.
/*
#include<stdio.h>
int main()
{
    int a[10],i,max;
    printf("enter 10 numbers ");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    max=a[0];
    for(i=1;i<10;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    do
    {
        max--;
        for(i=0;i<10;i++)
        {
            if(a[i]==max)
                break;
        }
        if(i!=10)
            break;
    }while(1);
    printf("second largest is %d",max);
    return 0;
}
*/
#include<stdio.h>
int main()
{
    int l,sl,i;
    int a[10];
    printf("enter 10 elements ");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    sl=l=a[0];
    for(i=1;i<10;i++)
    {
        if(a[i]>l)
        {
            sl=l;
            l=a[i];
        }
        else if(a[i]>sl)
            sl=a[i];
    }
    printf("%d is second largest",sl);
    return 0;
}
