#include <stdio.h>
int main()
{
    int num, a = 0, b = 1, c;

    printf("Enter the term: ");
    scanf("%d", &num);

    if (num == 1)
        printf("%d\n", a);
    else if (num == 2)
        printf("%d\n", b);
    else
    {
        for (int i = 3; i <= num; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        printf("%d\n", b);
    }

return 0;
}