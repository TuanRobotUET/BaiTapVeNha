#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
    double n,tong,oo,tongs,o,u;
    cin>>n;
    double a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        tong +=a[i];
    }
    u=tong/n;
    for(int i=0;i<n;i++){
        tongs +=(a[i]-u)*(a[i]-u);
    }
    oo=tongs/n;
    o=sqrt(oo);
    for(int i=0;i<n;i++){
        a[i]=(a[i]-u)/o;
    }
    for(int i=0;i<n;i++){
        cout<<fixed<<setprecision(2)<<a[i]<<" ";
    }

}