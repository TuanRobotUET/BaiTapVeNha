#include <iostream>
#include <bits
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int,int>> a(n);
    
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a[i] = make_pair(x, ++i);
    }
    sort(a.begin,a.end);
    
    for(int i = 0; i < n; i++) {
        cout << a[i].first << " " << a[i].second << endl;
    }
    
    return 0;
}