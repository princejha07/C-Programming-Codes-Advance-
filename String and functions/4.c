// Write a function to transform string into uppercase
#include<stdio.h>
char* uppercase(char s[]);
int main()
{
    char str[20]={"prince"};
    printf("%s",uppercase(str));
    return 0;
}
char* uppercase(char s[])
{
    int i;
    for(i=0;s[i];i++)
    {
        if(s[i]>='a' && s[i]<='z')
            s[i]-=32;
    }
    return s;
}
