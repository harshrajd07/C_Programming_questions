#include <stdio.h>
int main(){
    int n=5,r,c;
    printf("Enter the no of rows & columns: ");
    scanf("%d %d",&r,&c);
    for(r=1;r<=n;r++){
        for(c=1;c<=n;c++){
            if(c<r){
            printf("0 ");
            }else{
            printf("%d ",(r+c)-1);
            }
        }
        printf("\n");
    }
    return 0;
}
