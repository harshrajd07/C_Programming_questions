#include <stdio.h>
int main(){
    int a[100],n,i,min;
    printf("Enter array size [1-100] : "); scanf("%d",&n);
    printf("Enter %d element : ",n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(min=a[0],i=0;i<n;i++)
    {
        if(min>a[i])min=a[i];
    }
    printf("Minimum element is : %d",min);
    
    return 0;
}

