#include <stdio.h>
int main(){
    int a[100],n,i,element,f=0;
    printf("Enter array size [1-100] : "); scanf("%d",&n);
    printf("Enter %d element : ",n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    printf("Enter the number you want to search : "); scanf("%d",&element);
    for(i=0;i<n;i++)
    {
        if(a[i]==element)printf("The element which you have sreached is present inside the %d index.\n",i,f=1);
    }
        if(f==0)printf("The element which you have sreached is not present inside the Array.");
    
    return 0;
}