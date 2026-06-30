#include <stdio.h>

struct Book
{
    int id;
    char title[30];
};

int main()
{
    struct Book b[20];
    int n=0,ch,i;

    do
    {
        printf("\n1.Add Book");
        printf("\n2.Display Books");
        printf("\n3.Exit");

        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                printf("Book ID and Title: ");
                scanf("%d%s",&b[n].id,b[n].title);
                n++;
                break;

            case 2:
                printf("\nID\tTitle\n");
                for(i=0;i<n;i++)
                    printf("%d\t%s\n",b[i].id,b[i].title);
                break;
        }

    }while(ch!=3);

    return 0;
}