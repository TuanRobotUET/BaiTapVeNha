#include <iostream>
#include <vector>
#include <map>

using namespace std;

vector<int> in(vector<int> n){
    vector<int> kt;
    kt.push_back(n.size());
    return kt;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map<int ,int> x;
    x.insert({1,2});

    cout<<x;
    return 0;
}
