#include <stdio.h>

int main()
{
    int a[100], n, i, sum=0, max;

    printf("Enter size: ");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    int choice;

    do
    {
        printf("\n1.Display");
        printf("\n2.Sum");
        printf("\n3.Maximum");
        printf("\n4.Exit");

        printf("\nChoice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                for(i=0;i<n;i++)
                    printf("%d ",a[i]);
                break;

            case 2:
                sum=0;
                for(i=0;i<n;i++)
                    sum+=a[i];
                printf("Sum=%d",sum);
                break;

            case 3:
                max=a[0];
                for(i=1;i<n;i++)
                    if(a[i]>max)
                        max=a[i];
                printf("Maximum=%d",max);
                break;

            case 4:
                break;

            default:
                printf("Invalid Choice");
        }

    }while(choice!=4);

    return 0;
}