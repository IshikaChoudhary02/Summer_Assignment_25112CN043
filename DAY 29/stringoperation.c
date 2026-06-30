#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    printf("Enter String: ");
    scanf("%s",str);

    int choice;

    do
    {
        printf("\n1.Length");
        printf("\n2.Uppercase");
        printf("\n3.Lowercase");
        printf("\n4.Reverse");
        printf("\n5.Exit");

        printf("\nChoice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Length=%lu",strlen(str));
                break;

            case 2:
                printf("%s",strupr(str));
                break;

            case 3:
                printf("%s",strlwr(str));
                break;

            case 4:
                printf("%s",strrev(str));
                break;

            case 5:
                break;

            default:
                printf("Invalid");
        }

    }while(choice!=5);

    return 0;
}