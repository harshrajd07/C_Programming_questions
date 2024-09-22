#include <stdio.h>
int main(){
    int a[100],*p=a,n,i;
    printf("Input the number of elements to store in the array : ");
    scanf("%d",&n);
    printf("Input %d number of elements in the array : \n",n);
    for(i=0;i<n;i++)
    {
    printf("element - %d : ",i);
    scanf("%d",&a[i]);
    }
    printf("The elements you entered are : ");
    for(i=0;i<n;i++){
    printf("\nelement %d : %d",i+1,*(p+i));
    }
    
    return 0;
}
