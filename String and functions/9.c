/* Write a function to reverse a string word wise. (For example if the given string is
“Mysirg Education Services” then the resulting string should be “Services Education
Mysirg” ) */
#include<stdio.h>
void reverse(char s[],int i,int j);
int main()
{
    char str[100];
    int start=0,end=0,i,f=0;
    printf("enter a sentence ");
    fgets(str,100,stdin);
    for(i=0;str[i];i++)
    {
        if(str[i]=='\n')
            str[i]='\0';
    }
    for(i=0;str[i];i++)
    {
        while(str[i]!=' ')
        {
            if(str[i]=='\0')
            {
                f=1;
                break;
            }
            i++;
            end++;
        }
        reverse(str,start,end-1);
        if(f==1)
            break;
        start=++end;
    }
    reverse(str,0,i-1);
    printf("%s",str);
    return 0;
}
void reverse(char s[],int i,int j)
{
    char ch;
    while(i<=j)
    {
        ch=s[i];
        s[i]=s[j];
        s[j]=ch;
        i++;
        j--;
    }
}
