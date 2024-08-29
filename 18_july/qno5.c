#include <stdio.h>
int main() {
    float totalAmount, discountedAmount;
    printf("Enter the total purchase amount: ");
    scanf("%f",&totalAmount);
    discountedAmount = (totalAmount < 1000) ? totalAmount : 
                       (totalAmount <= 5000) ? totalAmount * 0.95 : 
                       totalAmount * 0.90;
    printf("The discounted amount is: %.2f\n", discountedAmount);

    return 0;
}

