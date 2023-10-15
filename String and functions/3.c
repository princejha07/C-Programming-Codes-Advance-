// Write a function to compare two strings.
#include<stdio.h>
int compare(char s1[],char s2[]);
int main()
{
    char str1[20]={"amar"},str2[20]={"aman"},r;
    r=compare(str1,str2);
    if(r==-1)
       printf("dictionary order");
    else if(r==1)
        printf("not in dictionary order");
    else
        printf("similar string");
    return 0;
}
int compare(char s1[],char s2[])
{
    int r,i;
    for(i=0;s1[i];i++)
    {
        r=s1[i]-s2[i];
        if(r>0)
            return 1;
        else if(r<0)
            return -1;
        else
            continue;
    }
    return 0;
}
