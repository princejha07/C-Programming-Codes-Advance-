// Write a program to input and print text using dynamic memory allocation.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
  char *p,ch;
  int i=0,j=1;
  printf("enter a string ");
  p=(char*)malloc(sizeof(char));
  while(ch!='\n')
  {
      ch=getc(stdin);
      j++;
      p=(char*)realloc(p,j*sizeof(char));
      *(p+i)=ch;
      i++;
  }
  *(p+i)='\0';
  printf("you have entered %s ",p);
  return 0;
}

