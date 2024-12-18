int findLHS(int arr[], int n) {
    sort(arr, arr + n);
    int doDai = 0;
    int batDau = 0;

    for (int i = 1; i < n; ++i) {
        while (arr[i] - arr[batDau] > 1) {
            ++batDau;
        }
        if (arr[i] - arr[batDau] == 1) {
            doDai = max(doDai, i - batDau + 1);
        }
    }
    return doDai;
}