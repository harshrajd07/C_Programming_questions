#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: \n");
    scanf("%d",&n);
    (n % 5 ==0) && (n % 11 ==0) ? printf("The number %d is divisible by 5 and 11. \n",n) : printf("The number %d is not divisible by both 5 and 11.\n",n);

    return 0;
}