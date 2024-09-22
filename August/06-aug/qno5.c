#include <stdio.h>
int main(){
    int n,i,sum=0,f=1;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        f=f*i;
        sum=sum+f;
    }printf("Sum of factorial series upto %d terms is %d.",n,sum);
    return 0;
}
