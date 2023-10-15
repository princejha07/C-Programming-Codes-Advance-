// Write a program in C to Find the Frequency of Characters.
#include<stdio.h>
int main()
{
    char str[20],a[300]={0};
    int i;
    printf("enter a string ");
    fgets(str,20,stdin);
    for(i=0;str[i];i++)
    {
        if(str[i]=='\n')
            str[i]='\0';
    }
    for(i=0;str[i];i++)
    {
        a[str[i]]++;
    }
    for(i=0;i<300;i++)
    {
        if(a[i]!=0)
            printf("%c->%d \n",i,a[i]);
    }
    return 0;
}
