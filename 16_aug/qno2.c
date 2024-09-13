#include <stdio.h>
int main(){
    int n,r,c;
    printf("Enter the no of rows : ");
    scanf("%d",&n);
    for(r=1;r<=n;r++){
        for(c=1;c<=r;c++){
        printf("%2d",c);
        if(r!=c) printf(" * ");
        }
        printf("\n");
    }
    return 0;
}
