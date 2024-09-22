#include <stdio.h>
int main(){
    int n,c=0,i=0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            a[c++]=a[i];
        }
    }
    while(c<n)
    {
        a[c++]=0;
    }
    printf("Rearranged array: ");
    for (i=0;i<n;i++) 
    {
        printf("%2d",a[i]);
    }
    printf("\n");
    return 0;
}
