#include <stdio.h>

int sum_Digits(int num)
{
    if(num == 0)
        return 0;

    return (num % 10) + sum_Digits(num / 10);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Sum of digits = %d\n", sum_Digits(num));

    return 0;
}