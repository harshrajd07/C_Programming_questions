#include<stdio.h>
int naturalNumberSum(int a){
    return (a * (a + 1)) / 2;
}
int main(){
    int n;
    printf("Input n value: ");
    scanf("%d",&n);
    printf("The sum of %d natural numbers is %d\n", n, naturalNumberSum(n));
    return 0;
}