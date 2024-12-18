#include <iostream>
using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

struct Fraction {
    int a, b; // Changed to int since requirements specify integer values
    
    // Default constructor
    Fraction() {
        a = 0;
        b = 0;
    }
    
    // Constructor with parameters
    Fraction(int _a, int _b) {
        a = _a;
        b = _b;
    }
    
    double value() {
        if (b == 0) return -1;
        return (double)a / b;
    }
    
    void print() {
        if (b == 0) {
            cout << a << "/0" << endl;
            return;
        }
        // Simplify fraction before printing
        int d = gcd(abs(a), abs(b));
        cout << a/d << "/" << b/d << endl;
    }
};

Fraction add(Fraction x, Fraction y) {
    Fraction result;
    result.a = x.a * y.b + y.a * x.b;
    result.b = x.b * y.b;
    return result;
}