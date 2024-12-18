int** getMatrix(int m, int n) {
    int **matrix = (int**)malloc(m * sizeof(int*));
    for (int i = 0; i < m; i++) {
        matrix[i] = (int*)malloc(n * sizeof(int));
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    return matrix;
}
void putNorm(int **matrix, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if(matrix[i][j]<0){
                matrix[i][j]=0;
                printf("%d ", matrix[i][j]);
            }
            else{
                printf("%d ", matrix[i][j]);
            }
        }
        printf("\n");
    }
}