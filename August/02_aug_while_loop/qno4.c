#include <stdio.h>
int main(){
    int i,num,sum=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    sum=0;
    for(i=1;i<=num/2;i++){
        if(num%i==0){
            sum+=i;
        }
    }
    if(sum==num && num>>0){
     printf("%d is a perfect number. ",num);}
    else {printf("%d is not a perfect number.",num);}
    return 0;
}