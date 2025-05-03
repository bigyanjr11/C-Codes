#include <stdio.h>
#include "game.h"

int main() {
    char board[3][3];
    int currentPlayer = 1; // Player 1 starts
    int gameStatus = 0; // 0: ongoing, 1: player 1 wins, 2: player 2 wins, 3: draw

    initializeBoard(board);

    while (gameStatus == 0) {
        printBoard(board);
        printf("Player %d's turn. Enter row and column (0-2): ", currentPlayer);
        int row, col;
        scanf("%d %d", &row, &col);

        if (makeMove(board, row, col, currentPlayer)) {
            gameStatus = checkGameStatus(board);
            currentPlayer = (currentPlayer == 1) ? 2 : 1; // Switch player
        } else {
            printf("Invalid move. Try again.\n");
        }
    }

    printBoard(board);
    if (gameStatus == 1) {
        printf("Player 1 wins!\n");
    } else if (gameStatus == 2) {
        printf("Player 2 wins!\n");
    } else {
        printf("It's a draw!\n");
    }

    return 0;
}