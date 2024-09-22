#include <stdio.h>
int main(){
    char s[100];
    int i,start,end,length=0;
    printf("Enter a String: ");
    scanf("%[^\n]%*c",s);
    while(s[length]!='0'){
        length++;
    }
    printf("Enter the starting index number: ");
    scanf("%d",&start);
    printf("Enter the ending index number: ");
    scanf("%d",&end);
    if(start < 0 || end >= length || start > end){
        printf("Index is not available.\n");
    }
    else{
    for (i=start;i<=end; i++){
        if(s[i]>='a' && s[i]<='z'){
        s[i]=s[i]-32;
        }
    }    
    printf("Converted string: %s\n",s);
}
    return 0;
}

