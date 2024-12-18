#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct sinhVien {
    string ten;
    float diem;
};

void nhap(vector<sinhVien> &a, int n){
    for(int i = 0; i < n; i++){
        sinhVien sv;
        cout << "NHAP TEN VA DIEM CUA BAN: ";
        cin >> sv.ten >> sv.diem;
        a.push_back(sv);
    }
}

void in(const vector<sinhVien> &a){
    for(size_t i = 0; i < a.size(); i++){
        cout << a[i].ten << " " << a[i].diem << endl;
    }
}

int main(){
    int luaChon;
    int soluong;
    vector<sinhVien> a;

    while(1){
        cout << "1.NHAP DANH SACH SINH VIEN\n";
        cout << "2.IN DANH SACH SINH VIEN\n";
        cout << "0.THOAT\n";
        cout << "NHAP LUA CHON CUA BAN: ";
        cin >> luaChon;
        if(luaChon == 1){
            cout << "NHAP SO LUONG SINH VIEN MUON NHAP: ";
            cin >> soluong;
            cin.ignore();
            nhap(a, soluong);
        }
        else if(luaChon == 2){
            cout << "DANH SACH SINH VIEN GOM TEN VA DIEM CUA BAN LA:\n";
            in(a);
        }
        else if(luaChon == 0){
            break;
        }
        else {
            cout << "LUA CHON KHONG HOP LE. VUI LONG NHAP LAI.\n";
        }
    }
    return 0;
}