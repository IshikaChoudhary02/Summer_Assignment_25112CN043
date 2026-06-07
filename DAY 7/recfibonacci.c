#include <stdio.h>

int fibonacci(int num)
{
    if(num == 0)
        return 0;

    if(num == 1)
        return 1;

    return fibonacci(num - 1) + fibonacci(num - 2);
}

int main()
{
    int num;

    printf("Enter the term number: ");
    scanf("%d", &num);

    printf("Fibonacci term = %d\n", fibonacci(num));

    return 0;
}