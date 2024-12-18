#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

const int MAX = 100;
int directions[4][2] = {
    {0, 1},   // Hướng ngang
    {1, 0},   // Hướng dọc
    {1, 1},   // Hướng chéo chính
    {1, -1}   // Hướng chéo phụ
};

// Hàm kiểm tra chuỗi liên tiếp 5 quân cờ
bool check_five(const vector<vector<char>>& board, int m, int n, int x, int y, int dx, int dy, char player) {
    int count = 0;

    for (int i = 0; i < 5; i++) {
        int nx = x + i * dx;
        int ny = y + i * dy;

        if (nx < 0 || nx >= m || ny < 0 || ny >= n || board[nx][ny] != player) {
            return false;
        }
        count++;
    }

    return count == 5;
}

// Kiểm tra bàn cờ xem bên nào thắng
int evaluate_board(const vector<vector<char>>& board, int m, int n) {
    int result = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (board[i][j] == '.') continue; // Bỏ qua ô trống

            char player = board[i][j];

            for (int d = 0; d < 4; d++) {
                int dx = directions[d][0];
                int dy = directions[d][1];

                if (check_five(board, m, n, i, j, dx, dy, player)) {
                    int winner = (player == 'X') ? -1 : 1;
                    if (result == 0) {
                        result = winner;
                    } else if (result != winner) {
                        return 0; // Cả hai cùng thắng
                    }
                }
            }
        }
    }

    return result;
}

int main() {
    int m, n;
    cin >> m >> n;

    vector<vector<char>> board(m, vector<char>(n));

    // Nhập bàn cờ
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> board[i][j];
        }
    }

    // Đánh giá kết quả
    int result = evaluate_board(board, m, n);

    // In kết quả
    cout << result << endl;

    return 0;
}
