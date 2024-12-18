#include <stdio.h>

int main(){
    int n;
    double tich=1;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++){
        tich =tich*a[i]*1.00;
    }
    printf("%.2f",tich);
    return 0;
}