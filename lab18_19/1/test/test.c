/**
 * @file test.c
 * @brief Файл з тестами на реалізації функцій оперування структурами
 *
 * @author Radievych V.
 * @date 9-mar-2021
 * @version 1.0
 */

#include "lib.h"

/**
 * Верифікація роботи функції {@link insert_t}
 * на основі набора вхідних та очікуваних даних
 *
 * @return стан проходження тестів: 0 - тести пройшли успішно, 1 - частина
 * тестів не пройшла
 */

unsigned short insert_t () {
    printf("Запуск тесту %s ... \n", __FUNCTION__);
    unsigned short is_success = 1;
    
    char* text = "cats";
    char* text2 = "dog";
    char* expected_data = "catdogs";
    char* result_now = (char*)malloc(strlen(text) * sizeof(char));
    
    insert(text, text2, 3, result_now);
    
    is_success = strcmp(result_now, expected_data);
    
    free(result_now);
    return is_success;
}

/**
 * Верифікація роботи функції {@link reduce_t}
 * на основі набора вхідних та очікуваних даних
 *
 * @return стан проходження тестів: 0 - тести пройшли успішно, 1 - частина
 * тестів не пройшла
 */
unsigned short reduce_t () {
    printf("Запуск тесту %s ... \n", __FUNCTION__);
    unsigned short is_success = 1;
    
    char* text = "catsdog1";
    char* expected_data = "cats1";
    char* result_now = (char*)malloc(strlen(text) * sizeof(char));
    
    reduce(text, 4, 3, result_now);
    
    is_success = strcmp(result_now, expected_data);
    free(result_now);
    return is_success;
}

/**
 * Верифікація роботи функції {@link delete_element_t}
 * на основі набора вхідних та очікуваних даних
 *
 * @return стан проходження тестів: 0 - тести пройшли успішно, 1 - частина
 * тестів не пройшла
 */
unsigned short delete_element_t () {
    printf("Запуск тесту %s ... \n", __FUNCTION__);
    unsigned short is_success = 1;
    
    int count_birds = 5;
    Basic* p_bird = malloc(count_birds * sizeof(Basic));
    random_elements(p_bird, count_birds);
    (p_bird + 1)->age = 10000;
    Basic* expected_data = malloc(sizeof(Basic));
    expected_data->age = 10000;
    
    count_birds = delete_element(p_bird, count_birds, 1);
    
    if(expected_data->age != (p_bird + 1)->age) {
        is_success = 0;
    } else {
        is_success = 1;
    }
    
    free(p_bird);
    free(expected_data);
    return is_success;
}

/**
 * Верифікація роботи функції {@link add_element_t}
 * на основі набора вхідних та очікуваних даних
 *
 * @return стан проходження тестів: 0 - тести пройшли успішно, 1 - частина
 * тестів не пройшла
 */
unsigned short add_element_t () {
    printf("Запуск тесту %s ... \n", __FUNCTION__);
    unsigned short is_success = 1;
    int count_birds = 4;
    Basic* p_bird = malloc(count_birds * sizeof(Basic));
    random_elements(p_bird, count_birds);
    Basic* expected_data = (p_bird + 1);
    
    count_birds = add_elements(p_bird, count_birds, 2);
    
    if ((p_bird + 4)->age == expected_data->age && (p_bird + 5)->age == expected_data->age) {
        is_success = 0;
    } else {
        is_success = 1;
    }
    free(p_bird);
    return is_success;
}

/**
 * Точка входу модуля тестування.
 *
 * Запускає розроблені функції верифікації функцій роботи з динамічними масивами.
 *
 * По завершенню тестів виводиться на екран резуміюча інформація про стан
 * проходження тестів.
 *
 * @return стан проходження тестів: 0 - тести пройшли успішно, 1 - частина
 * тестів не пройшла
 */
int main() {
    unsigned short is_success = 1;
    is_success = insert_t();
    if (is_success == 0) {
        printf("Модульний тест пройдено успішно!\n\n");
    } else {
        printf("Модульний тест не пройдено(\n\n");
    }
    
    is_success = reduce_t();
    if (is_success == 0) {
        printf("Модульний тест пройдено успішно!\n\n");
    } else {
        printf("Модульний тест не пройдено(\n\n");
    }
    
    is_success = delete_element_t();
    if (is_success == 0) {
        printf("Модульний тест пройдено успішно!\n\n");
    } else {
        printf("Модульний тест не пройдено(\n\n");
    }
    
    is_success = add_element_t();
    if (is_success == 0) {
        printf("Модульний тест пройдено успішно!\n");
    } else {
        printf("Модульний тест не пройдено(\n");
    }
    return is_success;
}
