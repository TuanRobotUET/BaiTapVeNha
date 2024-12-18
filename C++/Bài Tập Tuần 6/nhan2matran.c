#include <stdio.h>

int main(){
    int m, n;
    int y, k;
    printf("NHAP SO HANG VA SO COT CUA MA TRAN THU 1 : ");
    scanf("%d %d", &m, &n);
    printf("NHAP SO HANG VA SO COT CUA MA TRAN THU 2 : ");
    scanf("%d %d", &y, &k);

    if (n != y) {
        printf("KHONG THE NHAN 2 MA TRAN\n");
        return 1;
    }

    int m1[m][n], m2[y][k], m3[m][k];

    printf("NHAP CAC PHAN TU CUA MA TRAN THU 1:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &m1[i][j]);
        }
    }

    printf("NHAP CAC PHAN TU CUA MA TRAN THU 2:\n");
    for (int i = 0; i < y; i++) {
        for (int j = 0; j < k; j++) {
            scanf("%d", &m2[i][j]);
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < k; j++) {
            m3[i][j] = 0;
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < k; j++) {
            for (int l = 0; l < n; l++) {
                m3[i][j] += m1[i][l] * m2[l][j];
            }
        }
    }

    printf("MA TRAN KET QUA SAU KHI NHAN:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < k; j++) {
            printf("%d ", m3[i][j]);
        }
        printf("\n");
    }

    return 0;
}