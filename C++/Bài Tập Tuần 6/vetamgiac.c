#include <stdio.h>
#include <math.h>

void drawStar(int size) {
    int n = size * 2;
    for (int y = n; y >= -n; y--) {
        for (int x = -n; x <= n; x++) {
            float dist1 = sqrt(pow(x * 0.5, 2) + pow(y * 0.5, 2));
            float dist2 = sqrt(pow((x - size) * 0.5, 2) + pow((y - size) * 0.5, 2));
            float dist3 = sqrt(pow((x + size) * 0.5, 2) + pow((y - size) * 0.5, 2));
            float dist4 = sqrt(pow((x - size) * 0.5, 2) + pow((y + size) * 0.5, 2));
            float dist5 = sqrt(pow((x + size) * 0.5, 2) + pow((y + size) * 0.5, 2));
            if (dist1 <= size || dist2 <= size || dist3 <= size || dist4 <= size || dist5 <= size) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    int size;
    printf("Nhập kích thước của ngôi sao: ");
    scanf("%d", &size);
    drawStar(size);
    return 0;
}