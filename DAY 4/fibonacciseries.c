#include <stdio.h>
int main() 
{
    int num, a = 0, b = 1, temp;

    printf("Enter the number of terms: ");
    scanf("%d", &num);

    printf("Fibonacci Series: ");

    for (int i = 1; i <= num; i++)
    {
        printf("%d ", a);
        temp = a + b;
        a = b;
        b = temp;
    }

return 0;
}