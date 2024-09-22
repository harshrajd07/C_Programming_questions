#include<stdio.h>
int main(){
    int n,m;
    printf("Enter a number: ");
    scanf("%d",&n);
    m=n*n;
    if(m%10==n || m%100==n )printf("%d is an Armstrong.",n);
    else printf("%d is not an Armstrong.",n);
    
}