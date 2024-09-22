#include <stdio.h>
int main(){
    int a[100],n,i,j,k,count=0;
    printf("Enter array size [1-100] : ");
    scanf("%d",&n);
    printf("Enter %d element : ",n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    printf("The unique elements found in the array are : ");
    for(i=0;i<n;i++){
        count=0;
        for(j=0,k=n;j<k+1;j++){
            if(i!=j)
            {
                if (a[i] == a[j]){count++;}}
        }
        if(count==0){printf("%d\t",a[i]);}
    }
    printf("\n\n");


    return 0;
}
