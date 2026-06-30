#include <stdio.h>

struct Student
{
    int roll;
    char name[30];
    float marks;
};

int main()
{
    struct Student s[20];
    int n=0,i,ch;

    do
    {
        printf("\n1.Add Student");
        printf("\n2.Display");
        printf("\n3.Exit");

        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                printf("Roll Name Marks: ");
                scanf("%d%s%f",&s[n].roll,s[n].name,&s[n].marks);
                n++;
                break;

            case 2:
                printf("\nRoll\tName\tMarks\n");
                for(i=0;i<n;i++)
                    printf("%d\t%s\t%.2f\n",s[i].roll,s[i].name,s[i].marks);
                break;
        }

    }while(ch!=3);

    return 0;
}