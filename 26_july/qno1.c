#include<stdio.h>
int main(){
    float unitcharge,surcharge,total_bill;
    int units;
    printf("Enter the electricity units consumed: \n");
    scanf("%d",&units);
    if (units<=50){unitcharge=units * 0.50;}
    else if(units<=150){unitcharge=(units-50)*0.75 + 50 * 0.50;}
    else if(units<=250){unitcharge=50 * 0.50 + 100 *0.75 +(units-150) * 1.20;}
    else{unitcharge=50*0.50 + 100 *0.75 + 100*1.20 +(units-250) *1.50;}
    surcharge=unitcharge * 0.20;
    total_bill=unitcharge+surcharge;
    printf("Total electricity bill: %.2f\n",total_bill);
}