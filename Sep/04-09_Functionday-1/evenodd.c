#include<stdio.h>
int evenodd(int n){
    if(n%2==0){
        printf("even");
    }
    else{
        printf("odd");
    }
}
int main(){
    int n;
    printf("Input n value: ");
    scanf("%d",&n);
    printf("The entered number is : ");
    int num=evenodd(n);
    
}