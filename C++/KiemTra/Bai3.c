#include <stdio.h>
#include <math.h>

int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int k =fmax(m,n);
    int z =fmin(m,n);
    int a[m+1],b[n+1],c[k+1];
    for(int i=0; i<=m; i++){
        scanf("%d",&a[i]);
    }
    for(int i=0; i<=n; i++){
        scanf("%d",&b[i]);
    }
    for(int i=0; i<=z; i++){
        c[i]=a[i]+b[i];
    }
    if (m > n) {
        for(int i = z + 1; i <= k; i++) {
            c[i] = a[i];
        }
    } 
    else {
        for(int i = z + 1; i <= k; i++) {
            c[i] = b[i];
        }
    }
    int first = 1;
    for (int i = k; i >= 0; i--) {
        if (c[i] != 0) {
            if (!first) {
                printf(c[i] > 0 ? "+" : "");
            }
            if (i == 0) {
                printf("%d", c[i]);
            } else if (i == 1) {
                printf("%dx", c[i]);
            } else {
                printf("%dx^%d", c[i], i);
            }
            first = 0;
        }
    }
    if (first) {
        printf("0");
    }
    return 0;
}