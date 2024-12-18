#include <iostream>
#include <iomanip>

using namespace std;

const double PI=3.14159;

struct hinhTru{
    int banKinh, chieuCao;
};

///Ham tinh Chu vi của một hình chữ nhật, hàm không làm thay đổi HCN ban đầu
int getPerimeter(const rectangle &rec){
    int tmp=2*PI*rec.banKinh*rec.chieuCao+2*PI*rec.banKinh*rec.banKinh;
    return tmp;
}

///Ham tinh dien tich của một hình chữ nhật, hàm không làm thay đổi HCN ban đầu
int getArea(const rectangle &rec){
    int tmp=PI*rec.banKinh*rec.banKinh*rec.chieuCao;
    return tmp;
}

int main() {
    hinhTru mau;
    cin>>mau.banKinh>>mau.chieuCao;
    cout<<fixed<<setprecision(2)<<getPerimeter(rec)<<" "<<fixed<<setprecision(2)<<getArea(rec);
}