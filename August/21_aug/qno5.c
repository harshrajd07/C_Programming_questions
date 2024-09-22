#include <stdio.h>
int main(){
    int n,i,temp;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<n-1;i+=2){
        if (a[i]<a[i+1]){
            temp = a[i];
            a[i] = a[i+1];
            a[i+1] = temp;
        }
    }
    printf("Wave sorted array: ");
    for(i=0;i<n;i++){
        printf("%2d",a[i]);
    }
    printf("\n");

    return 0;
}
