#include<stdio.h>
int main(){
    int n1,n2;
    printf("Enter a number: ");
    scanf("%d %d",&n1,&n2);
    if(n1==n2){
         printf("Equal");
    }
    else{
        printf("Not Equal");
    }
    return 0;
}