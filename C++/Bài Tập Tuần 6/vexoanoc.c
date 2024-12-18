#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[20][20];
    int h1=0,hc=2*n-2,c1=0,cc=2*n-2;
    int so = n;
    while(h1<=hc && c1<=cc){
        for(int i=c1;i<=cc;i++){
            a[h1][i]=so;
        }
        ++h1;
        for(int i=h1;i<=hc;i++){
            a[i][cc]=so;
        }
        --cc;
        for(int i=cc;i>=c1;i--){
            a[hc][i]=so;
        }
        --hc;
        for(int i=hc;i>=h1;i--){
            a[i][c1]=so;
        }
        ++c1;
        --so;
    }
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}