#include <iostream>

using namespace std;

int i=0;

void dequy(int a[],int n){
    if(n==0) return;
    dequy(a,n/2);
    a[i]=n%2;
    i++;
}
int main(){
    int n;
    int a[100];
    cin>>n;
    dequy(a,n);
    for(int j = 0; j < i; j++) {
        cout << a[j];
    }
}