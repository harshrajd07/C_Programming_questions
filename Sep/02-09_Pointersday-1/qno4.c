#include<stdio.h>
void swap(int *a,int*b,int*c){
    *a = *a + *b + *c;
    *b = *a - (*b+*c);
    *c = *a - (*b+*c);
    *a = *a - (*b+*c);
}
int main(){
    int a,b,c;
    printf("a = ");
    scanf("%d",&a);
    printf("b = ");
    scanf("%d",&b);
    printf("c = ");
    scanf("%d",&c);
    printf("The value before swapping are: \n");
    printf("a = %d\nb = %d\nc = %d\n", a, b, c);
    swap(&a,&b,&c);
    printf("The value after swapping are: \n");
    printf("a = %d\nb = %d\nc = %d\n", a, b, c);
    return 0;
    
}