#include <stdio.h>
int main(){
    int a[100],b[100]={0},n,i,j,k,c;
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d",&n);
    printf("Input %d element in the array : ",n);
    for(i=0;i<n;i++) 
    {
        scanf("%d",&a[i]);
    printf("element- %d : %d\n",i,a[i]);
        
    }
    printf("The frequency of all elements of an array :");
    for(i=0;i<n;i++){
        if(b[i]!=-1){
        for(c=1,j=i+1;j<n;j++){
            if(a[i]==a[j]){c++;b[j]=-1;}}b[i]=c;
        }
    }
    for(i=0;i<n;i++){if(b[i]!=-1)printf("\n%d occurs %d times\n",a[i],b[i]);
}
return 0;
}
