//  Write a function to sort employees according to their salaries [ refer structure from question 1]
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
     printf("%d %s %f\n",e.id,e.name,e.salary);
 }
 void sort_salary(struct Employee e[],int size)
 {
     int i,round;
     struct Employee temp;
     for(round=1;round<size;round++)
     {
         for(i=0;i<size-round;i++)
         {
             if(e[i].salary>e[i+1].salary)
             {
                 temp=e[i];
                 e[i]=e[i+1];
                 e[i+1]=temp;
             }
         }
     }
 }
 int main()
 {
     struct Employee e[5];
     int i;
     for(i=0;i<5;i++)
        e[i]=input();
     sort_salary(e,5);
     for(i=0;i<5;i++)
        display(e[i]);

     return 0;
 }
