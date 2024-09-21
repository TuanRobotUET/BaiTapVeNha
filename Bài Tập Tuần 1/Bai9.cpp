#include <iostream>
#include <math.h>

using namespace std;
int main() {
    double canh1,canh2,canh3,dienTich,chuVi;//Khai bao 3 canh, dien tich, chu vi
    cout<<"Nhap vao 3 canh cua tam giac do : ";
    cin>>canh1>>canh2>>canh3;//Nhap do dai 3 canh
    chuVi=(canh1+canh2+canh3)/2;//Tinh nua chu vi
    dienTich=sqrt(chuVi*(chuVi-canh1)*(chuVi-canh2)*(chuVi-canh3));//Tinh dien tich tam giac
    cout<<"Dien tich tam giac la : "<<dienTich;//Xuat ra dien tich ra man hinh
    return 0;
}