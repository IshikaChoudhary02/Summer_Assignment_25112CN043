#include<stdio.h>
int main()
{ 
    int num, temp, multiple = 1;

    printf("enter number ");
    scanf("%d", &num);

    while (num > 0)
    { 
        temp = num % 10;
        multiple = multiple * temp;
        num = num / 10;
    }

    printf("Product of digits: %d\n", multiple);

    return 0;
}