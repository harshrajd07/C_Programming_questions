#include <stdio.h>
int main(){
    int game_score1,game_score2,game_score;
    char p1[10],p2[10];
    printf("Enter player1 name: ");
    scanf("%s",p1);
    printf("Enter game score: ");
    scanf("%d",&game_score1);
    printf("Enter player2 name: ");
    scanf("%s",p2);
    printf("Enter game score: ");
    scanf("%d",&game_score2);
    switch(game_score1>game_score2){
        case 1: printf("%s is a winner.",p1);
        game_score=game_score1-game_score2;
        printf("%s won by %d points",p1,game_score);break;
    }switch(game_score2>game_score1){
        case 1: printf("%s is a winner.",p2);
        game_score=game_score1-game_score2;
        printf("%s won by %d points",p2,game_score);break;
    }
    switch(game_score1==game_score2){
        case 1: printf("Scores are equal so match is drawn.");break;
    }
    
    return 0;
}
