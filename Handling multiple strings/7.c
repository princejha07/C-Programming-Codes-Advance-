// From the list of IP addresses, check whether all ip addresses are valid.
#include<stdio.h>
#include<string.h>
int main()
{
  char str[50],i;
  char *a;
  int x,count=0;
  printf("enter an IP address ");
  fgets(str,50,stdin);
  a=strtok(str,".");
  while(a!=NULL)
  {
      x=atoi(a);
      if(x>=0 && x<=255)
        count++;
      a=strtok(NULL,".");
  }
  if(count==4)
    printf("valid ip address ");
  else
    printf("invalid ip address ");
  return 0;
}
