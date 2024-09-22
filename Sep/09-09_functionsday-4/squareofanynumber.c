#include<stdio.h>
int square(int n)
{
     return(n*n);
}
int main(){
     int n, ans;
     printf("Input any number for square: ");
     scanf("%d",&n);
     ans = square(n);
     printf("The Square of %d is : %d ", n,ans);
}

