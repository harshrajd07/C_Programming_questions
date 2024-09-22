
#include <stdio.h>
int main() 
{
    int n1,n2,addition,multiplication,subtraction,division;
    printf("Enter 1st number: \n");
    scanf("%d",&n1);
    printf("Enter 2nd number: \n");
    scanf("%d",&n2);
    addition=n1+n2;
    multiplication=n1*n2;
    subtraction=n1-n2;
    division=n1/n2;
    printf("addition = %d, mutiplication  = %d , subtraction = %d, division = %d",addition,multiplication,subtraction,division);
    
    return 0;
}