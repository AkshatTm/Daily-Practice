#include <iostream>
using namespace std;

void drawBoard();
bool checkWin();
bool checkDraw();
void switchPlayer();
bool makeMove(int position);

char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
char currentPlayer = 'X';

int main() {
    int position;
    bool gameOver = false;

    while (!gameOver) {
        drawBoard();
        cout << "Player " << currentPlayer << ", enter a position (1-9): ";
        cin >> position;

        if (position < 1 || position > 9) {
            cout << "Invalid position! Try again.\n";
            continue;
        }

        if (!makeMove(position)) {
            cout << "Position already taken! Try again.\n";
            continue;
        }

        if (checkWin()) {
            drawBoard();
            cout << "Player " << currentPlayer << " wins!\n";
            gameOver = true;
        } else if (checkDraw()) {
            drawBoard();
            cout << "It's a draw!\n";
            gameOver = true;
        } else {
            switchPlayer();
        }
    }

    return 0;
}

void drawBoard() {
    cout << "-------------\n";
    for (int i = 0; i < 3; i++) {
        cout << "| ";
        for (int j = 0; j < 3; j++) {
            cout << board[i][j] << " | ";
        }
        cout << "\n-------------\n";
    }
}

bool checkWin() {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) return true;
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) return true;
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) return true;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) return true;
    return false;
}

bool checkDraw() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] != 'X' && board[i][j] != 'O') return false;
        }
    }
    return true;
}

void switchPlayer() {
    currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
}

bool makeMove(int position) {
    int row = (position - 1) / 3;
    int col = (position - 1) % 3;
    if (board[row][col] != 'X' && board[row][col] != 'O') {
        board[row][col] = currentPlayer;
        return true;
    }
    return false;
}

