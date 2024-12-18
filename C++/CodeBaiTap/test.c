char* cipher(int k, char* message) {
    int len = strlen(message);
    char a[1000];
    k = k % 62;

    for (int i = 0; i < len; i++) {
        char c = message[i];

        if (c >= 'A' && c <= 'Z') {
            a[i] = 'A' + (c - 'A' + k) % 26;
        } else if (c >= 'a' && c <= 'z') {
            a[i] = 'a' + (c - 'a' + k) % 26;
        } else if (c >= '0' && c <= '9') {
            a[i] = '0' + (c - '0' + k) % 10;
        } else {
            a[i] = c;
        }
    }
    a[len] = '\0';
    return a;
}