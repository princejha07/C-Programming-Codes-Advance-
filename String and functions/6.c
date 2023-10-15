/* Write a function to check whether a given string is an alphanumeric string or not.
(Alphanumeric string must contain at least one alphabet and one digit) */
#include<stdio.h>
int alphanumeric(char s[]);
int main()
{
    char str[20]={"Prince123"},an;
    an=alphanumeric(str);
    if(an==1)
        printf("alphanumeric");
    else
        printf("not alphanumeric");
    return 0;
}
int alphanumeric(char s[])
{
    int a=0,d=0,i;
    for(i=0;s[i];i++)
    {
        if((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z'))
            a=1;
        if(s[i]>='0' && s[i]<='9')
            d=1;
    }
    if(a==1 && d==1)
        return 1;
    return 0;

}
