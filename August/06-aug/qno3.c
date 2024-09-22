#include <stdio.h>
int main(){
    int n,i,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("The positive divisors : ");
    for(i=1;i<n;i++){
    if (n % i == 0){
      sum = sum + i;
      printf("%d  ", i);
    }
  }printf("\nThe sum of the divisors is : %d", sum);
  if (sum == n)
    printf("\nSo, the number is perfect.");
  else
    printf("\nSo, the number is not perfect.");

  printf("\n");
}
