int* reduce(int* arr, int* arrLen, int reduceNumber){
    int* res = new int[reduceNumber];
    for (int i = 0; i < reduceNumber; i++) {
        res[i] = arr[i];
    }
    *arrLen = reduceNumber;
    return res;
}