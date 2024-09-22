#include <stdio.h>
int main(){
    int i=1,n;
    float sum=0;
    printf("Enter the value of n: ");scanf("%d",&n);
    printf("Harmonic Series: ");
    for(i=1;i<=n;i++){
        if(i%2==0){
            printf("1/%d",i);
            sum-=(1.0/i);
            if(i<n)printf("+");
        }
        else{
            printf("1/%d",i);
            sum+=(1.0/i);
            if(i<n)printf("-");
        }
    }printf("\nSum of the series: %f",sum);
    
    return 0;
}
