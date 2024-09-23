#include <iostream>
 
using namespace std;
int main() {
    int giaTri1,giaTri2;//Khai bao 2 bien
    cout<<"Nhap vao 2 bien do : ";
    cin>>giaTri1>>giaTri2;//Nhap 2 bien can doi
    giaTri1+=giaTri2;//Cong gia tri 1 them gia tri 2
    giaTri2=giaTri1-giaTri2;//Lay gia tri 1 - gia tri 2 se con gia tri 1
    giaTri1-=giaTri2;//Lay gia tri 1-gia tri 2 se ra gia tri 2 vi khi do gia tri 2 = gia tri 1
    cout<<"Hai bien sau khi doi la : "<<giaTri1<<" "<<giaTri2;
    return 0;
}