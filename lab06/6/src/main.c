#define N 3 // розмір матриці
int main() {
    int matrixA[N][N] = { //матриця А
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int matrix2A[N][N]; // матриця А^2
    for (int a = 0; a < N; a++) { // перерахунок рядка
        for (int b = 0; b < N; b++) { //перерахунок столбця
            matrix2A[a][b] = 0; //
        }
    }
    for (int a = 0; a < N; a++) { // перерахунок рядка
        for (int b = 0; b < N; b++) { //перерахунок столбця
            for (int c = 0; c < N; c++) {
            matrix2A[a][b] += matrixA[a][c] * matrixA[c][b]; //множення матрицю на матрицю відповідно до правил множення
        }
      }
    }
    return 0;
}
