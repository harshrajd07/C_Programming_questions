#include<stdio.h>
int main(){
    int a[100],n,i;
    printf("Enter the number of elements to store in array: ");
    scanf("%d",&n);
    printf("Input %d elements in the array: ",n);
    for(i=0;i<=n;i++)
    {   
        scanf("%d",&a[i]);
        printf("element - %d\t : %d\n",i,a[i]);
    }
    return 0;
}