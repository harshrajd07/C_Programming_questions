#include<stdio.h>
int main(){
    int a[10][10],r,c,nr,nc;
    printf("Enter the number of rows and columns : ");
    scanf("%d %d",&nr,&nc);
    printf("Input the elements in the matrix : ");
    for(r=0;r<nr;r++)for(c=0;c<nr;c++)scanf("%d",&a[r][c]);
    for(r=0;r<nr;r++)for(c=0;c<nr;c++){printf("element - [%d],[%d] : %d\n",r,c,a[r][c]);}
    printf("The Matrix is :\n ");
    for(r=0;r<nr;r++){
        for(c=0;c<nr;c++){
            printf("%6d",a[r][c]);
        }
        printf("\n");
    }
   
    return 0;
}
