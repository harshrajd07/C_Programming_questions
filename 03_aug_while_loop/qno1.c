#include <stdio.h>
int main(){
    int n,s,l,p=1;
    printf("Enter any number: ");
    scanf("%d",&n);
    while(n!=0){
        l=n%10;
        s=s+l;
        p=p*l;
        n=n/10;
    }
        printf(" %d %d\n",s,p);
        if (s==p)printf("Spy number");
        else printf("Not a spy number");

   return 0;
}