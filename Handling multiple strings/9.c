/* Write a program that asks the user to enter a username. If the username entered is
one of the names in the list then the user is allowed to calculate the factorial of a
number. Otherwise, an error message is displayed  */
#include<stdio.h>
#include<string.h>
int main()
{
    char str[5][10]={"prince","happy","ram","akhlaq","anand"},i;
    char s[10];
    int fac=1,n;
    printf("enter your username ");
    fgets(s,10,stdin);
    for(i=0;s[i];i++)
    {
        if(s[i]=='\n')
            s[i]='\0';
    }
    for(i=0;i<5;i++)
    {
        if(strcmp(str[i],s)==0)
        {
            printf("congratulations!!!\n");
            printf("you can calculate factorial, enter a number: ");
            scanf("%d",&n);
            while(n>1)
            {
                fac=fac*n;
                n--;
            }
            printf("factorial is %d",fac);
            break;
        }
    }
    if(i==5)
        printf("incorrect user id");
    return 0;
}
