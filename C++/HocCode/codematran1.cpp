#include <iostream>
#include <string>

using namespace std;

struct SinhVien {
    string ten;
    string lop;
    int tuoi;
    float diem;
};

void nhapThongTinSinhVien(SinhVien sv[], int n) {
    cout << "\nNHAP THONG TIN SINH VIEN:\n";
    cin.ignore(); // Bỏ qua ký tự xuống dòng trước khi bắt đầu nhập chuỗi
    for (int i = 0; i < n; i++) {
        cout << "Sinh vien thu " << i + 1 << ":\n";
        cout << "Nhap ten: ";
        getline(cin, sv[i].ten);
        cout << "Nhap lop: ";
        getline(cin, sv[i].lop);
        cout << "Nhap tuoi: ";
        cin >> sv[i].tuoi;
        cout << "Nhap diem: ";
        cin >> sv[i].diem;
        cin.ignore(); // Bỏ qua ký tự xuống dòng sau khi nhập số
        cout << "\n";
    }
}

void inThongTinSinhVien(SinhVien sv[], int n) {
    cout << "\nTHONG TIN SINH VIEN:\n";
    for (int i = 0; i < n; i++) {
        cout << "Sinh vien thu " << i + 1 << ":\n";
        cout << "Ten: " << sv[i].ten << "\n";
        cout << "Lop: " << sv[i].lop << "\n";
        cout << "Tuoi: " << sv[i].tuoi << "\n";
        cout << "Diem: " << sv[i].diem << "\n\n";
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    SinhVien sv[100];
    int lenh;
    int n = 0;

    while (true) {
        cout << "=============================\n";
        cout << "CHUONG TRINH QUAN LY SINH VIEN\n";
        cout << "=============================\n";
        cout << "1. NHAP THONG TIN SINH VIEN\n";
        cout << "2. IN THONG TIN SINH VIEN\n";
        cout << "0. THOAT\n";
        cout << "=============================\n";
        cout << "Nhap lenh: ";
        cin >> lenh;

        switch (lenh) {
            case 1:
                cout << "NHAP SO LUONG SINH VIEN: ";
                cin >> n;
                if (n > 100) {
                    cout << "So luong sinh vien vuot qua gioi han (100). Vui long nhap lai.\n";
                } else {
                    nhapThongTinSinhVien(sv, n);
                }
                break;
            case 2:
                inThongTinSinhVien(sv, n);
                break;
            case 0:
                cout << "Thoat chuong trinh.\n";
                return 0;
            default:
                cout << "Lenh khong hop le. Vui long nhap lai.\n";
                break;
        }
    }

    return 0;
}