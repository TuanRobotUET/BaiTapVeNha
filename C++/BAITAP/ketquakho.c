#include <stdio.h>

void printArrow(int n, int left) {
    int cach = 0;
    if (!left) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= cach; j++) {
                printf(" ");
            }
            for (int j = i; j <= n; j++) {
                printf("*");
            }
            cach += 2;
            printf("\n");
        }
        cach -= 4;
        for (int i = n - 1; i >= 1; i--) {
            for (int j = 1; j <= cach; j++) {
                printf(" ");
            }
            for (int j = i; j <= n; j++) {
                printf("*");
            }
            cach -= 2;
            printf("\n");
        }
    }
    else {
        cach = n - 1;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= cach; j++) {
                printf(" ");
            }
            for (int j = i; j <= n; j++) {
                printf("*");
            }
            cach--;
            printf("\n");
        }
        cach += 2;
        for (int i = n - 1; i >= 1; i--) {
            for (int j = 1; j <= cach; j++) {
                printf(" ");
            }
            for (int j = i; j <= n; j++) {
                printf("*");
            }
            cach++;
            printf("\n");
        }
    }
}
