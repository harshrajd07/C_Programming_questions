#include<stdio.h>
int getLength(char str[]){
    int length;
    for(length=0;str[length]!='\0';length++);
    return length;
}
int main(){
    char str[100];
    printf("input any string: ");
    scanf("%s",str);
    printf("Length of the string: %d\n ",getLength(str));
    return 0;
}