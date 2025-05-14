#include <iostream>


class TicTacToe {
private:

    char board[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};

    char currentPlayer = 'X';

    bool gameOver = false;

public:

    void showBoard() {

        
        printf(" %c | %c | %c \n", 
               board[0] == ' ' ? '1' : board[0],
               board[1] == ' ' ? '2' : board[1],
               board[2] == ' ' ? '3' : board[2]);
        printf("---+---+---\n");
        printf(" %c | %c | %c \n", 
               board[3] == ' ' ? '4' : board[3],
               board[4] == ' ' ? '5' : board[4],
               board[5] == ' ' ? '6' : board[5]);
        printf("---+---+---\n");
        printf(" %c | %c | %c \n", 
               board[6] == ' ' ? '7' : board[6],
               board[7] == ' ' ? '8' : board[7],
               board[8] == ' ' ? '9' : board[8]);
    }


    bool placeMove(int position) {

        if (position < 1 || position > 9) {
            printf("==> Invalid value, please enter again\n");
            return false;
        }
        

        if (board[position - 1] != ' ') {
            printf("==> Invalid value, please enter again\n");
            return false;
        }
        

        board[position - 1] = currentPlayer;
        return true;
    }


    bool didSomeoneWin() {

        if (board[0] != ' ' && board[0] == board[1] && board[1] == board[2]) return true; // 1-2-3
        if (board[3] != ' ' && board[3] == board[4] && board[4] == board[5]) return true; // 4-5-6
        if (board[6] != ' ' && board[6] == board[7] && board[7] == board[8]) return true; // 7-8-9
        
        if (board[0] != ' ' && board[0] == board[3] && board[3] == board[6]) return true; // 1-4-7
        if (board[1] != ' ' && board[1] == board[4] && board[4] == board[7]) return true; // 2-5-8
        if (board[2] != ' ' && board[2] == board[5] && board[5] == board[8]) return true; // 3-6-9
        
        if (board[0] != ' ' && board[0] == board[4] && board[4] == board[8]) return true; // 1-5-9
        if (board[2] != ' ' && board[2] == board[4] && board[4] == board[6]) return true; // 3-5-7
        
        return false;
    }


    bool isTie() {

        for (int i = 0; i < 9; i++) {
            if (board[i] == ' ') return false;
        }
        return true;
    }


    void changePlayer() {

        if (currentPlayer == 'X') {
            currentPlayer = 'O';
        } else {
            currentPlayer = 'X';
        }
    }


    void play() {
        int move;
        while (!gameOver) {

            showBoard();
            printf("==> Player %d (%c), enter a number:", 
                   currentPlayer == 'X' ? 1 : 2, currentPlayer);
            
            while (true) {
                std::cin >> move;
                
                if (placeMove(move)) {
                    break;
                }

                printf("==> Player %d (%c), enter a number:", 
                       currentPlayer == 'X' ? 1 : 2, currentPlayer);
            }
            
            if (didSomeoneWin()) {
                showBoard();
                printf("==> Player %d wins!\n", currentPlayer == 'X' ? 1 : 2);
                gameOver = true;
            }
            else if (isTie()) {
                showBoard();
                printf("==> Game draw\n");
                gameOver = true;
            }
            else {
                changePlayer();
            }
        }
    }
};

int main() {
    printf("-- Tic Tac Toe -- CSIE@CGU\n");
    printf("Player 1 (X) - Player 2 (O)\n");
    TicTacToe game;
    game.play();
    return 0;
}
