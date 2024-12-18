#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int width = 40;
    int height = 20;

    for (int y = height; y >= -height; y--) {
        for (int x = -width; x <= width; x++) {
            float dist = sqrt(pow(x * 0.05, 2) + pow(y * 0.1, 2));
            if (dist <= 1.0) {
                cout << '*';
            } else {
                cout << ' ';
            }
        }
        cout << endl;
    }

    return 0;
}