#include<stdio.h>
int sumnatural(int n){
    int sum=0;
    for(int i=0;i<=n;i++){
        sum=sum+i;
    }
    return sum;
}
int main(){
    int n;
    printf("Input n value: ");
    scanf("%d",&n);
    int sum=sumnatural(n);
    printf("The sum of %d natural number is %d.",n,sum);
}