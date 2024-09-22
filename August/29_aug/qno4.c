#include <stdio.h>
int main() {
    char str[100];
    int i, j, k, count = 0;
    printf("Enter a String: ");
    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++){
        for (j = i + 1; str[j] != '\0'; j++){
            for (k = 0; k <= (j - i) / 2; k++){
                if (str[i + k] != str[j - k]){
                    break;
                }
            }
            if (k>(j-i)/2){
                count++;
                printf("Palindromic substring: ");
                for (k=i;k<=j;k++){
                    printf("%c",str[k]);
                }
                printf("\n");
            }
        }
    }
    printf("Total palindromic substrings are: %d\n", count);
    return 0;
}


//
// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
int main(){
   char s[50];
   int f;
   int c=0;
   printf("Enter the string: ");
   scanf("%s",s);
   int l=strlen(s);
   for(int i=0;i<l;i++)
   {
       for(int j=i+1;j<l;j++)
       {
           if(s[i]==s[j])
           {
               int y=j,f=1;
               for(int k=i;k<y;k++)
               {
                   if(s[k]!=s[y])
                   {
                       f=0;
                       break;
                   }
                   --y;
               }
               if(f==1)
               {
                   c++;
                   for(int a=i;a<=j;a++)
                   {
                       printf("%c",s[a]);
                   }
                   printf("\n");
               }
           }
       }
   }
   printf("Total pallindromic substrings are : %d",c);
    return 0;
}
