// Write a program in C to count the total number of alphabets, digits and special characters in a string.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20]={"princejha@123#"},i,count_a=0,count_d=0,count_s=0;
    for(i=0;str[i];i++)
    {
        if(str[i]>='0' && str[i]<='9')
            count_d++;
        else if((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z'))
            count_a++;
        else
            count_s++;
    }
    printf("alphabets->%d \ndigits->%d \nspecial characters->%d",count_a,count_d,count_s);
    return 0;
}
