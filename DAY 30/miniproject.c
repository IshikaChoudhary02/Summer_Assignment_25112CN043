#include <stdio.h>

struct Student
{
    int roll;
    char name[30];
    float marks;
};

struct Student s[20];
int n=0;

void addStudent()
{
    printf("Roll Name Marks: ");
    scanf("%d%s%f",&s[n].roll,s[n].name,&s[n].marks);
    n++;
}

void display()
{
    int i;
    printf("\nRoll\tName\tMarks\n");
    for(i=0;i<n;i++)
        printf("%d\t%s\t%.2f\n",s[i].roll,s[i].name,s[i].marks);
}

void search()
{
    int roll,i;

    printf("Enter Roll: ");
    scanf("%d",&roll);

    for(i=0;i<n;i++)
    {
        if(s[i].roll==roll)
        {
            printf("%d %s %.2f\n",s[i].roll,s[i].name,s[i].marks);
            return;
        }
    }

    printf("Record Not Found");
}

int main()
{
    int ch;

    do
    {
        printf("\n1.Add Student");
        printf("\n2.Display");
        printf("\n3.Search");
        printf("\n4.Exit");

        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                addStudent();
                break;

            case 2:
                display();
                break;

            case 3:
                search();
                break;
        }

    }while(ch!=4);

    return 0;
}