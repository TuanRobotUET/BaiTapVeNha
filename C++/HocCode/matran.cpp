#include <iostream>

using namespace std;

int main(){
    int a1[3][4]={
    {1,2,3,4},
    {4,5,6,7},
    {7,8,9,10}
    };
    int a2[4][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            a2[j][i]=a1[i][j];
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cout<<a2[i][j]<<" ";
        }
        cout << endl;
    }

}