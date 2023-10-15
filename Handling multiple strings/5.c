/* Suppose we have a list of email addresses, check whether all email addresses have
‘@’ in it. Print the odd email out. */
#include<stdio.h>
#include<string.h>
int main()
{
    char str[5][20],i,j,r,count=0;
    printf("enter 5 email address \n");
    for(i=0;i<5;i++)
        fgets(str[i],20,stdin);
    for(i=0;i<5;i++)
    {
        for(j=0;str[i][j];j++)
        {
            if(str[i][j]=='\n')
                str[i][j]=='\0';
        }
    }
    for(i=0;i<5;i++)
    {
        if(strchr(str[i],'@')==0)
            printf("%s ",str[i]);
        else
            count++;
    }
    if(count==5)
        printf("all email address contains @");
     return 0;
}
