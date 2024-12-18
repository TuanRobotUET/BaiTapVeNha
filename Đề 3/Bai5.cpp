#include <iostream>
#include <vector>
#include <algorithm>

#define ll long long
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int dem = 1;
    for(int i = 0; i < n; i++) {
        int tmp = 0;
        while(i < n && a[i] % 2 == 0) {
            tmp++;
            i++;
        }
        dem = max(dem, tmp);
    }
    cout << dem;
    return 0;
}