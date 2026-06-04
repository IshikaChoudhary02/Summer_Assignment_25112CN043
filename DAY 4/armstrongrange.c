#include<stdio.h>
int main()
{
    int num, start, end, temp, rem, sum = 0;

    printf("Enter start: ");
    scanf("%d", &start);
    printf("Enter end: ");
    scanf("%d", &end);

    for (num = start; num <= end; num++)
    {
        temp = num;
        sum = 0;
        while (temp > 0)
        {
            rem = temp % 10;
            sum = sum + (rem * rem * rem);
            temp = temp / 10;
        }
        if (sum == num)
            printf("%d ", num);
    }
return 0;
}