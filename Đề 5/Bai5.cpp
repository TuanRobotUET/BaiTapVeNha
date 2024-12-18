#include <iostream>
#include <cmath>
using namespace std;

struct Complex {
    int a;
    int b;
    
    Complex() {
        a = 0;
        b = 0;
    }
    
    Complex(int that, int ao) {
        a = that;
        b = ao;
    }

    double abs() {
        return sqrt(a * a + b * b);
    }
    
    void print() {
        if(a == 0 && b == 0) {
            cout << "0" << endl;
            return;
        }
        
        if(a != 0) 
            cout << a;
            
        if(b != 0) {
            if(b > 0 && a != 0) cout << "+";
            if(b == 1 || b == -1) {
                cout << (b > 0 ? "i" : "-i");
            } else {
                cout << b << "i";
            }
        }
        cout << endl;
    }
};

Complex add(Complex x, Complex y) {
    Complex res;
    res.a = x.a + y.a;
    res.b = x.b + y.b;
    return res;
}