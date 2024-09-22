#include<stdio.h>
int main(){
    int a[100],n,i,j,c;
    printf("Input the number of elements to store the array: ");
    scanf("%d",&n);
    printf("Input %d elements in the array: ",n);
    for(i=0;i<n;i++)
    {
         scanf("%d",&a[i]);
         printf("Elments-%d : %d\n",i,a[i]);
    }
    printf("The prime number in the array are: ");
    for(i=1;i<n;i++){
        c=0;
        for(j=2;j<a[i];j++){
            if(a[i]%j==0){c=1;break;}
        }
        if(c==0)
        {
            printf("%3d\t",a[i]);
        }
    }
    return 0;
}
