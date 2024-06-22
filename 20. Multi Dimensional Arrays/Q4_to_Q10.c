#include<stdio.h>
/*4.Four players are playing a tournament of Chess with round robin method (each
player wil play with every other player). Each win has 2 ponts, draw has 1 point
and loose has 0 points. Declare a score_board two dimensional array to store the
scores of the players agains each player.*/
void update_Score_Board(int p1,int p2,int result,int score_board[][4]);
void display_Score_board(int score_board[][4]);
void displayRank(int score_board[][4]);
//player=4
/*asume:-
Player-0 = A
Player-1 = B
Player-2 = C
Player-3 = D
*/
void f1(){
    int score_board[4][4]={0};
    update_Score_Board(0,1,2,score_board);
    update_Score_Board(0,2,1,score_board);
    update_Score_Board(0,3,2,score_board);
    update_Score_Board(1,2,1,score_board);
    update_Score_Board(1,3,0,score_board);
    update_Score_Board(2,3,0,score_board);
    displayRank(score_board);
}

/*5.For que-4, define a function to update score_board after each match result.*/
void update_Score_Board(int p1,int p2,int result,int score_board[][4]){
    score_board[p1][p2]=result;
    score_board[p2][p1]=2-result;
}

/*6.For que-4, define a function to display score_board.*/
void display_Score_board(int score_board[][4]){
    for(int i=0;i<4;i++){
        printf("Player_%d: ",i+1);
        for(int j=0;j<4;j++){
            printf("%d  ",score_board[i][j]);
        }
        printf("\n");
    }
}

/*7.For que-4, define a function which returns the score of a specific player*/
int get_player_score(int player,int score_board[][4]){
    int sum=0;
    for(int i=0;i<4;i++)
        sum+=score_board[player][i];
    return sum; 
}

/*8.For que-4, define a function to find the winner of the tournament.*/
int find_winner(int score_board[][4]){
    int player,score,winner,s1;
    player=0;
    winner=player;
    score=get_player_score(player,score_board);
    for(++player;player<=3;player++){
        s1=get_player_score(player,score_board);
        if(score<s1){
            winner=player;
            score=s1;
        }
    }
    return winner;
}

/*9.For que-4, define a function to display rank of the players.*/
void sort(int a[],int player_in[],int size){
    int r,i,t;
    for(r=1;r<=size-1;r++){
        for(i=0;i<=size-r-1;i++){
            if(a[i]<a[i+1]){
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
                t=player_in[i];
                player_in[i]=player_in[i+1];
                player_in[i+1]=t;
            }
        }
    }
}
void displayRank(int score_board[][4]){
    int player_score[4],scores[4],player_in[4];
    int temp,cheak,i;
    for(i=0;i<4;i++){
        player_score[i]=get_player_score(i,score_board);
        scores[i]=player_score[i];
        player_in[i]=i;
    }
    sort(scores,player_in,4);
    for (int i = 0; i < 4; i++)
    {
        printf("%d) player_%d - Score %d\n",i+1,player_in[i],scores[i]);
    }
    
}
/*10.For que-4, define a function to run tournament, in which user has to enter result of
each game and update score board using score_board function.*/
int main(){
    f1();
}