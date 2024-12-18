#include <stdio.h>

int main(){
    int n;
    double can=1;
    double k =0.01;
    scanf("%d",&n);
    while (can * can <= n) {
        can++;
    }
    can--;
    while (can * can <= n) {
        can += k;
    }
    can -= k;
    printf("%.2lf",can);
    return 0;
}