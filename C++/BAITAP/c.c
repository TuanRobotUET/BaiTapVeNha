
void printArrow(int n, int left) {
    int cach = 0;

    // Mũi tên quay sang phải
    if (!left) {
        // In phần mũi tên hướng lên
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

        // In phần mũi tên hướng xuống
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

    // Mũi tên quay sang trái
    else {
        cach = n * 2 - 2;

        // In phần mũi tên hướng lên
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j < cach; j++) {
                printf(" ");
            }
            for (int j = i; j <= n; j++) {
                printf("*");
            }
            cach -= 2;
            printf("\n");
        }

        // In phần mũi tên hướng xuống
        cach += 4;
        for (int i = n - 1; i >= 1; i--) {
            for (int j = 1; j < cach; j++) {
                printf(" ");
            }
            for (int j = i; j <= n; j++) {
                printf("*");
            }
            cach += 2;
            printf("\n");
        }
    }
}
