#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int tong =0,dem=0;
    for(int i=0; i<n; i++){
        if(a[i]%2==00){
            tong+=a[i];
            dem++;
        }
    }
    if(dem==0){
        for(int i=0; i<n; i++){
            cout<<a[i]<<" ";
        }
        return 0;
    }
    double tb=tong/dem;
    for(int i=0; i<n; i++){
        if(a[i]%2){
            if(a[i]>tb){
                cout<<a[i]<<" ";
            }
        }
    }
    return 0;
}