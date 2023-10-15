/*
1. Define a structure Employee with member variables id, name, salary
2. Write a function to take input employee data from the user. [ Refer structure from
question 1 ]
3. Write a function to display employee data. [ Refer structure from question 1 ]
6. Write a function to sort employees according to their names [refer structure from
question 1]
 */
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
     printf("enter employee's id,name and salary ");
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
     printf("%d %s %f",e.id,e.name,e.salary);
 }
 int main()
 {
     struct Employee e1={1,"prince",607000.0f};
     struct Employee e2;
     display(e1);
     e2=input();
     display(e2);
     return 0;
 }
