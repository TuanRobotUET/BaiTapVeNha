#include <iostream>
#include <algorithm>

using namespace std;


string nhan(string so1, string so2) {
    int kt1 = so1.length();
    int kt2 = so2.length();
    string tich(kt1 + kt2, '0');
    int nho = 0;

    reverse(so1.begin(), so1.end());
    reverse(so2.begin(), so2.end());

    for (int i = 0; i < kt1; i++) {
        for (int j = 0; j < kt2; j++) {
            int x = (so1[i] - '0') * (so2[j] - '0') + (tich[i + j] - '0') + nho;
            tich[i + j] = x % 10 + '0';
            nho = x / 10;
        }
        if (nho > 0) {
            tich[i + kt2] += nho;
            nho = 0;
        }
    }

    // Loại bỏ các số 0 ở đầu kết quả
    while (tich.size() > 1 && tich.back() == '0') {
        tich.pop_back();
    }

    reverse(tich.begin(), tich.end());
    return tich;
}

int main() {
    string so1, so2;
    cin >> so1 >> so2;
    cout << nhan(so1, so2);

    return 0;
}