// Write a program to read and display a 2D array of strings in C language.
#include<stdio.h>
int main()
{
    char str[5][20],i;
    printf("enter 5 names \n");
    for(i=0;i<5;i++)
        fgets(str[i],20,stdin);
    for(i=0;i<5;i++)
        printf("%s ",str[i]);
    return 0;
}
