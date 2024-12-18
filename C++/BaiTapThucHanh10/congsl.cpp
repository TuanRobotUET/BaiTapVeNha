#include <iostream>
#include <string>
using namespace std;

string nhan2so(string s1, string s2) {
    int n = s1.length();
    int m = s2.length();
    string s3(n + m, '0');
    
    for(int i = n-1; i >= 0; i--) {
        int nho = 0;
        for(int j = m-1; j >= 0; j--) {
            int pos = i + j + 1;
            int tich = (s1[i] - '0') * (s2[j] - '0') + 
                      (s3[pos] - '0') + nho;
            s3[pos] = (tich % 10) + '0';
            nho = tich / 10;
        }
        s3[i] += nho;
    }
    while(s3.length() > 1 && s3[0] == '0') {
        s3.erase(0, 1);
    }
    return s3;
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    cout << nhan2so(s1, s2);
    return 0;
}