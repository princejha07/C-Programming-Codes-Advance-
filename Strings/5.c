// Write a program to convert a given string into lowercase
#include<stdio.h>
int main()
{
    char str[]={"PRINCE"};
    int i;
    for(i=0;str[i];i++)
    {
        if(str[i]>='A' && str[i]<='Z')
            str[i]+=32;
    }
    printf("%s",str);
    return 0;
}
