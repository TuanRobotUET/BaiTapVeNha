#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a + n);
    long long dem = 0;
    if(k == 0) {
        int i = 0;
        while(i < n) {
            int count = 1;
            while(i + 1 < n && a[i] == a[i + 1]) {
                i++;
                count++;
            }
            dem += (long long)count * (count - 1) / 2;
            i++;
        }
    } else {
        int i = 0, j = 1;
        while(i < n && j < n) {
            int diff = a[j] - a[i];
            if(diff == k) {
                int count_i = 1, count_j = 1;
                while(i + 1 < n && a[i] == a[i + 1]) {
                    i++;
                    count_i++;
                }
                while(j + 1 < n && a[j] == a[j + 1]) {
                    j++;
                    count_j++;
                }
                dem += (long long)count_i * count_j;
                i++;
                j++;
            } else if(diff < k) {
                j++;
            } else {
                i++;
                if(i == j) j++;
            }
        }
    }
    cout << dem << endl;
    return 0;
}