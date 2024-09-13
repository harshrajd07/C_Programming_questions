#include <stdio.h>
int main(){
    int n=5,r,c;
    printf("Enter the no of rows & columns: ");
    scanf("%d %d",&r,&c);
    for(r=0;r<n;r++){
        for(c=0;c<n;c++){
          printf("%4d",(r+c)%n+1);
        }
        printf("\n");
    }
    return 0;
}
