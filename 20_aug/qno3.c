#include <stdio.h>
int main(){
    int a[100],n,i,j,ele,pos;
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d",&n);
    printf("Input %d element in the array : ",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        printf("element- %d : %d\n",i,a[i]);
        }
    printf("Input the value to be inserted and position : ");scanf("%d%d",&ele,&pos);
     printf("The current list of the array :%d\n",a[i]);
    if(pos<1 || pos>n+1)printf("position 1 to %d only ",n+1);
    else{
        for(i=n;i>=pos;i--)a[i]=a[i-1];
        a[i]=ele;
       
        printf("After Insert the element the new list is :");
        for(i=0;i<=n;i++)printf("%4d",a[i]);}
        
        return 0;
}
