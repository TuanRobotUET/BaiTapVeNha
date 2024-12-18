#include <bits/stdc++.h>

using namespace std;

int main() {
    int nho = 0;
    string s;
    cin >> s;
    int n;
    cin >> n;
    string res(s.length(), '0');
    for(int i = s.length()-1; i >= 0; i--) {
        int so = s[i] - '0';
        so = so * n + nho;
        res[i] = (so % 10) + '0';
        nho = so / 10;
    }
    if(nho > 0) {
        res = to_string(nho) + res;
    }
    cout << res;
    return 0;
}