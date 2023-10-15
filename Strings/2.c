// Write a program to count the occurrence of a given character in a given string.
#include<stdio.h>
int main()
{
    char str[20],ch,i,count=0;
    printf("enter a string ");
    fgets(str,20,stdin);
    printf("enter a character ");
    scanf("%c",&ch);
    for(i=0;str[i];i++)
    {
        if(str[i]==ch)
            count++;
    }
    printf("the occurance of %c is %d",ch,count);
    return 0;
}
