#include <stdio.h>
#include <math.h>

int main(){
    int m,n;
    int max=-1e9;
    int x,y;
    scanf("%d %d",&m,&n);
    int a[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&a[i][j]);
        }
    }
     for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
            if (a[i][j] > max) {
                max = a[i][j];
                x = i;
                y = j;
            }
        }
    }
    printf("(%d, %d)\n", x, y);




    return 0;
}