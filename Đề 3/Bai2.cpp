#include <bits/stdc++.h>
#include <climits>

using namespace std;

int main(){
    long long tong=0;
    int m,n;
    cin >> m >> n;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
        }
    }
    for(int i=0;i<m;i++){
        int gt=INT_MIN;
        for(int j=0;j<n;j++){
            gt=max(gt,a[i][j]);
        }
        tong += gt;
    }
    cout<<tong;
    return 0;
}