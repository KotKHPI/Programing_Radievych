/**
 * @file lib.c
 * @brief Файл з реалізацією функцій операциями над масивами
 *
 * @author Radievych V.
 * @date 15-dec-2020
 * @version 1.0
 */

#include "lib.h"

void print(int *p_n){
    int n = 0;
    printf("Л");
    putchar('a');
    printf("бораторна робота №12. Взаємодія з користувачем шляхом механізму введення/виведення\n");
    puts("Розробник: Радєвич Владислав, група КІТ - 320\n");
    
    printf("Ви еще тут? (введіть будь-яку ОДНУ англійську букву та натисніть Enter)\n");
    getchar();
    
    printf("Введіть кількість випадкових чисел: ");
    scanf("%d", &n);
    *p_n = n;
    
    char variant[10];
    puts("\nЯк пройшов ваш день? (good - добре, bad - погано): ");
    gets(variant);
    
    printf("\nЗ %d випадкових чисел знайдено декілька безперервних послідовностей чисел\n", n);
}

void fillingNumber(float *pNumber, int *p_n) {
    for (int i = 0; i < *p_n; i++) {
        *(pNumber + i) = (float) rand() / RAND_MAX * (5 - 0) + 0; //запомнюємо масив випадковими числами від 0 до 5 дійсними числами
    }
}

void findsize_start(float *pNumber, int *r_size, int *r_start, int *r_amount_division, int *p_n) {
    int size = 0;
    int start = 0;
    for (int i = 0; i < *p_n; i++){
        for(int j = i; *(pNumber + j + 1) > *(pNumber + j) && j < *p_n; j++) {
            size++;
            start = i;
        }
        if (size > 0 && *(pNumber + i) < *(pNumber + i - 1)) {
            *r_amount_division = *r_amount_division + 1;
        }
        if (*r_size < size) {
            *r_size = size + 1;
            *r_start = start;
            size = 0;
            start = 0;
        } else {
            size = 0;
            start = 0;
        }
    }
}

void fillingResult(float *pResult, float *pArr, int *r_size, int *r_start){
    int pr_size = *r_size;
    int pr_start = *r_start;
    printf("Результат:\n");
    
    for (int i = 0; i < pr_size; i++) {
        *(pResult + i) = *(pArr + pr_start);
        pr_start++;
        float a = *(pResult + i);
        printf("%f\n", a);
    }
}
