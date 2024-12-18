#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int n;
    cin >> n;
    double arr[n+1];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    double value;
    cin >> value;
    int l = 0, r = n-1;
    int vt = n;
    while(l <= r){
        int mid = (l + r) / 2;
        if(arr[mid] == value){
            vt = mid;
            break;
        }
        else if(arr[mid] > value){
            r = mid - 1;
            vt = mid;
        }
        else{
            l = mid + 1;
            vt=mid;
        }
    }
    for(int i = n; i > vt; i--){
        arr[i] = arr[i-1];
    }
    arr[vt] = value;
    for(int i = 0; i <= n; i++){
        cout <<fixed<<setprecision(2)<< arr[i] << " ";
    }
    cout << endl;
}