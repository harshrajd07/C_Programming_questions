#include <stdio.h>
int main(){
    int i=1,n,sum=0,terms=0;
    printf("Input number of terms: ");
    scanf("%d",&n);
    for(i;i<n;i++){
        terms = terms*10+1;
        printf("%d + ",terms);
        sum = sum + terms;
        }
        if(i==n)printf("%d",terms=terms*10+1);
        sum = sum + terms;
    printf("\nThe Sum is : %d",sum);
    
    return 0;
}

