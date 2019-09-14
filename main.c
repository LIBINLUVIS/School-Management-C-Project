#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
void view();
struct school
{

    char teacher_name[100];
    int teachers_phone;
    char teachers_degree[100];
    char Class_name[100];
    int number_of_student;
    char student_name[500];
    int student_roll;
    int subject_number;
    int total_marks;
    int salary;
    int teacher_salary;

};

int main()
{
    struct school info;
    FILE *file = fopen("school.txt","w+");


    if(file == NULL)
    {
        printf("Error is saving school data");
        return 1;
    }
    int teacher_number;char head_teacher;
    printf("          ----------\"\"\"\"School Management System\"\"\"\"---------- \n\n\n");
    printf("At first teacher's impormation ::: \n\n");
    printf("\nPlease enter the number of teacher in this school : ");
    scanf("%d",&teacher_number);

    printf("\n\n==================================================\n\n");
    printf("Head teacher in this school ::: ");
    scanf("%s",&head_teacher);
    printf("\n\n==================================================\n\n");

    while(1)
    {

        printf("please enter the name of teacher : ");
        scanf("%s",info.teacher_name);
        printf("please enter this teacher's contact number only bangladesh: +880 ");
        scanf("%d",&info.teachers_phone);
        printf("please enter this teachers degree with capital letter : ");
        scanf("%s",info.teachers_degree);
        printf("please enter this teacher's salary : ");
        scanf("%d",&info.teacher_salary);

        printf("\n\n==================================================\n\n");

        fprintf(file,"%s\t%d\t%s\n",info.teacher_name,info.teachers_phone,info.teachers_degree);
        printf("what do you want continue/break --(Y/N)..please press..\n\n");
        char ch = getch();
        if (ch == 'N' || ch == 'n'){
            break;
            }
    }

    printf("\n\n    =============== Room impormation ================\n\n");

    int room_number,office_number,liberary,common_room,Class_number;
    printf("How many room : ");
    scanf("%d",&room_number);
    printf("How many office : ");
    scanf("%d",&office_number);
    printf("Liberary : ");
    scanf("%d",&liberary);
    printf("common room : ");
    scanf("%d",&common_room);
    printf("\n\n\n    =============== student impormation ================  :: \n\n");
    printf("please enter how many class in this school : ");
    scanf("%d",&Class_number);
    while(1)
    {

        printf("\n\nplease enter the name of Class : ");
        scanf("%s",info.Class_name);
        printf("This classes student Salary : ");
        scanf("%d",&info.salary);
        printf("Number of student's : ");
        scanf("%d",&info.number_of_student);
        printf("Number of subject : ");
        scanf("%d",&info.subject_number);
        printf("\n\nThis classes Student details ::-- \n\n");
        while(1)
            {

            printf("Student Name : ");
            scanf("%s",info.student_name);
            printf("Student Roll : ");
            scanf("%d",&info.student_roll);
            printf("Last annual exam this student total marks : ");
            scanf("%d",&info.total_marks);

        if(info.total_marks>=info.subject_number*80){
        printf("This student get \"A+\" grade and get scolarship\n");
        }
    else if(info.subject_number*69<info.total_marks && info.total_marks<info.subject_number*80){
        printf("This student get \"A\" grade\n");
        }
    else if(info.subject_number*59<info.total_marks && info.total_marks<info.subject_number*70){
        printf("This student get \"A\"- grade\n");
        }
    else if(info.subject_number*49<info.total_marks && info.total_marks<info.subject_number*60){
        printf("This student get \"B\" grade\n");
        }
    else if(info.subject_number*39<info.total_marks && info.total_marks<info.subject_number*50){
        printf("This student get \"C\" grade\n");
        }
    else if(info.subject_number*32<info.total_marks && info.total_marks<info.subject_number*30){
        printf("This student get \"D\" grade\n");
        }
    else{
        printf("This student get F grade\n");
        }

        fprintf(file,"%s\t%d\t%d\n",info.student_name,info.student_roll,info.total_marks);
        printf("what do you want continue/break --(Y/N)..please press..\n\n");
        char ch = getch();
        if (ch == 'N' || ch == 'n'){
            break;
        }
    }

    fprintf(file,"%s\t%d\t%d\t%d\n",info.Class_name,info.salary,info.number_of_student,info.subject_number);
        printf("what do you want continue/break --(Y/N)..please press..\n\n");
        char ch = getch();
        if (ch == 'N' || ch == 'n'){
            break;
        }
    }

    fclose(file);
    return 0;
}

void view()
{
    struct school info;

    FILE *file = fopen("d:\\school.txt","r");

    if(file == NULL)
    {
        printf("Error is reading school data");
        exit (1);
    }

    while(1)
    {

        fscanf(file,"%s\t%d\t%s\n",info.teacher_name,&info.teachers_phone,info.teachers_degree);
        printf("\n%s\t%d\t%s\n",info.teacher_name,info.teachers_phone,info.teachers_degree);
    }
    while(1)
    {
        while(1)
        {
            fscanf(file,"%s\t%d\t%d\n",info.student_name,&info.student_roll,&info.total_marks);
            fprintf(file,"%s\t%d\t%d\n",info.student_name,info.student_roll,info.total_marks);
        }
        fscanf(file,"%s\t%d\t%d\t%d\n",info.Class_name,&info.salary,&info.number_of_student,&info.subject_number);
        fprintf(file,"%s\t%d\t%d\t%d\n",info.Class_name,info.salary,info.number_of_student,info.subject_number);
    }
    fclose(file);

}

