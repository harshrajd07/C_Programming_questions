#include <stdio.h>
int main(){
    int a[100],n,i,j,ele,f=0;
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d",&n);
    printf("Input %d element in the array : ",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        printf("element- %d : %d\n",i,a[i]);
        }
     printf("Input the position which to delete : ");scanf("%d",&ele);
     //printf("The current list of the array :%d\n",a[i]);
        printf("The new list is :");
        for(i=0;i<n;i++)if(a[i]!=ele)printf("%4d",a[i]);else f=1;
        if(f==0)printf("\n%d not found",ele);
        
        return 0;
}
