#include <stdio.h>
int main(){
    int a[100],n,i,max;
    printf("Enter array size [1-100] : "); scanf("%d",&n);
    printf("Enter %d element : ",n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(max=a[0],i=0;i<n;i++)
    {
        if(max<a[i])max=a[i];
    }
    printf("Maximum element is : %d",max);
    
    return 0;
}
