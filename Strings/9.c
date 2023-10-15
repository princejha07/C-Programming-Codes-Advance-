// Write a C program to sort a string array in ascending order.
#include<stdio.h>
int main()
{
    char str[20]={"prince"},i,ch;
    int round,l;
    l=strlen(str);
    for(round=1;round<l;round++)
    {
        for(i=0;i<l-round;i++)
        {
            if(str[i]>str[i+1])
            {
                ch=str[i];
                str[i]=str[i+1];
                str[i+1]=ch;
            }
        }
    }
    printf("%s",str);
    return 0;
}
