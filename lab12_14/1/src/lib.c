/**
 * @file lib.c
 * @brief Файл з реалізацією функцій
 *
 * @author Radievych V.
 * @date 22-dec-2020
 * @version 1.0
 */

#include "lib.h"

void check_file(FILE *fmatrix) {
    if (fmatrix == NULL) {
        printf("Файл не знайдено\n");
        printf("%d\n\n", errno);
        exit(1);
    }
}

void check_matrix(int column, int row, FILE *fmatrix) {
    if (column != row) {
        printf("\nНе можливо знайти детермінант матриці, бо матриця не квадратна\n");
        fprintf(fmatrix, "\nНе можливо знайти детермінант матриці, бо матриця не квадратна");
        exit(2);
    }
    if (column > 3){
        printf("\nНе можливо знайти детермінант матриці, бо програма розрахована на максимальну матрицю розміров 3 на 3\n");
        fprintf(fmatrix, "\nНе можливо знайти детермінант матриці, бо програма розрахована на максимальну матрицю розміров 3 на 3");
        exit(3);
    }
}

void filling_matrix (int** p_matrix, int column, int row, FILE *fmatrix) {
    for (int i = 0; i < column; i++) {
        for (int j = 0; j < row; j++) {
            *((p_matrix +i) + j) = (int*)malloc(1 * sizeof(int));
            fscanf(fmatrix, "%d", &(*(*(p_matrix + i) + j)));
        }
    }
}

int find_det (int** p_matrix, int column, FILE *fmatrix) {
    int det = 0;
    if (column == 2) {
        det = *(*(p_matrix +0) +0) * *(*(p_matrix +1) +1) - *(*(p_matrix +0) +1) * *(*(p_matrix +1) +0);
        fprintf(fmatrix, "\nДетермінатн матриці: %d", det);
        printf("Детермінант матриці: %d\n", det);
    }
    if (column == 3){
        det = *(*(p_matrix +0) +0) * *(*(p_matrix +1) +1) * *(*(p_matrix +2) +2) + *(*(p_matrix +0) +1) * *(*(p_matrix +1) +2) * *(*(p_matrix +2) +0) + *(*(p_matrix +0) +2) * *(*(p_matrix +1) +0) * *(*(p_matrix +2) +1) - *(*(p_matrix +0) +2) * *(*(p_matrix +1) +1) * *(*(p_matrix +2) +0) - *(*(p_matrix +0) +0) * *(*(p_matrix +1) +2) * *(*(p_matrix +2) +1) - *(*(p_matrix +0) +1) * *(*(p_matrix +1) +0) * *(*(p_matrix +2) +2);
        fprintf(fmatrix, "\nДетермінатн матриці: %d", det);
        printf("Детермінант матриці: %d\n", det);
    }
    return det;
}

void free_matrix(int** p_matrix, int column, int row) {
    for (int i = 0; i < column; i++) {
        for (int j = 0; j < row; j++) {
            free(*((p_matrix +i) + j));
        }
    }
    free(*p_matrix);
}
