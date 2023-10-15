// Write a program to calculate the length of the string. (without using built-in method)
#include<stdio.h>
int main()
{
    char str[20],i;
    printf("enter a string ");
    fgets(str,20,stdin);
    for(i=0;str[i];i++)
    {
        if(str[i]=='\n')
            str[i]='\0';
    }
    for(i=0;str[i];i++);
    printf("length is %d",i);
    return 0;
}
