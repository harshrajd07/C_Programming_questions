#include<stdio.h>
int main()
{
    int quantity;
    float price,total_cost;
    printf("-----Welcome to a Bakery----\n");
    printf("Enter the quantity you want to purchase: \n");
    scanf("%d",&quantity);
    printf("Enter the price of Chocolate Cake:\n ");
    scanf("%f",&price);
    total_cost=price*quantity;
    printf("------Invoice-----\n");
    printf("Quantity:%d \n",quantity);
    printf("Price per item:%.2f \n",price);
    printf("Total_cost of item: %0.2f \n",total_cost);
    return 0;
}
