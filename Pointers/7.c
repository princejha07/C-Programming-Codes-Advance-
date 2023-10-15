// Write a program to count the number of vowels and consonants in a string using a pointer.
#include<stdio.h>
int main()
{
    char str[20],*p,*q,i,j,l;
    char v[]={"aeiouAEIOU"};
    int vow=0;
    printf("enter a string ");
    fgets(str,20,stdin);
    for(i=0;str[i];i++)
    {
        if(str[i]=='\n')
            str[i]='\0';
    }
    p=str;
    q=v;
    for(l=0;*(p+l);l++);
    for(i=0;*(p+i);i++)
    {
        for(j=0;*(q+j);j++)
        {
              if((*(p+i))==(*(q+j)))
                {
                    vow++;
                    break;
                }
        }

    }
    printf("vowels is %d \n",vow);
    printf("consonants are %d",l-vow);
    return 0;
}
