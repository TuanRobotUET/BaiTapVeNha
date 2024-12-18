#include <stdio.h>

int main(){
    double n,tong =0;
    scanf("%lf",&n);
    for (int i=1;i<=n;i++){
        tong =tong + i/(i+1.00);
    }
    printf("%.5lf",tong);
}