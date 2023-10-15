// Write a function to calculate length of the string
#include<stdio.h>
int length(char []);
int main()
{
    char str[20],l;
    printf("enter your name ");
    fgets(str,20,stdin);
    l=length(str);
    printf("length of %s is %d",str,l);
    return 0;
}
int length(char s[])
{   int i;
    for(i=0;s[i];i++)
    {
        if(s[i]=='\n')
            s[i]='\0';
    }
        for(i=0;s[i];i++);
        return i;
}
