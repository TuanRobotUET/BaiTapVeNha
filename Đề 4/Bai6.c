#include <stdio.h>

typedef struct {
    int a;
    int b;
} Fraction;

int gcd(int a, int b) {
    if(b == 0) return a;
    return gcd(b, a % b);
}

double value(Fraction x) {
    if(x.b == 0) return -1;
    return (double)x.a / x.b;
}

void print(Fraction x) {
    if(x.b == 0) {
        printf("-1\n");
        return;
    }
    int d = gcd(x.a, x.b);
    printf("%d/%d\n", x.a/d, x.b/d);
}

Fraction add(Fraction x, Fraction y) {
    Fraction result;
    result.a = x.a * y.b + y.a * x.b;
    result.b = x.b * y.b;
    return result;
}