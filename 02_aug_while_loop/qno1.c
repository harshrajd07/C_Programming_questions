#include <stdio.h>
int main(){
    int i,n=1;
    printf("Enter the number : ");
    scanf("%d",&i);
    while(n<=10){
        printf("%d x %d = %d\n",i,n,n*i);
        n++;
    }
    return 0;
}