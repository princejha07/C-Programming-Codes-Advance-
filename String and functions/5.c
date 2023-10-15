// Write a function to transform a string into lowercase
#include<stdio.h>
char* lowercase(char[]);
int main()
{
    char str[20]={"PRINCE"};
    printf("%s",lowercase(str));
    return 0;
}
char* lowercase(char s[])
{
    int i;
    for(i=0;s[i];i++)
    {
        if(s[i]>='A' && s[i]<='Z')
            s[i]+=32;
    }
    return s;
}

