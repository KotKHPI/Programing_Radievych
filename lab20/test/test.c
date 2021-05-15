/**
 * @file test.c
 * @brief Файл з тестами на реалізації функцій оперування динамічним списком елементів структурами
 *
 * @author Radievych V.
 * @date 15-apr-2021
 * @version 1.0
 */

#include "list.h"
#include "data.h"

/**
 * Верифікація роботи функції {@link creative_element}
 * на основі набора вхідних та очікуваних даних
 *
 * @return стан проходження тестів: 1 - тести пройшли успішно, 0 - частина
 * тестів не пройшла
 */

unsigned short test_creative_element() {
#ifdef DEBUG
    printf("Функція: %s\n", __PRETTY_FUNCTION__);
#endif
#ifdef DEBUG
    long begin = currentTimeMillis();
#endif
    printf("Запуск тесту %s ... \n", __FUNCTION__);
    unsigned short is_success = 1;
    Basic* data = (Basic*)malloc(sizeof(Basic));
    data->age = 1;
    data->next = malloc(sizeof(Basic));
    data->next->age = 2;
    data->next->next = malloc(sizeof(Basic));
    data->next->next->age = 3;
    data->next->next->next = NULL;
    
    Basic* expected_data = (Basic*)malloc(sizeof(Basic));
    expected_data->age = 1;
    expected_data->next = malloc(sizeof(Basic));
    expected_data->next->age = 2;
    expected_data->next->next = malloc(sizeof(Basic));
    expected_data->next->next->age = 100;
    expected_data->next->next->next = malloc(sizeof(Basic));
    expected_data->next->next->next->age = 3;
    expected_data->next->next->next->next = NULL;
    
    creative_element(data, 2);
    
    while (data->next != NULL) {
        if (data->age == expected_data->age) {
            is_success = 1;
        } else {
            is_success = 0;
        }
        data = data->next;
        expected_data = expected_data->next;
    }
    
    free(expected_data);
    free(data);
#ifdef DEBUG
    long end = currentTimeMillis();
    printf("Загальний час виконання тесту %s: %ld sec\n", __FUNCTION__ ,(end-begin)/1000);
#endif
    return is_success;
}

/**
 * Верифікація роботи функції {@link delete_once}
 * на основі набора вхідних та очікуваних даних
 *
 * @return стан проходження тестів: 1 - тести пройшли успішно, 0 - частина
 * тестів не пройшла
 */
unsigned short test_delete_once() {
#ifdef DEBUG
    printf("\nФункція: %s\n", __PRETTY_FUNCTION__);
#endif
#ifdef DEBUG
    long begin = currentTimeMillis();
#endif
    unsigned short is_success = 1;
    printf("Запуск тесту %s ... \n", __FUNCTION__);
    
    Basic* data = (Basic*)malloc(sizeof(Basic));
    data->age = 1;
    data->next = malloc(sizeof(Basic));
    data->next->age = 2;
    data->next->next = malloc(sizeof(Basic));
    data->next->next->age = 3;
    data->next->next->next = NULL;
    
    Basic* expected_data = (Basic*)malloc(sizeof(Basic));
    expected_data->age = 1;
    expected_data->next = malloc(sizeof(Basic));
    expected_data->next->age = 2;
    expected_data->next->next = NULL;
    
    delete_once(data, 3);
    
    while (data->next != NULL) {
        if (data->age == expected_data->age) {
            is_success = 1;
        } else {
            is_success = 0;
        }
        data = data->next;
        expected_data = expected_data->next;
    }
    
    free(expected_data);
    free(data);
#ifdef DEBUG
    long end = currentTimeMillis();
    printf("Загальний час виконання тесту %s: %ld sec\n", __FUNCTION__ ,(end-begin)/1000);
#endif
    return is_success;
}

/**
 * Верифікація роботи функції {@link sort_by_age}
 * на основі набора вхідних та очікуваних даних
 *
 * @return стан проходження тестів: 1 - тести пройшли успішно, 0 - частина
 * тестів не пройшла
 */
unsigned short test_sort_by_age() {
#ifdef DEBUG
    printf("\nФункція: %s\n", __PRETTY_FUNCTION__);
#endif
#ifdef DEBUG
    long begin = currentTimeMillis();
#endif
    unsigned short is_success = 1;
    printf("Запуск тесту %s ... \n", __FUNCTION__);
    Basic* data = (Basic*)malloc(sizeof(Basic));
    data->age = 2;
    data->next = malloc(sizeof(Basic));
    data->next->age = 1;
    data->next->next = malloc(sizeof(Basic));
    data->next->next->age = 3;
    data->next->next->next = NULL;
    
    Basic* expected_data = (Basic*)malloc(sizeof(Basic));
    expected_data->age = 1;
    expected_data->next = malloc(sizeof(Basic));
    expected_data->next->age = 2;
    expected_data->next->next = malloc(sizeof(Basic));
    expected_data->next->next->age = 3;
    expected_data->next->next->next = NULL;
    
    sort_by_age(data);
    
    while (data->next != NULL) {
        if (data->age == expected_data->age) {
            is_success = 1;
        } else {
            is_success = 0;
        }
        data = data->next;
        expected_data = expected_data->next;
    }
    
    free(expected_data);
    free(data);
#ifdef DEBUG
    long end = currentTimeMillis();
    printf("Загальний час виконання тесту %s: %ld sec\n", __FUNCTION__ ,(end-begin)/1000);
#endif
    return is_success;
}

/**
 * Точка входу модуля тестування.
 *
 * Запускає розроблені функції верифікації функцій роботи з динамічним списком елементів структур.
 *
 * По завершенню тестів виводиться на екран резуміюча інформація про стан
 * проходження тестів.
 *
 * @return стан проходження тестів: 1 - тести пройшли успішно, 0 - частина
 * тестів не пройшла
 */
int main() {
#ifdef DEBUG
    float begin = currentTimeMillis();
#endif
    unsigned short is_success = 1;
    is_success = test_creative_element();
    if (is_success == 0) {
        printf("Тест test_creative_element не пройдено!\n");
    }
    
    is_success = test_delete_once();
    if (is_success == 0) {
        printf("Тест test_delete_once не пройдено!\n");
    }
    
    is_success = test_sort_by_age();
    if (is_success == 0) {
        printf("Тест test_sort_by_age не пройдено!\n");
    }
    
    if (is_success == 1) {
        printf("Модульні тести пройдено успішно!");
    }
#ifdef DEBUG
    float end = currentTimeMillis();
    printf("\nЗагальний час роботи тестів: %f sec\n", (end-begin)/1000);
#endif
    return !is_success;
}
