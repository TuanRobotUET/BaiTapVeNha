#include <iostream>
using namespace std;

int timkiem(string daySo, int sln) {
    int n = daySo.length()-1;
    int a[n+1];
    
    for(int i = 0; i <= n; i++) {
        a[i] = daySo[i] - '0';
    }
    int l = 0, r = n;
    while(l <= r) {
        int mid = (l + r)/2;
        if(a[mid] == sln) {
            return mid;
        }
        else if(a[mid] > sln) {
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }
    return -1;
}

int main() {
    string daySo;
    cin >> daySo;
    int sln = daySo[0] - '0';
    for(int i = 0; i < daySo.length(); i++) {
        int giaTri = daySo[i] - '0';
        if(giaTri > sln) {
            sln = giaTri;
        }
    }
    int vitri = timkiem(daySo, sln)+1;
    cout<<vitri;
    cout<<daySo.length()-1;
    // if(vitri >= 3 && (daySo.length()-1-vitri) >= 3) {
    //     if(daySo[1]-'0' > daySo[0]-'0') {
    //         cout << "LOM";
    //     } else {
    //         cout << "LOI";
    //     }
    // } else {
    //     cout << "VO DANH";
    // }
    
    return 0;
}