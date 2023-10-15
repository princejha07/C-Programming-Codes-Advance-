// Write a program to count vowels in a given string
#include<stdio.h>
int main()
{
    char str[20],v[]={"aeiouAEIOU"};
    int i,j,count=0;
    printf("enter a string ");
    fgets(str,20,stdin);
    for(i=0;str[i];i++)
    {
        for(j=0;v[j];j++)
        {
            if(str[i]==v[j])
            {
                count++;
                break;
            }
        }
    }
    printf("total vowels is %d",count);
    return 0;
}
