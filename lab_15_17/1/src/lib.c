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
