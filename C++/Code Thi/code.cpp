#include <bits/stdc++.h>

using namespace std;

void sapxep(double a[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[j]<a[j+1]){
                int tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    if(n<0){
        cout<<"invalid";
        return 0;
    }
    if(n==0){
        cout<<"No one is alive.";
        return 0;  
    }
    double a[n],bandau[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]<0||a[i]>1){
            cout<<"invalid";
            return 0;
        }
    }
    for(int i=0;i<n;i++){
        a[i]=bandau[i];
    }
    sapxep(a,n);
    if(a[0]<0.05){
        cout<<"No one is alive.";
        return 0;
    }    
    for(int i=0;i<n;i++){
        if(a[i]>0.05){
            for(int k=0;k<n;k++){
                if(a[i]==bandau[k]){
                    cout<<k<<" ";
                }
            }
            for(int j=i+1;j<n;j++){
                a[j] /=2;
            }
        }
    }
    return 0;
}
