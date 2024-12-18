#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    if(n<0){
        cout<<"-1";
    }
    string mang[100];
    mang[0]="a";
    mang[1]="b";
    for(int i=2;i<=n;i++){
        mang[i]=mang[i-1]+mang[i-2];
    }
    for(int i=0;i<=n;i++){
        cout<<"f("<<i<<")"<<" "<<"="<<" "<<mang[i]<<"\n";
    }
    return 0;
}