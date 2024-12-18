#include <iostream>
#include <sstream>

using namespace std;

struct date{
    int day, month, year;
};

bool checkNam(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
bool checkNgay(const date &d) {
    if (d.month < 1 || d.month > 12 || d.day < 1 || d.year < 1)
        return false;
        
    int ngayThang[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    if (checkNam(d.year))
        ngayThang[2] = 29;
        
    return d.day <= ngayThang[d.month];
}

date getNextDay(const date &currentDate){
    date next = currentDate;
    
    int ngayThang[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    if (checkNam(next.year))
        ngayThang[2] = 29;
        
    next.day++;
    if (next.day > ngayThang[next.month]) {
        next.day = 1;
        next.month++;
        if (next.month > 12) {
            next.month = 1;
            next.year++;
        }
    }
    return next;
}

int main() {
    date d;
    string duLieu;
    getline(cin,duLieu);
    stringstream ss(duLieu);
    string thuocTinh;

    getline(ss,thuocTinh,'/');
    d.day=stoi(thuocTinh);
    getline(ss,thuocTinh,'/');
    d.month=stoi(thuocTinh);
    getline(ss,thuocTinh,'/');
    d.year=stoi(thuocTinh);

    
    if (!checkNgay(d)) {
        cout << "INVALID" << endl;
        return 0;
    }
    
    date nextDay = getNextDay(d);
    cout << (nextDay.day < 10 ? "0" : "") << nextDay.day << "/"
         << (nextDay.month < 10 ? "0" : "") << nextDay.month << "/"
         << nextDay.year << endl;
    
    return 0;
}