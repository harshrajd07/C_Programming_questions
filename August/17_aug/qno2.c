#include<stdio.h>
int main(){
    int a[100],n,i;
    printf("Input the number of elements to store the array: ");
    scanf("%d",&n);
    printf("Input %d elements in the array: ",n);
    for(i=0;i<n;i++)
    {   
        scanf("%d",&a[i]);
        printf("element - %d\t : %d\n",i,a[i]);
    }
    //printf("The value store into the array are : %4d",a[n]);
    //while(n>0)printf("%4d",a[n]);
    printf("The values store into the array in reverse are : ");
    while(n>0)printf("%4d",a[--n]);
    return 0;
}