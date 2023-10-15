/* Write a program to find the number of vowels in each of the 5 strings stored in two
dimensional arrays, taken from the user. */
#include<stdio.h>
int main()
{
    char str[5][20]={"prince","ram","happy","shubham","sujeet"};
    char v[]={"aeiouAEIOU"},i,j,k,count;
    for(i=0;i<5;i++)
    {     count=0;
        for(j=0;str[i][j];j++)
        {
            for(k=0;v[k];k++)
            {
                if(str[i][j]==v[k])
                {
                    count++;
                    break;
                }
            }
        }
        printf("number of vowel in %s is %d \n",str[i],count);
    }
    return 0;
}
