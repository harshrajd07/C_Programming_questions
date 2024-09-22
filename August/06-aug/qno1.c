#include <stdio.h>
int main(){
    int n,i,c=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n==1)printf("It is neither prime nor composite. \n");
    else{
        for(i=1;i<=n;i++)
            if(n%1==0)c++;
         (c==2) ? printf("prime no") : printf("composite no"); 
    }
    return 0;
}