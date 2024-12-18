#include <bits/stdc++.h>
using namespace std;

int main() {
    string tenFile;
    getline(cin, tenFile);
    ifstream file(tenFile);
    int n;
    file >> n;
    file.ignore();

    while(n--) {
        int dem = 0;
        string s;
        getline(file, s);
        stringstream ss(s);
        
        while(ss >> s) {
            bool check = true;
            if(s.length() < 2) {
                check = false;
            }
            else if(!isupper(s[0])) {
                check = false;
            }
            if(check) dem++;
        }
        cout << dem << endl;
    }
    file.close();
    return 0;
}