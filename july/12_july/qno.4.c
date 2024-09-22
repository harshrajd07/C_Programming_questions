#include<stdio.h>
int main()
{
    int cost_price,repair_cost,coloring_cost,accessories_cost,desired_profit,total_cost,selling_price;
    printf("cost_price: The initial cost of the cycle (Rs. ) \n");
    scanf("%d",&cost_price);
    printf("repair_cost: The cost of repairs (Rs. ) \n");
    scanf("%d",&repair_cost);
    printf("coloring_cost: The cost of coloring (Rs. ) \n");
    scanf("%d",&coloring_cost);
    printf("accessories_cost: The cost of new accessories (Rs. ) \n");
    scanf("%d",&accessories_cost);
    printf("desired_profit: The desired profit (Rs. ) \n");
    scanf("%d",&desired_profit);

    total_cost=cost_price+repair_cost+coloring_cost+accessories_cost;
    selling_price=total_cost+desired_profit;
    printf("selling_price :%d\n",selling_price);
    printf("total_cost : %d",total_cost);
    
}