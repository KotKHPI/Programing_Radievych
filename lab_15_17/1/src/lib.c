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

int check_count (FILE *file) {
    int k = 0;
    int s;
    while ((fscanf(file, "%d", &s) != EOF)) {
            k += 1;
    }
    return k;
}

void view_file_array (int *p_array, FILE *file, int k) {
    rewind(file);
    for(int i = 0; i < k; i++) {
        fscanf(file, "%d", (i + p_array));
    }
}
