#include <stdio.h>

struct Item
{
    int id, qty;
    char name[30];
};

int main()
{
    struct Item item[20];
    int n=0, ch, i;

    do
    {
        printf("\n1.Add Item");
        printf("\n2.Display");
        printf("\n3.Exit");

        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                printf("ID Name Quantity: ");
                scanf("%d%s%d",&item[n].id,item[n].name,&item[n].qty);
                n++;
                break;

            case 2:
                printf("\nID\tName\tQty\n");
                for(i=0;i<n;i++)
                    printf("%d\t%s\t%d\n",item[i].id,item[i].name,item[i].qty);
                break;

            case 3:
                break;
        }

    }while(ch!=3);

    return 0;
}