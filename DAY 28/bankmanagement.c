#include <stdio.h>

int main() {
    int accountNo;
    char name[30];
    float balance, deposit, withdraw;

    printf("Enter Account Number: ");
    scanf("%d", &accountNo);

    printf("Enter Account Holder Name: ");
    scanf("%s", name);

    printf("Enter Initial Balance: ");
    scanf("%f", &balance);

    printf("Enter Deposit Amount: ");
    scanf("%f", &deposit);
    balance += deposit;

    printf("Enter Withdrawal Amount: ");
    scanf("%f", &withdraw);

    if(withdraw <= balance)
        balance -= withdraw;
    else
        printf("Insufficient Balance\n");

    printf("\nAccount Details\n");
    printf("Account No : %d\n", accountNo);
    printf("Name       : %s\n", name);
    printf("Balance    : %.2f\n", balance);

    return 0;
}