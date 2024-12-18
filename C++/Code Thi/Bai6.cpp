#include <iostream>
using namespace std;

bool isValid(int a[9][9], int n, int row, int col) {
    // Kiểm tra hàng
    for (int j = 0; j < 9; j++) {
        if (a[row][j] == n) {
            return false;
        }
    }

    // Kiểm tra cột
    for (int i = 0; i < 9; i++) {
        if (a[i][col] == n) {
            return false;
        }
    }

    // Kiểm tra ô vuông 3x3
    int startRow = row - row % 3;
    int startCol = col - col % 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (a[i + startRow][j + startCol] == n) {
                return false;
            }
        }
    }

    return true;
}

int main() {
    int a[9][9];
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> a[i][j];
        }
    }
    int n, i, j;
    cin >> n >> i >> j;
    i--; // Chuyển tọa độ từ 1-based sang 0-based
    j--; // Chuyển tọa độ từ 1-based sang 0-based

    if (n < 1 || n > 9) {
        cout << "Invalid number.";
        return 0;
    }
    if (i < 0 || i >= 9 || j < 0 || j >= 9) {
        cout << "Invalid number.";
        return 0;
    }
    if (a[i][j] != 0) {
        cout << "Invalid place.";
        return 0;
    }

    if (isValid(a, n, i, j)) {
        cout << "Valid place.";
    } else {
        cout << "Invalid place.";
    }

    return 0;
}