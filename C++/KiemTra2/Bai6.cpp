#include <bits/stdc++.h>
#include <vector>

#define ll long long
using namespace std;


int main() {
    int n;
    cin>>n;
    vector<pair<int,int>> a(n);
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        a[i].first=tmp;
        a[i].second=i;
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        cout<<a[i].second+1<<" ";
    }
    return 0;
}
    