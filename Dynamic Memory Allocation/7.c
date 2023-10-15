// Write a program to demonstrate memory leak in C.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p;
    p=(int*)malloc(sizeof(int));
    p=NULL;
    printf("memory leaked ");
    return 0;
}
