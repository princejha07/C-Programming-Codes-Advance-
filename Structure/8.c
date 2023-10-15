// Write a program to store information of 10 students and display them using structure.
#include<stdio.h>
struct student
{
    int roll_no;
    char name[20];
    float fee;
};
struct student input()
{
    struct student s;
    printf("enter roll_no,name and fees \n");
    scanf("%d",&s.roll_no);
    fflush(stdin);
    fgets(s.name,20,stdin);
    for(int i=0;s.name[i];i++)
    {
        if(s.name[i]=='\n')
            s.name[i]='\0';
    }
    scanf("%f",&s.fee);
    return s;
}
void display(struct student s)
{
    printf("%d %s %f \n",s.roll_no,s.name,s.fee);
}
int main()
{
    struct student s[10];
    int i;
    printf("enter information of 10 students ");
    for(i=0;i<10;i++)
       s[i]=input();
    for(i=0;i<10;i++)
       display(s[i]);
    return 0;
}
