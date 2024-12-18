#include <bits/stdc++.h>
#include <sstream>
#include <fstream>

using namespace std;

int main() {
    string tenFile;
    getline(cin, tenFile);
    ifstream file(tenFile);
    int n;
    file>>n;
    file.ignore();
    while(n--){
        string s;
        getline(file, s);
        stringstream ss(s);
        while(ss>>s){
            s[0]=toupper(s[0]);
            for(size_t i=1;i<s.length();i++){
                s[i]=tolower(s[i]);
            }
            cout<<s<<" ";
        }
        cout<<endl;
    }
    return 0;
}