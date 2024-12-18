#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main(){
    string s;
    getline(cin,s);
    vector<string> a;
    string x;
    stringstream ss(s);
    while(ss>>x){
        a.push_back(x);
    }
    cout<<a[1];

    return 0;
}