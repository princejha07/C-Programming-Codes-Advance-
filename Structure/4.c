/* Write a function to find the highest salary employee from a given array of 5
employees. [ Refer structure from question 1] */
#include<stdio.h>
#include<string.h>
 struct Employee
 {
     int id;
     char name[20];
     float salary;
 };
 struct Employee input()
 {
     struct Employee e;
     int i;
     printf("enter employee's id,name and salary \n");
     scanf("%d",&e.id);
     fflush(stdin);
     fgets(e.name,20,stdin);
     for(i=0;e.name[i];i++)
     {
         if(e.name[i]=='\n')
            e.name[i]='\0';
     }
     scanf("%f",&e.salary);
     return e;
 }
 void display(struct Employee e)
 {
     printf("%d %s %f \n",e.id,e.name,e.salary);
 }
 void Highest_salary(struct Employee e[],int size)
 {
     int i;
     struct Employee temp;
     temp.salary=e[0].salary;
     for(i=1;i<size;i++)
     {
         if(e[i].salary>temp.salary)
         {
             temp=e[i];
         }
     }
     printf("%s has maximum salary i.e %f",temp.name,temp.salary);
 }
 int main()
 {
     struct Employee e[5];
     int i;
     for(i=0;i<5;i++)
        e[i]=input();
     for(i=0;i<5;i++)
        display(e[i]);
     Highest_salary(e,5);
     return 0;
 }
