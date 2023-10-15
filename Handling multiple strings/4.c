// Write a program to search a string in the list of strings.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[5][20]={"prince","ram","happy","shubham","sujeet"},a[20]="prince",i,r;
    for(i=0;i<5;i++)
    {
        r=strcmp(str[i],a);
        if(r==0)
            break;
    }
    if(i==5)
        printf("not found");
    else
        printf("found");
    return 0;
}
