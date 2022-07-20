#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define CYAN    "\x1b[36m"
#define RESET   "\x1b[0m"

struct player {
    int id; 
    char name[20];
    char symbol[1];
    int victories;
};

char boardValues[9] = {
    ' ', ' ', ' ', 
    ' ', ' ', ' ', 
    ' ', ' ', ' '
};
struct player player1, player2;
int turn = 0;

int win(){
    // Horizontal
    if(boardValues[0] == boardValues[1] && boardValues[1] == boardValues[2] && boardValues[0] != ' '){
        boardValues[0] == *player1.symbol ? player1.victories++ : player2.victories++;
        return 1;
    }
    else if(boardValues[3] == boardValues[4] && boardValues[4] == boardValues[5] && boardValues[3] != ' '){
        boardValues[3] == *player1.symbol ? player1.victories++ : player2.victories++;
        return 1;
    }
    else if(boardValues[6] == boardValues[7] && boardValues[7] == boardValues[8] && boardValues[6] != ' '){
        boardValues[6] == *player1.symbol ? player1.victories++ : player2.victories++;
        return 1;
    }
    // Vertical
    else if(boardValues[0] == boardValues[3] && boardValues[3] == boardValues[6] && boardValues[0] != ' '){
        boardValues[0] == *player1.symbol ? player1.victories++ : player2.victories++;
        return 1;
    }
    else if(boardValues[1] == boardValues[4] && boardValues[4] == boardValues[7] && boardValues[1] != ' '){
        boardValues[1] == *player1.symbol ? player1.victories++ : player2.victories++;
        return 1;
    }
    else if(boardValues[2] == boardValues[5] && boardValues[5] == boardValues[8] && boardValues[2] != ' '){
        boardValues[2] == *player1.symbol ? player1.victories++ : player2.victories++;
        return 1;
    }
    // Diagonal
    else if(boardValues[0] == boardValues[4] && boardValues[4] == boardValues[8] && boardValues[0] != ' '){
        boardValues[0] == *player1.symbol ? player1.victories++ : player2.victories++;
        return 1;
    }
    else if(boardValues[2] == boardValues[4] && boardValues[4] == boardValues[6] && boardValues[2] != ' '){
        boardValues[2] == *player1.symbol ? player1.victories++ : player2.victories++;
        return 1;
    }
    else if(turn == 9){
        return 1;
    }
    else{
        return 0;
    }
}

void board(int row, int col, int player) {
    printf(  "\n     |     |     ");
    if (row == 1){
        if (col == 1) {
            if (player == player1.id){
                boardValues[0] = *player1.symbol;
            }
            else {
                boardValues[0] = *player2.symbol;
            }
        }
        else if (col == 2) {
            if (player == player1.id){
                boardValues[1] = *player1.symbol;
            }
            else {
                boardValues[1] = *player2.symbol;
            }
        }
        else if (col == 3) {
            if (player == player1.id){
                boardValues[2] = *player1.symbol;
            }
            else {
                boardValues[2] = *player2.symbol;
            }
        }
    }
    printf("\n  %c  |  %c  |  %c  ", boardValues[0], boardValues[1], boardValues[2]); //2nd row
    printf("\n_____|_____|_____");
    printf("\n     |     |     ");

    if (row == 2){
        if (col == 1) {
            if (player == player1.id){
                boardValues[3] = *player1.symbol;
            }
            else {
                boardValues[3] = *player2.symbol;
            }
        }
        else if (col == 2) {
            if (player == player1.id){
                boardValues[4] = *player1.symbol;
            }
            else {
                boardValues[4] = *player2.symbol;
            }
        }
        else if (col == 3) {
            if (player == player1.id){
                boardValues[5] = *player1.symbol;
            }
            else {
                boardValues[5] = *player2.symbol;
            }
        }
    }
    printf("\n  %c  |  %c  |  %c  ", boardValues[3], boardValues[4], boardValues[5]);//3rd row
    printf("\n_____|_____|_____");
    printf("\n     |     |     ");

    if (row == 3){
        if (col == 1) {
            if (player == player1.id){
                boardValues[6] = *player1.symbol;
            }
            else {
                boardValues[6] = *player2.symbol;
            }
        }
        else if (col == 2) {
            if (player == player1.id){
                boardValues[7] = *player1.symbol;
            }
            else {
                boardValues[7] = *player2.symbol;
            }
        }
        else if (col == 3) {
            if (player == player1.id){
                boardValues[8] = *player1.symbol;
            }
            else {
                boardValues[8] = *player2.symbol;
            }
        }
    }
    printf("\n  %c  |  %c  |  %c  ", boardValues[6], boardValues[7], boardValues[8]);//4th row
    printf("\n     |     |     ");

    win();
}

int choose(int move, int player) {
    if (move == 1 && boardValues[0] == ' '){
        system("clear");
        turn += 1;
        board(1, 1, player);
        return 0;
    }
    else if (move == 2 && boardValues[1] == ' '){
        system("clear");
        turn += 1;
        board(1, 2, player);
        return 0;
    }
    else if (move == 3 && boardValues[2] == ' '){
        system("clear");
        turn += 1;
        board(1, 3, player);
        return 0;
    }
    else if (move == 4 && boardValues[3] == ' '){
        system("clear");
        turn += 1;
        board(2, 1, player);
        return 0;
    }
    else if (move == 5 && boardValues[4] == ' '){
        system("clear");
        turn += 1;
        board(2, 2, player);
        return 0;
    }
    else if (move == 6 && boardValues[5] == ' '){
        system("clear");
        turn += 1;
        board(2, 3, player);
        return 0;
    }
    else if (move == 7 && boardValues[6] == ' '){
        system("clear");
        turn += 1;
        board(3, 1, player);
        return 0;
    }
    else if (move == 8 && boardValues[7] == ' '){
        system("clear");
        turn += 1;
        board(3, 2, player);
        return 0;
    }
    else if (move == 9 && boardValues[8] == ' '){
        system("clear");
        turn += 1;
        board(3, 3, player);
        return 0;
    }
    else if(move == 0){
        return 1;
    }
    else {
        printf(RED "\nInvalid move.\n" RESET);
        return 1;
    }
}

int verifyPlayers(int player){
    if(*player2.symbol == ' ' && player == 2 || *player1.symbol == ' ' && player == 1){
        return 1;
    }
    else if(*player1.symbol == *player2.symbol){
        printf(RED "\nPlayers cannot have the same symbol.\n" RESET);
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    player1.id = 1;
    player1.victories = 0;
    *player1.symbol = ' ';
    
    player2.id = 2; 
    player2.victories = 0;
    *player2.symbol = ' ';

    system("clear");
    printf("Enter player 1 name: ");
    scanf("%s", player1.name);
    while(verifyPlayers(1)){
        printf("Enter player 1 symbol: ");
        scanf(" %s", player1.symbol);
    }
    printf("Enter player 2 name: ");
    scanf("%s", player2.name);
    while(verifyPlayers(2)){
        printf("Enter player 2 symbol: ");
        scanf(" %s", player2.symbol);
    }

    printf("%s: %.1s\n", player1.name, player1.symbol);
    printf("%s: %.1s\n", player2.name, player2.symbol);

    board(0,0,0);

    while (1){
        int move = 0;

        printf("\nenter a move between 1-9:\n");

        while (choose(move, player1.id)){
            printf("\n%s, enter your move: ", player1.name);
            scanf("%d", &move);
        }
        if(win()){
            break;
        }
        printf("\nenter a move between 1-9:\n");       
        
        move = 0;
        
        while (choose(move, player2.id)){
            printf("\n%s, enter your move: ", player2.name);
            scanf("%d", &move);
        }
        if(win()){
            break;
        }
        move = 0;
    }
    // system("clear");
    // board(0,0,0);
    if(player1.victories > 0){
        printf(GREEN "\n\n%s wins!\n\n" RESET, player1.name);
    }
    else if (player2.victories > 0){
        printf(GREEN "\n\n%s wins!\n\n" RESET, player2.name);
    }
    else {
        printf(CYAN "\n\nIt's a tie!\n\n" RESET);
    }

    return 0;
}
