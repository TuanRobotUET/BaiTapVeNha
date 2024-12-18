#include <iostream>
using namespace std;

const int SIZE = 3;
char board[SIZE][SIZE] = { {'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'} };

void printBoard() {
    system("cls"); // Xóa màn hình (dành cho Windows)
    cout << "Cờ Caro\n";
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << " " << board[i][j] << " ";
            if (j < SIZE - 1) cout << "|";
        }
        cout << endl;
        if (i < SIZE - 1) cout << "---|---|---\n";
    }
    cout << endl;
}

bool checkWin(char player) {
    // Kiểm tra hàng
    for (int i = 0; i < SIZE; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return true;
    }
    // Kiểm tra cột
    for (int i = 0; i < SIZE; i++) {
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return true;
    }
    // Kiểm tra đường chéo
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return true;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return true;

    return false;
}

bool isDraw() {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (board[i][j] != 'X' && board[i][j] != 'O') {
                return false;
            }
        }
    }
    return true;
}

void playerMove(char player) {
    int move;
    while (true) {
        cout << "Player " << player << ", enter your move (1-9): ";
        cin >> move;

        if (move < 1 || move > 9) {
            cout << "Invalid move. Please enter a number between 1 and 9.\n";
            continue;
        }

        int row = (move - 1) / SIZE;
        int col = (move - 1) % SIZE;

        if (board[row][col] != 'X' && board[row][col] != 'O') {
            board[row][col] = player;
            break;
        } else {
            cout << "Invalid move. The cell is already occupied. Try again.\n";
        }
    }
}

int main() {
    char currentPlayer = 'X';
    while (true) {
        printBoard();
        playerMove(currentPlayer);

        if (checkWin(currentPlayer)) {
            printBoard();
            cout << "Player " << currentPlayer << " wins!\n";
            break;
        }

        if (isDraw()) {
            printBoard();
            cout << "It's a draw!\n";
            break;
        }

        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    return 0;
}