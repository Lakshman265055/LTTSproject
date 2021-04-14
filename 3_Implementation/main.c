
#include "student.h"


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
                error_t err Add();
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
