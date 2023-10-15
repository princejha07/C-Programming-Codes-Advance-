// Write a program in C to copy one string to another string.
#include<stdio.h>
int main()
{
    char a[20]={"prince"},b[20],i,j;
    for(i=0;a[i];i++)
    {
        b[i]=a[i];
    }
    printf("%s",b);
    return 0;
}
