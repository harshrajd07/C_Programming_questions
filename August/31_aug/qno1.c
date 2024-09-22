#include<stdio.h>
#include<string.h>
int main(){
    char str1[100],str2[100],result[100];
    int i,j,k=0;
    printf("Input 1st string: ");
    scanf("%s",str1);
    printf("Input 2nd string: ");
    scanf("%s",str2);
    for (i = 0;str2[i]!='\0';i++)
    {
        for(j=0;str1[j]!='\0';j++)
        {
            if(str2[i] == str1[j]){
                break;
            }
        }
        if (str1[j] == '\0') {
            result[k] = str2[i];
            k++;
        }
    }
    result[k] = '\0';
    printf("Output as: %s\n", result);

    return 0;
}
