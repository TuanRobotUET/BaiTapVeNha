#include <iostream>

using namespace std;

int main() {
    int kWh, total = 0;

    cout << "Nhap so kWh dien tieu thu: ";
    cin >> kWh;

    if (kWh < 0) {
        cout << "So kWh phai lon hon hoac bang 0." << endl;
        return 0;
    }

    // Xac dinh so kWh thuoc tung bac va tinh tien tuong ung
    if (kWh > 400) {
        total += (kWh - 400) * 3151;
        kWh = 400;
    }
    if (kWh > 300) {
        total += (kWh - 300) * 3050;
        kWh = 300;
    }
    if (kWh > 200) {
        total += (kWh - 200) * 2729;
        kWh = 200;
    }
    if (kWh > 100) {
        total += (kWh - 100) * 2167;
        kWh = 100;
    }
    if (kWh > 50) {
        total += (kWh - 50) * 1866;
        kWh = 50;
    }
    total += kWh * 1806;

    cout << "Tong so tien dien phai tra: " << total << " VND" << endl;

    return 0;
}