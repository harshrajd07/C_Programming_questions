#include <stdio.h>
int main() {
    int n,i,j;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Missing elements: ");
    for (i=0;i<n-1;i++){
        for(j=a[i] + 1;j<a[i+1];j++) {
            printf("%d",j);
        }
    }
    printf("\n");

    return 0;
}
