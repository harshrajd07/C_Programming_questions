#include <stdio.h>
int main(){
    long n,m;
    int rev=0;
    int r;
    printf("Enter a number: ");
    scanf("%ld",&n);m=n;
    while(n){
      r=n%10;rev=rev*10+r;n=n/10;  
    }
    if(m==rev){printf("Pallindrome");}
    else {printf("Not a pallindrome.");}
    
    return 0;
}