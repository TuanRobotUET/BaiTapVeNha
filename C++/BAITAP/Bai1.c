
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

        int spaces;
    else {
    for (int i = 1; i <= n; ++i) {
        spaces = left ? n - i : i - 1;
        for (int j = 0; j < spaces; ++j) {
            printf(" ");
        }
        for (int j = 0; j < n - i + 1; ++j) {
            printf("*");
        }

        printf("\n");
    }
    for (int i = n - 1; i >= 1; --i) {
        spaces = left ? n - i : i - 1;
        for (int j = 0; j < spaces; ++j) {
            printf(" ");
        }
        for (int j = 0; j < n - i + 1; ++j) {
            printf("*");
        }

        printf("\n");
    }
}
}

