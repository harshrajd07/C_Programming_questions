#include <stdio.h>
int main(){
    int a[100],n,i,j;
    printf("Input the size of the array : ");
    scanf("%d",&n);
    printf("Input %d element in the array : ",n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
      for (i=0;i<n-1;i++){
      for (j=i+1;j<n;j++){
      if (a[i] + a[j] ==15){
      printf("(%d,%d)\n",a[i],a[j]);}
        }
    }
    return 0;
}
