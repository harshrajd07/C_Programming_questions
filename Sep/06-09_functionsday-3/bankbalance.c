#include<stdio.h>
int main(){
    float amt,bal,totalbal;
    char ch;
    
    
    printf("enter the balance\n:");
    scanf("%f",&bal);
    
    printf("enter the character\n");
    scanf(" %c",&ch);
    
    switch(bal==0||bal<0 || bal<2000){
        case 1:printf("amount can not be stored\n");
     
   break;
   case 0:{
       switch(ch=='d'||ch=='D'){
           case 1:
           printf("deposit amount\n ");
           printf("enter the amount\n:");
            scanf("%f",&amt);
            
            if(amt<0||amt==0){
                printf("Invalid amount");
                return 0;
            }
            
            totalbal=amt+bal;
            printf("total balance is %.2f",totalbal);break;
            
            case 0:
            {
                switch(ch=='w'||ch=='W'){
                    case 1:printf("withdrawl amount\n:");
                     printf("enter the amount\n:");
                        scanf("%f",&amt);
                        if(amt<0||amt==0){
                printf("Invalid amount");
                return 0;
            }
            
                        
                        totalbal=bal-amt;
                        printf(" total balnce is %.2f",totalbal);break;
                        
                        default :printf("inavlid character");
                        
                }
            }
            
            
       }
   }
   
    }
}