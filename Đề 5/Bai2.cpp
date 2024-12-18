#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    ll tongChan=0;
    ll tongLe=0;
    bool checkChan=false;
    bool checkLe=false;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0){
            tongChan+=a[i];
            checkChan=true;
        }
        else{
            tongLe+=a[i];
            checkLe=true;
        }
    }
     
    if(checkChan){
        cout<<tongChan<<"\n";
    }
    else{
        cout<<"None"<<"\n";
    }
    if(checkLe){
        cout<<tongLe<<endl;
    }
    else{
        cout<<"None"<<endl;
    }
    return 0;
}