#include<stdio.h>
void squ(int *n){
    *n=*n * *n;
}
int main(){
    int n;
    printf("Input any number for square : ");
    scanf("%d",&n);
    squ(&n);
    printf("The Square of  is :%d",n);
}