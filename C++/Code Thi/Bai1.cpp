#include <iostream>
using namespace std;

void sapxep(float a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {
                float temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    cin >> n;
    if (n < 0) {
        cout << "invalid";
        return 0;
    }
    if (n == 0) {
        cout << "No one is alive.";
        return 0;
    }
    float a[n], bandau[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        bandau[i] = a[i];
        if (a[i] < 0 || a[i] > 1) {
            cout << "invalid";
            return 0;
        }
    }

    sapxep(a, n);
    if (a[0] < 0.05) {
        cout << "No one is alive.";
        return 0;
    }

    for (int i = 0; i < n; i++) {
        if (a[i] > 0.05) {
            for (int k = 0; k < n; k++) {
                if (a[i] == bandau[k]) {
                    cout << k << " ";
                }
            }
            for (int j = i + 1; j < n; j++) {
                a[j] /= 2;
            }
            for (int j = i + 1; j < n; j++) {
                bandau[j] /= 2;
            }
        }
    }
    return 0;
}
