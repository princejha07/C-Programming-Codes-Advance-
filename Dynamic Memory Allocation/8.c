// Write a program to demonstrate dangling pointers in C.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p;
    {
        int x=4;
        p=&x;
    }// now p is a dangling pointer
    *p=10;
    printf("%d",*p);
    return 0;
}
