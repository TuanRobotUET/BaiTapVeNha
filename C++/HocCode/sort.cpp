#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// Hàm tính tổng các chữ số của một số nguyên
int tong(int a) {
    int sum = 0;
    while (a) {
        sum += a % 10;
        a /= 10;
    }
    return sum;
}

// Hàm so sánh hai số nguyên dựa trên tổng các chữ số của chúng
bool cmp(int x, int y) {
    if (tong(x) != tong(y)) {
        return tong(x) < tong(y);
    } else {
        return x <y;
    }
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a+n, cmp);
    for (int z : a) {
        cout << z << " ";
    }
    return 0;
}