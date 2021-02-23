/**
 * @mainpage
 * # Загальне завдання
 * 1. **Вирахувати** детермінант матриці, розмір якої та саму матрицю записано у файлі.
 *
 * @author Radievych V.
 * @date 18-feb-2021
 * @version 1.0
 */

/**
 * @file main.c
 * @brief Файл з головною функцією main, що задає розмір масивам, змінним, виділяючи їм пам'ять та викликає функції @link check_file, @link check_matrix, @link filling_matrix, @link find_det.
 *
 * @author Radievych V.
 * @date 18-feb-2021
 * @version 1.0
 */


#include "lib.h"

/**
 * Головна функція.
 *
 * Послідовність дій:
 * - створення вказівника на певний файл
 * - сканування шляху до файлу
 * - відкриття та перевірка знаходження заданого файлу за допомогою функції
 * {@link check_file}
 * - знаходження розміру матриці, яка знаходиться у файлі
 * - перевірка розміру (для визначення: чи можливо знайти детермінант матриці), використовуючи функцію
 * {@link check_matrix}
 * - створення масиву **p_matrix - двомірний масив матриці
 * - виділення пам'яті та заповнення кожного елементу масиву певним значенням матриці, за допомогою функції
 * {@link filling_matrix}
 * - знаходження детермінанту матриці функцією
 * {@link find_det}
 * - закриття файлу та звільнення пам'яті, використовуючи функцію
 * {@link free_matrix}
 * @return успішний код повернення з програми (0)
 */

int main() {
    
    FILE *fmatrix;
    char name_file[30] = "0";
    printf("Введіть імя файлу з текстом (шлях до файлу): ");
    scanf("%s", name_file);
    
    fmatrix = fopen(name_file, "r+");
    check_file(fmatrix);
    
    int column = 0;
    int row = 0;
    fscanf(fmatrix, "%d %d", &column, &row);
    
    check_matrix(column, row, fmatrix);
    
    int size = column * row;
    int** p_matrix = (int**)malloc(size * sizeof(int*));
    
    filling_matrix(p_matrix, column, row, fmatrix);
    
    int det = find_det(p_matrix, column, fmatrix);
    
    fclose(fmatrix);
    free_matrix(p_matrix, column, row);
    return 0;
}
