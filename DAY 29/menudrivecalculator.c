#include <stdio.h>

int main()
{
    int choice;
    float a, b;

    do
    {
        printf("\nMENU");
        printf("\n1.Add");
        printf("\n2.Subtract");
        printf("\n3.Multiply");
        printf("\n4.Divide");
        printf("\n5.Exit");

        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        if(choice>=1 && choice<=4)
        {
            printf("Enter two numbers: ");
            scanf("%f%f",&a,&b);
        }

        switch(choice)
        {
            case 1:
                printf("Answer = %.2f",a+b);
                break;

            case 2:
                printf("Answer = %.2f",a-b);
                break;

            case 3:
                printf("Answer = %.2f",a*b);
                break;

            case 4:
                if(b!=0)
                    printf("Answer = %.2f",a/b);
                else
                    printf("Division by zero not allowed.");
                break;

            case 5:
                printf("Program Ended.");
                break;

            default:
                printf("Invalid Choice");
        }

    }while(choice!=5);

    return 0;
}