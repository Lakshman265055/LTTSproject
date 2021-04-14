#include<stdio.h>
#include<stdlib.h>
#include<string.h>
FILE *fl,*tmp;
    struct data{
    char Id[20];
    char Name[20];
    char Add[20];
    char ParName[20];
    char Batch[20];
    char Phone_no[20];
}stud1;
struct student{

    struct data stud;
    struct student *next;
}*head,*temp,*curr;


void main()
{
    int i,j,choice;
    printf("*************************Student Managemnt System********************************\n\n\n");
    printf("**********************************Menu**********************************\n\n");
    printf("1. Add new Student\n");
    printf("2. Search Student\n");
    printf("3. Modify Student Record\n");
    printf("4. Delete Student Record\n");
    printf("5. Exit\n\n");
    printf("Enter your selection: \n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                Add();
                break;
            case 2:
                Search();
                break;
            case 3:
                Modify();
                break;
            case 4:
                Delete();
                break;
            case 5:
                exit(0);
                break;
            default:
                break;
        }
}
