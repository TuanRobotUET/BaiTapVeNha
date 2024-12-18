#include <iostream>
#include <set>
#include <vector>
#include <iomanip>
#include <algorithm>

using namespace std;

int main(){
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(7);
    a.push_back(4);
    a.push_back(5);
    
    cout<<a.find(7);
    return 0;
}