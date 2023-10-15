// Write a program to print a string in reverse using a pointer
#include<stdio.h>
int main()
{
    char str[20],i,l,*p,ch;
    printf("enter a string ");
    fgets(str,20,stdin);
    for(i=0;str[i];i++)
    {
        if(str[i]=='\n')
            str[i]='\0';
    }
    p=str;
    for(l=0;*(p+l);l++);
    for(i=0;i<l/2;i++)
    {
        ch=(*(p+i));
        (*(p+i))=(*(p+l-1-i));
        (*(p+l-1-i))=ch;
    }
    printf("%s",str);
    return 0;
}
