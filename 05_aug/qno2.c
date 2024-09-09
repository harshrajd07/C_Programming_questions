#include <stdio.h>
int main(){
    int t,i;
    printf("Enter the table: ");
    scanf("%d",&t);
    for(i=1;i<=10;i++){
        printf("%d x %d = %d\n",t,i,t*i);
    }
    return 0;
}
