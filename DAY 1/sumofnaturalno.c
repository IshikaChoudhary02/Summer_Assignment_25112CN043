#include<stdio.h>
int main ()
{
    int num, sum = 0;

    printf("enter number ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++)
    { 
      sum = sum + i ;
    }

    printf("Sum of %d natural number is: %d\n", num, sum);

    return 0;
}
