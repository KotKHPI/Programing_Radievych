#include <stdlib.h>
#include <time.h>

#define N 3 // розмір матриці
int matrixMult(int matrixA[N][N], int matrix2A[N][N]);
int main() {
    srand(time(NULL));
    
    int matrixA[N][N]; // матриця А
    for (int a = 0; a < N; a++) { // перерахунок рядка
        for (int b = 0; b < N; b++) { //перерахунок столбця
            matrixA[a][b] = rand() % 10; //заповнення матриці псевдовипадковими числами від 0 до 10
        }
    }
    
    int matrix2A[N][N] = {0}; // матриця А^2

    matrixMult(matrixA, matrix2A);
    
    return 0;
}
int matrixMult(int matrixA[N][N], int matrix2A[N][N]){
    
    for (int a = 0; a < N; a++) { // перерахунок рядка
        for (int b = 0; b < N; b++) { //перерахунок столбця
            for (int c = 0; c < N; c++) {
            matrix2A[a][b] += matrixA[a][c] * matrixA[c][b]; //множення матрицю на матрицю відповідно до правил множення
        }
      }
    }
    
    return matrix2A;
}
