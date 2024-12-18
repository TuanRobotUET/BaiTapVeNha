#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> a;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        a.push_back({x,i});
    }
    int k;
    cin>>k;
    sort(a.begin(),a.end());
    int l=1;
    int r=n;
    while(l<r){
        if(a[l].first+a[r].first==k){
            cout<<a[l].second<<" "<<a[r].second;
            return 0;
        }
        else if(a[l].first+a[r].first>k){
            r--;
        }
        else{
            l++;
        }
    }
    return 0;
}