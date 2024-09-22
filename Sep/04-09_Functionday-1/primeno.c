#include<stdio.h>
void prime(int n){
    int i,c=0;
    for(i=1;i<=n;i++){
    if(n%i==0){
        c++;
    }
    }
if(c==2){
    printf("The number %d is a prime no",n);
  }
else{
    printf("The number %d is not a prime no",n);
  }
}
int main(){
    int n;
    printf("Enter a nummber:");
    scanf("%d",&n);
    prime(n);
    return 0;
}