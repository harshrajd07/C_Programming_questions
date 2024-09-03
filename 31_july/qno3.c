#include <stdio.h>
int main() {
    float balance, amount;
    char transactionCode;
    printf("Enter the balance starting with a minimum of 2000 and above: ");
    scanf("%f", &balance);
    if (balance >= 0 && balance <= 2000) {
        printf("Amount Can't be stored\n");
        return 1;
    }
    printf("Do you want to deposit or withdraw the amount? Enter 'd' or 'D' for deposit and 'w' or 'W' for withdrawal: ");
    scanf(" %c", &transactionCode); 
    switch (transactionCode) {
        case 'd':
        case 'D':
            printf("Enter the amount to be deposited: ");
            scanf("%f", &amount);
            if (amount <= 0) {
                printf("Invalid amount\n");
            } else {
                balance += amount;
                printf("The balance is %.2f\n", balance);
            }
            break;
        case 'w':
        case 'W':
            printf("Enter the amount to be withdrawn: ");
            scanf("%f", &amount);
            if (amount <= 0 || amount > balance) {
                printf("Invalid amount\n");
            } else {
                balance -= amount;
                printf("The balance is %.2f\n", balance);
            }
            break;
        default:printf("Invalid transaction code\n");break;
    }

    return 0;
}
