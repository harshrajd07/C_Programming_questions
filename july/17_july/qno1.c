// Online C compiler to run C program online
#include <stdio.h>
int main() 
{
    int cp,rp,cc,ac,dp,sp,total_cost;
    printf("Enter the costprice of bicycle: \n");
    scanf("%d",&cp);
    printf("Enter the repairCost of bicycle: \n");
    scanf("%d",&rp);
    printf("Enter the coloringCost of bicycle: \n");
    scanf("%d",&cc);
    printf("Enter the acessoriesCost of bicycle: \n");
    scanf("%d",&ac);
    printf("Enter the desiredProfit of bicycle: \n");
    scanf("%d",&dp);
    printf("costPrice: The initial cost of the cycle (Rs. %d).\n",cp);
    printf("repairCost: The cost of repairs (Rs. %d).\n",rp);
    printf("coloringCost: The cost of coloring (Rs. %d).\n",cc);
    printf("accessoriesCost: The cost of new accessories (Rs. %d).\n",ac);
    printf("desiredProfit: The desired profit (Rs. %d).\n",dp);
    total_cost=cp+rp+cc+ac;
    sp=total_cost+dp;
    printf("total_cost of cycle is %d.\n",total_cost);
    printf("selling_price of cycle is %d.",sp);
    
    return 0;
}