# Tic Tac Toe Game

This is a simple implementation of the classic Tic Tac Toe game in C. The game allows two players to take turns marking their spaces on a 3x3 grid, with the goal of getting three of their marks in a row.

## Project Structure

```
tic-tac-toe
├── src
│   ├── main.c        # Entry point of the application
│   ├── game.c        # Game logic implementation
│   └── game.h        # Header file for game functions and structures
├── Makefile          # Build instructions
└── README.md         # Project documentation
```

## Building the Project

To build the project, navigate to the project directory and run the following command:

```
make
```

This will compile the source files and create the executable.

## Running the Game

After building the project, you can run the game using the following command:

```
./tic-tac-toe
```

## How to Play

1. The game is played on a 3x3 grid.
2. Players take turns to place their mark (X or O) in an empty cell.
3. The first player to get three of their marks in a row (horizontally, vertically, or diagonally) wins the game.
4. If all cells are filled and no player has three in a row, the game ends in a draw.

## Contributing

Feel free to fork the repository and submit pull requests for any improvements or features you would like to add.