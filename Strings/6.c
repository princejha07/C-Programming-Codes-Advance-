// Write a program to reverse a string.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20]={"computer"},i,l,ch;
    l=strlen(str);
    for(i=0;i<l/2;i++)
    {
        ch=str[i];
        str[i]=str[l-1-i];
        str[l-1-i]=ch;
    }
    printf("%s",str);
    return 0;
}
