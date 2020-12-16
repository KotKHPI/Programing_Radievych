#include "lib.h"

void fillingArr(int *pArr) {
    for (int i = 0; i < N * N; i++){
        *(pArr + i) = rand() % 10; //задаємо випадкових значень у матрицю
    }
}

void MainDiagonal(int *pResult, int *pArr) { //визначаємо значення кожного елементу головної матриці
    *(pResult + 0) = *(pArr + 0);
    for (int i = 1; i < N; i++){
        *(pResult + i) = *(pArr + i * (N + 1));
    }
}

void sort(int *pArr){ //сортування методом бульбашки
    int temp = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (*(pArr + i) < *(pArr + j)){
                temp = *(pArr + i);
                *(pArr + i) = *(pArr + j);
                *(pArr + j) = temp;
            }
        }
        
    }
}
