// Write a program to print the strings which are palindrome in the list of strings.
#include<stdio.h>
#include<string.h>
int ispelindrome(char s[]);
int main()
{
    char str[5][20],i,j;
    printf("enter 5 strings \n");
    for(i=0;i<5;i++)
        fgets(str[i],20,stdin);
    for(i=0;i<5;i++)
    {
        for(j=0;str[i][j];j++)
        {
            if(str[i][j]=='\n')
                str[i][j]='\0';
        }
    }
    for(i=0;i<5;i++)
    {
        if(ispelindrome(str[i]))
            printf("%s ",str[i]);
    }
    return 0;
}
int ispelindrome(char s[])
{
    int i,l;
    for(l=0;s[l];l++);
    for(i=0;i<l/2;i++)
    {
        if(s[i]!=s[l-1-i])
            return 0;
    }
    return 1;
}
