#include <stdio.h>
int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int sum;
    for(int i=1;i<=n;i++)
    {
        sum = n *(n+1)/2;
    }
    printf("The sum of natural numbers from 1 to $d is : %d",sum);
    
}