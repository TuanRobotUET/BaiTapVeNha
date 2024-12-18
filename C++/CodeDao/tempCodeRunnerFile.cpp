#include <bits/stdc++.h>

using namespace std;

bool checkNT(int n){
    if(n < 2) return false;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return false;
    }
    return true;
}
bool check(int n){
    if(n==0) return false;
    while (n>0){
        if(checkNT(n)){
            n /= 10;
        }
        else{
            return false;
        }
    }
    return true;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    int dem = 0;
    cin >> a >> b;
    for(int i = a; i <= b; i++){
        if(check(i)){
            cout << i << " ";
            dem++;
        }
    }
    if(dem == 0){
        cout << "28tech";
    }
    return 0;
}