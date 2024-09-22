#include<stdio.h>
int main(){
int a=0,b=1,c,i=3,len;
printf("enter length of the  fibonacci series:");
scanf("%d",&len);
printf("%d\t%d",a,b);
while(i<=len){c=a+b;
printf("\t%d",c);
a=b;
b=c;
i=i+1;
    }
    return 0;
}
