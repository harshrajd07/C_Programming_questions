#include<stdio.h>
int biggestnumber(int a,int b,int c){
    if(a>b && a>c){
        printf("%d",a);
    }
    else if(b>a && b>c){
        printf("%d",b);
    }
    else("%d",c);
}
int main(){
    int a,b,c;
    printf("Input three positive number: ");
    scanf("%d %d %d",&a,&b,&c);
    printf("The biggest number is : ");
    int num=biggestnumber(a,b,c);
}