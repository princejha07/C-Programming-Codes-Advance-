/* Given a list of words followed by two words, the task is to find the minimum distance
between the given two words in the list of words.
(Example : s = {“the”,”quick”,”brown”,”fox”,”quick”}
word1 = “the”, word2 = “fox”, OUTPUT : 2 )  */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char str[5][10]={"the","quick","brown","fox","quick"};
    char word1[10]={"the"},word2[10]={"fox"},i,r,w1=-1,w2=-1;
    for(i=0;i<5;i++)
    {
        if(strcmp(str[i],word1)==0)
        {
            w1=i;
        }
        if(strcmp(str[i],word2)==0)
        {
            w2=i;
        }
    }
    if(w1!=-1 && w2!=-1)
    {
        r=abs(w2-w1);
        printf("difference is %d",r-1);
    }
    return 0;
}
