#include <stdio.h>
int main(){
    int a[100],n,i,j,t;
    printf("Enter array size [1-100] : ");
    scanf("%d",&n);
    printf("Enter %d element : ",n);
    for(i=0;i<n;i++)scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j]){
                t=a[i];a[i]=a[j];a[j]=t;
            }
        }
    }
        printf("After sorting in ascending order : ");
        for(i=0;i<n;i++)printf("%3d",a[i]);
    
    return 0;
}