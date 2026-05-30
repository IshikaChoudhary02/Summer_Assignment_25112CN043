#include<stdio.h>
int main()
{ 
    int num, digit, temp, rev=0;

    printf("enter number ");
    scanf("%d", &num);

    digit = num;

    while (num > 0)
    {
        temp = num % 10;
        rev = rev * 10 + temp;
        num = num / 10;
    }

    if(digit==rev)
    { 
        printf("Number is palindrome\n");
    }
    else 
    {
        printf("Number is not palindrome\n");
    }

    return 0;
}