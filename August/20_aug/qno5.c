#include <stdio.h>
int main(){
    int a[100],n,i,j,ele,f=0;
    printf("Input the size of the array : ");
    scanf("%d",&n);
    printf("Input %d element in the array : ",n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
        /*
        printf("element- %d : %d\n",i,a[i]);
        }*/
     printf("Input the element that you want to delete : ");scanf("%d",&ele);
     //printf("The current list of the array :%d\n",a[i]);
     for(i=0;i<n;i++){
         if(a[i]==ele)
         {
         for(n--,f=1,j=i;j<n;j++)a[j]=a[j+1];i--;
         }
     }
        if(f==0)printf("\n%d not found",ele);
        else{
        printf("The new list is :");
        for(i=0;i<n;i++)printf("%4d",a[i]);
        }
        
        return 0;
}
----------------------------------------------------------------------------------------------------------------