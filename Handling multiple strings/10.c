// Create an authentication system. It should be menu driven.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char str[3][2][20]={{"prince","123"},{"ram","234"},{"happy","345"}};
    int i,j,a,b,choice;
    char username[20],password[20];
    printf("enter your username ");
    fgets(username,20,stdin);
    for(i=0;username[i];i++)
    {
        if(username[i]=='\n')
            username[i]='\0';
    }
    printf("enter your password ");
    fgets(password,20,stdin);
    for(i=0;password[i];i++)
    {
        if(password[i]=='\n')
            password[i]='\0';
    }
    for(i=0;i<3;i++)
    {
        j=0;
        if(strcmp(str[i][j],username)==0 && strcmp(str[i][j+1],password)==0)
        {
            printf("congratulations!!!\n");
            while(1)
            {
            printf("1.addition \n2.substraction \n3.exit \n");
            printf("enter your choice: ");
            scanf("%d",&choice);
            switch(choice)
            {
            case 1:
                printf("enter 2 numbers ");
                scanf("%d%d",&a,&b);
                printf("addition is %d \n",a+b);
                break;
            case 2:
                printf("enter 2 numbers ");
                scanf("%d%d",&a,&b);
                printf("substraction is %d \n",a-b);
                break;
            case 3:
                exit(0);
            default:
                printf("invalid choice \n");
            }
            }
            break;
        }
    }
    if(i==3)
            printf("invalid username and password combination");
    return 0;
}
