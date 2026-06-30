#include <stdio.h>

struct Employee
{
    int id;
    char name[30];
    float salary;
};

int main()
{
    struct Employee e[20];
    int n=0,ch,i;

    do
    {
        printf("\n1.Add Employee");
        printf("\n2.Display");
        printf("\n3.Exit");

        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                printf("ID Name Salary: ");
                scanf("%d%s%f",&e[n].id,e[n].name,&e[n].salary);
                n++;
                break;

            case 2:
                printf("\nID\tName\tSalary\n");
                for(i=0;i<n;i++)
                    printf("%d\t%s\t%.2f\n",e[i].id,e[i].name,e[i].salary);
                break;
        }

    }while(ch!=3);

    return 0;
}