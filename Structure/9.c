// Write a program to store information of n students and display them using structure
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
    int n;
    printf("enter how many students are there ");
    scanf("%d",&n);
    struct student s[n];
    int i;
    printf("enter information of %d students ",n);
    for(i=0;i<n;i++)
       s[i]=input();
    for(i=0;i<n;i++)
       display(s[i]);
    return 0;
}
