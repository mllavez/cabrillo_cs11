// CS11 Assignment #6 tic tac toe
// starter code
// tictactoe.cpp
/*
* Marcos Alexander Chávez
* 0278726
* 2 player Tic-Tac-Toe game in terminal.
*/
#include <iostream>

using namespace std;

class TicTacToe {

public:
    TicTacToe();
    void play();

private:
    char sigil[3];
    int board[3][3];
    int winner();
    bool isGameOver();
    void drawBoard();
    bool isMoveLegal(int row, int column);
};

TicTacToe::TicTacToe() {
    for(int r = 0; r < 3; r++)
        for(int c = 0; c < 3; c++)
            board[r][c] = 0;

    sigil[0] = '.';
    sigil[1] = 'X';
    sigil[2] = 'O';
}

void TicTacToe::play() {
    int player = 1;
    int row, column, result;
    bool legalMove;

    // starting board
    drawBoard();

    while(!isGameOver()) {
        cout << "Player " << player << " (" << sigil[player] << "), your move? ";
        cin >> row >> column;
        legalMove = isMoveLegal(row, column);
        while(!legalMove) {
            cout << "Illegal move. Player " << player << " (" << sigil[player] << "), your move? ";
            cin >> row >> column;
            legalMove = isMoveLegal(row, column);
        }
        board[row][column] = player;
        drawBoard();
        player = 3 - player;
    }
    // game over
    result = winner();
    if(result == 0) {
        cout << "Tie Game" << endl;
    } else {
        cout << "Player " << result << " (" << sigil[result] << ") wins!" << endl;
    }
}

int TicTacToe::winner() {
    for(int i = 0; i < 3; i++) {
        if(board[i][0] == board[i][1] && board[i][0] == board[i][2] && board[i][0] != 0) return board[i][0];
        if(board[0][i] == board[1][i] && board[0][i] == board[2][i] && board[0][i] != 0) return board[0][i];
    }
    if(board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[0][0] != 0) return board[0][0];
    if(board[0][2] == board[1][1] && board[0][2] == board[2][0] && board[0][2] != 0) return board[0][2];
    return 0;
}

bool TicTacToe::isGameOver() {
    if(winner() != 0) return true;
    for(int r = 0; r < 3; r++)
        for(int c = 0; c < 3; c++)
            if(board[r][c] == 0) return false;
    return true;
}

void TicTacToe::drawBoard() {
    for(int a = 0; a < 3; a++) {
        for(int b = 0; b < 3; b++) {
            cout << sigil[board[a][b]];
            if(b < 2) cout << " ";
        }
        cout << endl;
    }
}

bool TicTacToe::isMoveLegal(int row, int column) {
    if(row < 0 || row >= 3 || column < 0 || column >= 3) return false;
    if(board[row][column] != 0) return false;
    return true;
}

int main() {
    TicTacToe game;
    game.play();
    return 0;
}

