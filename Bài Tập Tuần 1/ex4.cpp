#include <iostream>
#include <math.h>
 
using namespace std;
int main() {
    int soNguyen1,soNguyen2;//Khai bao 2 so nguyen
    cout<<"Nhap vao 2 so nguyen : ";
    cin>>soNguyen1>>soNguyen2;
    cout<<soNguyen1<<" "<<soNguyen2<<endl;//Xuat ra 2 so nguyen
    cout<<soNguyen1+soNguyen2<<endl;//Tong 2 so nguyen
    cout<<soNguyen1-soNguyen2<<endl;//Hieu 2 so nguyen
    cout<<soNguyen1*soNguyen2<<endl;//Tich 2 so nguyen
    cout<<soNguyen1%soNguyen2<<" "<<soNguyen1/soNguyen2<<endl;//Du va phan nguyen cua thuong 2 so nguyen
    cout<<pow(soNguyen1,soNguyen2)<<endl;//Mu 2 so nguyen
    return 0;
}