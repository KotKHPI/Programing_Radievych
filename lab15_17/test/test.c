/**
 * @file test.c
 * @brief Файл з тестами на реалізації функцій оперування тваринами
 *
 * @author Radievych V.
 * @date 9-mar-2021
 * @version 1.0
 */

#include "lib.h"

unsigned short test_sort_by_age() {
#define N 3
    printf("Запуск тесту %s ... \n", __FUNCTION__);
    unsigned short is_success = 1;
    
    Basic* data_setup = malloc(N * sizeof(Basic));
    (data_setup + 0)->age = 12;
    (data_setup + 1)->age = 10;
    (data_setup + 2)->age = 11;
    
    Basic* expected_data = malloc(N * sizeof(Basic));
    (expected_data + 0)->age = 10;
    (expected_data + 1)->age = 11;
    (expected_data + 2)->age = 12;
    
    sort_by_age(data_setup, N);
    
    for (int i = 0; i < N; i++) {
        if ((expected_data + i)->age != (data_setup + i)->age) {
            printf("При перевірці %s функція знайдено помилку у %d елементі\n", __FUNCTION__, i + 1);
            is_success = 0;
            break;
        }
    }
    
    free(data_setup);
    free(expected_data);
    return is_success;
}

int main() {
    unsigned short is_success = 1;
    is_success = test_sort_by_age();
    
    if (is_success == 1) {
        printf("Модульний тест пройдено успішно!");
    }
    return !is_success;
}
