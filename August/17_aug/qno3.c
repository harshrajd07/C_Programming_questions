#include<stdio.h>
int main(){
    int a[100],n,i,s=0;
    printf("Input the number of elements to store the array: ");
    scanf("%d",&n);
    printf("Input %d elements in the array: ",n);
    for(i=0;i<n;i++)
    {   
        scanf("%d",&a[i]);
        printf("element - %d\t : %d\n",i,a[i]);
        s=s+a[i];
    }
    printf("Sum of all elements stored in the array is : %4d",s);
    
    return 0;
}
