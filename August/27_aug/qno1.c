#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    int i,j,n;
    char name[100],temp;
    printf("Befor sorting the array: ");
    scanf("%s",name);
    n=strlen(name);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(name[i]<name[j]){
            temp=name[i];
            name[i]=name[j];
            name[j]=temp;
            }
        }
    }
    
printf("\nAfter sorting the array: %s",name);

return 0;
}
----------------------------------------------------------------------------
