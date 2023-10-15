/* Write a function to find the first occurrence of adjacent duplicate values in the array.
 Function has to return the value of the element. */
 #include<stdio.h>
 int adjacent_duplicate(int b[],int size);
int main()
{
    int a[5],i,ad;
    printf("enter 5 elements ");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    ad=adjacent_duplicate(a,5);
    if(ad==-1)
        printf("no adjacent duplicate elements found ");
    else
    printf("adjacent duplicate is %d",ad);
    return 0;
}
int adjacent_duplicate(int b[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        if(b[i]==b[i+1])
            return b[i];
    }
    return -1;
}
