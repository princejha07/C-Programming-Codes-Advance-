/* Write a program to enter the marks of 5 students in Chemistry, Mathematics and
Physics (each out of 100) using a structure named Marks having elements roll no.,
name, chem_marks, maths_marks and phy_marks and then display the percentage
of each student.  */

#include<stdio.h>
struct marks
{
    int roll_no;
    char name[20];
    int chem_marks,math_marks,phy_marks;
};
struct marks input()
{
    struct marks temp;
    printf("enter the roll number and name of the student \n");
    scanf("%d",&temp.roll_no);
    fflush(stdin);
    fgets(temp.name,20,stdin);
    for(int i=0;temp.name[i];i++)
    {
        if(temp.name[i]=='\n')
            temp.name[i]='\0';
    }
    printf("enter marks of chemistry , maths and physics out of 100\n");
    scanf("%d%d%d",&temp.chem_marks,&temp.math_marks,&temp.phy_marks);
    return temp;
}
void percent(struct marks m)
{
    float per;
    int sum;
    sum=(m.chem_marks+m.math_marks+m.phy_marks);
    per=(sum/300.0)*100.0;
    printf("%s got %f percentage\n",m.name,per);
}
int main()
{
    struct marks m[5];
    int i;
    printf("enter the information of 5 students \n");
    for(i=0;i<5;i++)
        m[i]=input();
    for(i=0;i<5;i++)
        percent(m[i]);
    return 0;
}
