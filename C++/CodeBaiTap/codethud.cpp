#include <iostream>
#include <string>

using namespace std;

int main() {
    string daySo;
    cin >> daySo;
    bool day=true;
    int n =daySo.length();
    int demt=1,demg=1;
    int chiso=0;
    while (chiso < n - 1) {
        if (day) {
            if (daySo[chiso] <= daySo[chiso + 1]) {
                demt++;
            } else {
                day = false;
            }
        } else {
            if (daySo[chiso] >= daySo[chiso + 1]) {
                demg++;
            } else {
                day = true;
                demt++;
            }
        }
        chiso++;
    }
    if(demt+demg==n){
        if(daySo[0]>daySo[1]){
            cout<<"LOM";
        }
        else{
            cout<<"LOI";
        }
    }
    else{
        cout<<"VO DANH";
    }
    return 0;
}
