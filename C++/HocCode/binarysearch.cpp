#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Định nghĩa cấu trúc SinhVien
struct SinhVien {
    string maSV;
    string hoTen;
    int tuoi;
    string lop;
};

// Danh sách sinh viên
vector<SinhVien> danhSachSinhVien;

// Hàm thêm sinh viên
void themSinhVien() {
    SinhVien sv;
    cout << "Nhap ma sinh vien: ";
    cin >> sv.maSV;
    cin.ignore(); // Xóa ký tự xuống dòng còn trong bộ đệm
    cout << "Nhap ho ten sinh vien: ";
    getline(cin, sv.hoTen);
    cout << "Nhap tuoi sinh vien: ";
    cin >> sv.tuoi;
    cin.ignore();
    cout << "Nhap lop sinh vien: ";
    getline(cin, sv.lop);

    danhSachSinhVien.push_back(sv);
    cout << "Da them sinh vien thanh cong!\n";
}

// Hàm hiển thị danh sách sinh viên
void hienThiDanhSach() {
    if (danhSachSinhVien.empty()) {
        cout << "Danh sach sinh vien rong.\n";
        return;
    }
    cout << "\nDanh sach sinh vien:\n";
    for (const auto& sv : danhSachSinhVien) {
        cout << "Ma SV: " << sv.maSV << ", Ho Ten: " << sv.hoTen
             << ", Tuoi: " << sv.tuoi << ", Lop: " << sv.lop << endl;
    }
}

// Hàm tìm kiếm sinh viên theo mã số
void timKiemSinhVien() {
    string maSV;
    cout << "Nhap ma sinh vien can tim: ";
    cin >> maSV;

    bool found = false;
    for (const auto& sv : danhSachSinhVien) {
        if (sv.maSV == maSV) {
            cout << "Da tim thay sinh vien:\n";
            cout << "Ma SV: " << sv.maSV << ", Ho Ten: " << sv.hoTen
                 << ", Tuoi: " << sv.tuoi << ", Lop: " << sv.lop << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Khong tim thay sinh vien voi ma so nay.\n";
    }
}

// Hàm xóa sinh viên theo mã số
void xoaSinhVien() {
    string maSV;
    cout << "Nhap ma sinh vien can xoa: ";
    cin >> maSV;

    for (auto it = danhSachSinhVien.begin(); it != danhSachSinhVien.end(); ++it) {
        if (it->maSV == maSV) {
            danhSachSinhVien.erase(it);
            cout << "Da xoa sinh vien thanh cong.\n";
            return;
        }
    }
    cout << "Khong tim thay sinh vien voi ma so nay.\n";
}

// Menu chính
int main() {
    int luaChon;
    do {
        cout << "\n--- Chuong Trinh Quan Ly Sinh Vien ---\n";
        cout << "1. Them sinh vien\n";
        cout << "2. Hien thi danh sach sinh vien\n";
        cout << "3. Tim kiem sinh vien theo ma so\n";
        cout << "4. Xoa sinh vien theo ma so\n";
        cout << "5. Thoat chuong trinh\n";
        cout << "Nhap lua chon: ";
        cin >> luaChon;

        switch (luaChon) {
            case 1:
                themSinhVien();
                break;
            case 2:
                hienThiDanhSach();
                break;
            case 3:
                timKiemSinhVien();
                break;
            case 4:
                xoaSinhVien();
                break;
            case 5:
                cout << "Thoat chuong trinh. Tam biet!\n";
                break;
            default:
                cout << "Lua chon khong hop le. Vui long nhap lai.\n";
        }
    } while (luaChon != 5);

    return 0;
}
