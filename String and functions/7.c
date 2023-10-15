// Write a function to check whether a given string is palindrome or not.
#include<stdio.h>
int ispelindrome(char s[]);
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
   if(ispelindrome(str))
    printf("pelindrome");
   else
    printf("not pelindrome");
   return 0;
}
int ispelindrome(char s[])
{
    int l,i;
    for(l=0;s[l];l++);
    for(i=0;i<l/2;i++)
    {
        if(s[i]!=s[l-1-i])
            return 0;
    }
    return 1;
}
