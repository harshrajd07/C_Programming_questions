#include<stdio.h>
int main(){
    int a[100],n,i,e,o;
    printf("Input the number of elements to store the array: ");
    scanf("%d",&n);
    printf("Input %d elements in the array: ",n);
    for(e=o=i=0;i<n;i++)
    {   
        scanf("%d",&a[i]);
        printf("element - %d\t : %d\n",i,a[i]);
        if(a[i]%2==0)e++;
        else o++;
    }
    printf("No of Even elements are : %3d\n",e);
    printf("No of Odd elements are: %3d\n",o);
    return 0;
}
