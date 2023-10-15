// Write a program to sort 10 city names stored in two dimensional arrays, taken from the user.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[10][20],ch[20],i,j,round,r;
    printf("enter 10 city names \n");
    for(i=0;i<10;i++)
        fgets(str[i],20,stdin);
    for(i=0;i<10;i++)
    {
        for(j=0;str[i][j];j++)
        {
            if(str[i][j]=='\n')
                str[i][j]='\0';
        }
    }
    for(round=1;round<10;round++)
    {
        for(i=0;i<10-round;i++)
        {
            r=strcmp(str[i],str[i+1]);
            if(r>0)
            {
               strcpy(ch,str[i]);
               strcpy(str[i],str[i+1]);
               strcpy(str[i+1],ch);
            }
        }
    }
    for(i=0;i<10;i++)
        printf("%s ",str[i]);
    return 0;
}
