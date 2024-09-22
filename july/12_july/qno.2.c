#include<stdio.h>
int main()
{
    int a,b,c,d,tea,coffee,biscuits,total_bill;
    printf("Welcome to Tasty Treats Cafe!: \n");
    printf("How many cups of tea would you like to order? : \n");
    scanf("%d",&tea);
    printf("How many cups of coffee would you like to order? : \n");
    scanf("%d",&coffee);
    printf("How many biscuits would you like to order? : \n");
    scanf("%d",&biscuits);
    printf("Bill Calculation: \n");
    printf("%d cups of tea . \n",tea);
    printf("%d cups of coffee . \n",coffee);
    printf("%d number of biscuits . \n",biscuits);
    a=tea*15;
    b=coffee*25;
    c=biscuits*10;
    d=a+b+c;
    printf("Total Bill Amount: Rs.%d\n\n",d);

    printf("Thank you for choosing Tasty Treats Cafe! Please let us know your order, and we will be more than happy to serve you. \n");

    return 0;

}