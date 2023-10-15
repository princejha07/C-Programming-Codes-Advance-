// Write a function to find the repeated character in a given string.
#include<stdio.h>
void repeated_character(char s[]);
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
   repeated_character(str);
   return 0;
}
void repeated_character(char s[])
{
    int r[300]={0},i;
    for(i=0;s[i];i++)
    {
        r[s[i]]++;
    }
    for(i=0;i<300;i++)
    {
        if(r[i]>1)
            printf("%c->%d\n",i,r[i]);
    }
}
