#include <bits/stdc++.h>
#include <vector>

#define ll long long
using namespace std;

struct HCN {
    int id;
    ll dai, rong;
};

bool compare_area(const pair<ll, int>& a, const pair<ll, int>& b) {
    if (a.first == b.first) {
        return a.second < b.second;
    }
    return a.first > b.first;
}

bool compare_perimeter(const pair<ll, int>& a, const pair<ll, int>& b) {
    if (a.first == b.first) {
        return a.second < b.second;
    }
    return a.first > b.first;
}

int main() {
    int n;
    cin >> n;
    vector<HCN> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].id >> a[i].dai >> a[i].rong;
    }
    vector<pair<ll, int>> dt(n);
    vector<pair<ll, int>> cv(n);
    for (int i = 0; i < n; i++) {
        dt[i].second = a[i].id;
        dt[i].first = a[i].dai * a[i].rong;
        cv[i].second = a[i].id;
        cv[i].first = 2 * (a[i].dai + a[i].rong);
    }
    sort(dt.begin(), dt.end(), compare_area);
    sort(cv.begin(), cv.end(), compare_perimeter);
    cout << dt[0].second << " " << cv[0].second;
    return 0;
}