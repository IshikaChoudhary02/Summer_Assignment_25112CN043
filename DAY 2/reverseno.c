#include<stdio.h>
int main()
{ 
    int num, temp, rev = 0;

    printf("enter number ");
    scanf("%d",&num);

    while (num > 0)
    { 
        temp = num % 10;
        rev = rev * 10 + temp;
        num = num / 10;
    }

    printf("Reverse of a number: %d\n", rev);

    return 0;
}