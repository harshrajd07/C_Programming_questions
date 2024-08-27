#include<stdio.h>
int main()
{
    int P,L,CP,SP;
    float PP,LP;
    printf("Cost Price: \n");
    scanf("%d",&CP);
    printf("Selling Price: \n");
    scanf("%d",&SP);
    P=SP-CP;
    L=CP-SP;
    PP=P*100/CP;
    LP=L*100/CP;
    printf("Profit: %d \n",P);
    printf("Profit_Percentage(%): %.2f \n",PP);
    printf("Loss_Percentage(%): %.2f \n",LP);

}




