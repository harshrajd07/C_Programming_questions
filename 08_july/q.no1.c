#include <stdio.h>
int main() {
    int n,a,b,sum;
    printf("Enter a three digit number: ");
    scanf("%d",&n);
    a=n/100;
    b=n%10;
    sum = a+b;
    printf("The sum of first and last digit is :%d ", sum);
    return 0;
}
