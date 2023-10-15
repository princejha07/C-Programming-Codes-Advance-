// Write a function to swap strings of two char arrays of calling functions. (TSRS)
#include<stdio.h>
#include<string.h>
void swap(char *p,char *q);
int main()
{
    char str1[20],str2[20];
    printf("enter 1st string ");
    fgets(str1,20,stdin);
    printf("enter 2nd string ");
    fgets(str2,20,stdin);
    swap(str1,str2);
    printf("swapped strings: %s and %s",str1,str2);
    return 0;
}
void swap(char *p,char *q)
{
    char str[20];
    strcpy(str,p);
    strcpy(p,q);
    strcpy(q,str);
}
