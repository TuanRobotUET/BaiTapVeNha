#include <iostream>

using namespace std;

int a[100][100], m, n;

void dfs(int i, int j) {
    a[i][j] = 0;  // Đánh dấu ô (i, j) đã thăm
    int x[] = {-1, 1, 0, 0};
    int y[] = {0, 0, -1, 1};
    for (int k = 0; k < 4; k++) {
        int dx = i + x[k];
        int dy = j + y[k];
        
        // Kiểm tra biên và điều kiện ô có giá trị là 1
        if (dx >= 0 && dy >= 0 && dx < m && dy < n && a[dx][dy] == 1) {
            dfs(dx, dy);  // Đệ quy gọi hàm DFS cho ô tiếp theo
        }
    }
}

int main() {
    int dem = 0;
    cin >> m >> n;
    
    // Nhập dữ liệu ma trận
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    // In ra ma trận để kiểm tra dữ liệu đầu vào
    cout << "Ma tran nhap vao:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    // Duyệt qua toàn bộ ma trận
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] == 1) {  // Khi phát hiện ô giá trị 1
                dem++;           // Tăng bộ đếm thành phần liên thông
                dfs(i, j);       // Gọi hàm DFS để đánh dấu toàn bộ thành phần
            }
        }
    }
    
    cout << "So luong thanh phan lien thong: " << dem << endl;
    return 0;
}
