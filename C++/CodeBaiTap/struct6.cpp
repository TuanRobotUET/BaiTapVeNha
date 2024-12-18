#include <iostream>
#include <iomanip>
using namespace std;

struct Time {
    int hour, minute, second;
    Time(int initHour, int initMinute, int initSecond) {
        hour = initHour;
        minute = initMinute;
        second = initSecond;
    }
    void getTimeDifference(Time other) {
        if (other.hour>hour){
            int h = other.hour - hour;
            int m = other.minute - minute;
            int s = other.second - second;
            if (s < 0) {
                s += 60;
                m--;
            }
            if (m < 0) {
                m += 60;
                h--;
            }
        }
        else{
            int h = hour - other.hour;
            int m = minute - other.minute;
            int s = second - other.second;
            if (s < 0) {
                s += 60;
                m--;
            }
            if (m < 0) {
                m += 60;
                h--;
            }
        }
        cout << setfill('0') << setw(2) << h << ":"
             << setfill('0') << setw(2) << m << ":"
             << setfill('0') << setw(2) << s << endl;
    }
};
int main() {
    int hour, minute, second;
    cin >> hour >> minute >> second;
    Time time1(hour, minute, second);
    cin >> hour >> minute >> second;
    Time time2(hour, minute, second);
    time1.getTimeDifference(time2);
    return 0;
}