#include<stdio.h>
int main(){
    int a[10][10],b[10][10],r,c,nr,nc,s,k;
    printf("Input the size of the square matrix (less than 5) : ");
    scanf("%d",&k);
    printf("Enter the number of rows and columns of first matrix : ");
    scanf("%d %d",&nr,&nc);
    printf("Enter the number of rows and columns of second matrix : ");
    scanf("%d %d",&nr,&nc);
    printf("Input the elements in the first matrix : ");
    for(r=0;r<nr;r++)for(c=0;c<nr;c++)scanf("%d",&a[r][c]);
    for(r=0;r<nr;r++)for(c=0;c<nr;c++){printf("element - [%d],[%d] : %d\n",r,c,a[r][c]);}
    printf("Input the elements in the second matrix : ");
    for(r=0;r<nr;r++)for(c=0;c<nr;c++)scanf("%d",&b[r][c]);
    for(r=0;r<nr;r++)for(c=0;c<nr;c++){printf("element - [%d],[%d] : %d\n",r,c,b[r][c]);}
    printf("The First Matrix is : \n");
    for(r=0;r<nr;r++){for(c=0;c<nr;c++){printf("%4d",a[r][c]);}printf("\n");}
    printf("The Second Matrix is : \n");
    for(r=0;r<nr;r++){for(c=0;c<nr;c++){printf("%4d",b[r][c]);}printf("\n");}
    printf("The multiplication of two matrix is : \n");
    for(r=0;r<nr;r++){
        for(c=0;c<nc;c++){
           for(s=0;s<nc;){
               (s=a[r][c]+b[r][c]);
            }
            printf("%4d",s);
        }
        printf("\n");
    }
    
    return 0;
}
