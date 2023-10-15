// Write a function to count words in a given string
#include<stdio.h>
int count_words(char s[]);
int main()
{
    char str[100],i,c;
    printf("enter a sentence ");
    fgets(str,100,stdin);
    c=count_words(str);
    printf("total words is %d",c);
    return 0;
}
int count_words(char s[])
{
    int i,count=0;
    for(i=0;s[i];i++)
    {   if(s[i]!=' ' && s[i+1]=='\n')
             count++;
        else if(s[i]!=' ' && s[i+1]==' ')
            count++;
    }
    return count;
}
