#include <stdio.h>
int main(){
    int i=1,n,sum=0;
    printf("Input number of terms: ");
    scanf("%d",&n);
    printf("The even numbers are : ");
    for(i=1;i<=n*2;i++){
        if(i%2==0)
       {printf("%d\t",i);sum+=i;}
    }printf("\nThe Sum of even Natural Number upto %d terms : %d",n,sum);
    
    return 0;
}

