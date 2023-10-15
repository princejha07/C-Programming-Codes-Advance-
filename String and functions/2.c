// Write a function to reverse a string.
#include<stdio.h>
void reverse(char s[]);
int main()
{
    char str[20];
    printf("enter a string ");
    fgets(str,20,stdin);
    reverse(str);
    return 0;
}
void reverse(char s[])
{
    int i,l;
    char ch;
    for(i=0;s[i];i++)
    {
        if(s[i]=='\n')
            s[i]='\0';
    }
        for(l=0;s[l];l++);
        for(i=0;i<l/2;i++)
        {
            ch=s[i];
            s[i]=s[l-1-i];
            s[l-1-i]=ch;
        }
        printf("reversed string is %s",s);
}
