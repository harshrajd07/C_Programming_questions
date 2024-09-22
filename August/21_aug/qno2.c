#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Formatted output:\n");
    int i = 0,j=n-1;
    while (i<j)
    {
        printf("%d %d\n",a[i],a[j]);
        i++;
        j--;
    }
    if(i==j)
    {
      printf("%d\n", a[i]);
    }
    return 0;
}
