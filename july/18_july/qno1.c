#include<stdio.h>
int main(){
    int n,m,a;
    float b,disc;
    printf("Enter the number of passenger: \n");
    scanf("%d",&n);
    printf("Enter the age of passenger: \n");
    scanf("%d",&m);
    a = n * 300;
    disc=n*0.2*300;
    b =300-disc;
    (60<m && m<=100) ? printf("Total booking cost: %.0f with discount of (20) is  (Rs %.0f).\n",b,disc) : printf("Total booking cost: %d",a);
 
 return 0;
}
