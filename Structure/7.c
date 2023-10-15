// Write a program to calculate the difference between two time periods.
#include<stdio.h>
struct Time
{
    int h,m,s;
};
struct Time diff_time(struct Time start,struct Time end)
{
    struct Time temp;
    if(end.s<start.s)
    {
        end.s+=60;
        end.m-=1;
    }
    if(end.m<start.m)
    {
        end.m+=60;
        end.h-=1;
    }
    temp.h=end.h-start.h;
    temp.m=end.m-start.m;
    temp.s=end.s-start.s;
    return temp;
}
void display(struct Time t)
{
    printf("%d hrs: %d min : %d sec",t.h,t.m,t.s);
}
int main()
{
    struct Time t1,t2,diff;
    printf("enter start time \n");
    scanf("%d:%d:%d",&t1.h,&t1.m,&t1.s);
    printf("enter end time \n");
    scanf("%d:%d:%d",&t2.h,&t2.m,&t2.s);
    diff=diff_time(t1,t2);
    display(diff);
    return 0;
}
