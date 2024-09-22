#include <stdio.h>
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    int sum;
    for(int i=1;i<=n;i++)
     {
      sum = n *(n+1)/2;
     }
    printf("The sum of natural numbers from 1 to 10 is: %d",sum);
}