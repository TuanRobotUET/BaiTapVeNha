#include <iostream>

using namespace std;

int main(){
    int n,dc;
    cin>>n;
    dc=2*n-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        for(int j=1;j<=dc;j++){
            cout<<"."<<" ";
        }
        dc -=2;
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<"\n";
    }
    for(int i=1;i<=2*n+1;i++){
        cout<<"*"<<" ";
    }
    cout<<"\n";
    dc=1;
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        for(int j=1;j<=dc;j++){
            cout<<"."<<" ";
        }
        dc +=2;
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<"\n";
    }

}