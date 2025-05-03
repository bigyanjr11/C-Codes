#ifndef GAME_H
#define GAME_H

#define BOARD_SIZE 3

typedef enum { EMPTY, PLAYER_X, PLAYER_O } Cell;
typedef struct {
    Cell board[BOARD_SIZE][BOARD_SIZE];
    int currentPlayer;
} GameState;

void initializeGame(GameState *game);
void printBoard(const GameState *game);
int makeMove(GameState *game, int row, int col);
int checkWin(const GameState *game);
int checkDraw(const GameState *game);

#endif // GAME_H