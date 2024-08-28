// Online C compiler to run C program online
#include <stdio.h>
int main() 
{   
    float source_currency,exchange_rate,target_currency;
    printf("Enter the amount in the source currency: \n");
    scanf("%f",&source_currency);
    printf("Enter the exchange rate (source to target): \n");
    scanf("%f",&exchange_rate);
    target_currency=source_currency*exchange_rate;
    printf("Equivalent amount in the target currency: %0.2f \n",target_currency);
    
    return 0;
}