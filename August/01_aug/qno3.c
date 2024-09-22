#include <stdio.h>
int main(){
    int n,i=1,s=0;
    printf("Enter 1 to n: ");
    scanf("%ld",&n);
    while(i<=n){
    s=s+i;
    i++;
    }
    printf("Sum of natural number from 1 to %d : %d",n,s);
    return 0;
}