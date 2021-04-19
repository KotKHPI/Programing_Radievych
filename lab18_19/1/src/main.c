/**
 * @mainpage
 * # Загальне завдання
 * 1. **Розробити** функцію, яка реалізує вставку в рядок "s" дургий рядок "s2" в "i" - у позицію рядка "s";
 *
 * 2. **Розробити** функцію видалення з рядка "s" усіх символів з індексами в заданому діапазоні;
 *
 * 3. **За допомогою** функцій memcpy, memset створити функції додання та видалення елементів з динамичного масиву
 *
 * @author Radievych V.
 * @date 15-apr-2021
 * @version 1.0
 */

/**
 * @file main.c
 * @brief Файл з демонстрацією роботи функцій з використанням динамічних масивів.
 *
 * @author Radievych V.
 * @date 15-apr-2021
 * @version 1.0
 */
#include "lib.h"

/**
 * Головна функція.
 *
 * Послідовність дій:
 * - введення початкових даних для функцій
 * - демонстрація роботи функції {@link insert}
 * - демонстрація роботи функції {@link reduce}
 * - введення кількості птиць
 * - виділення пам'яті для структур відповідно з кількості птиць
 * - заповнення даними масив структур з птицями
 * - демонстрація роботи функції {@link count_birds}
 * - демонстрація роботи функції {@link sort_by_age}
 * - звільнення пам'яті
 * @return успішний код повернення з програми (0)
 */
int main() {
    char* text = "cats";
    char* text2 = "dog";
    char* result = (char*)malloc((strlen(text) + strlen(text2)) * sizeof(char));
    char* result1 = (char*)malloc((strlen(text) + strlen(text2)) * sizeof(char));
    insert(text, text2, 3, result);
    reduce("catsdog1", 4, 3, result1);
    
    int count_birds = 5;
    
    Basic* p_bird = malloc(count_birds * sizeof(Basic));
    random_elements(p_bird, count_birds);
    
    //удаление
    count_birds = delete_element(p_bird, count_birds, 1);
    
    //добавление
    count_birds = add_elements(p_bird, count_birds, 2);
    sort_by_age(p_bird, count_birds);
    
    free(result);
    free(result1);
    free(p_bird);
    return 0;
}

