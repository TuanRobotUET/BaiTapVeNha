#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    string res="";
    string temp="";
    int n=s.length();
    int k=0;
    for(int i=0;i<n;i++){
        while(s[i]>='0'&&s[i]<='9'){
            res+=s[i];
        }
        temp=max(res,temp);
    }
    cout<<temp;
    return 0;
}