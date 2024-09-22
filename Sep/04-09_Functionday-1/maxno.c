#include<stdio.h>
int max(int a,int b,int c){
       if(a>b && a>c){
           printf("%d",a);
       }
       else if(b>a && b>c){
           printf("%d",b);
       }
       else ("%d",c);
}
int main(){
    int a,b,c;
    printf("Input Three positive number : ");
    scanf("%d %d %d",&a,&b,&c);
    printf("The biggest number is : ");
    int num=max(a,b,c);
}