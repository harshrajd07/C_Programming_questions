#include <stdio.h>
int main() 
{   
    int cp,sp,profit,loss,pp,lp,a;
    printf("Enter the cost price: \n");
    scanf("%d",&cp);
    printf("Enter the selling_price: \n");
    scanf("%d",&sp);
    profit=sp-cp;
    loss=cp-sp;
    pp = profit * 100 / cp;
    lp = loss * 100 / cp;
    printf("Cost Price: %d\n",cp);
    printf("Selling Price: %d\n",sp);
    sp>cp && printf("Profit: %d\n",profit);
    cp>sp && printf("loss: %d\n",loss);
    printf("Profit Percentage: (%d)%\n",pp);
    printf("Loss Percentage: (%d)%\n",lp);
    
    return 0;
}
