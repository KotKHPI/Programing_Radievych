/**
 * @file lib.h
 * @brief Файл з описом структури птиць, перерахуванням критеріїв птиць та функцій оперування птахами
 *
 * @author Radievych V.
 * @date 15-apr-2021
 * @version 1.0
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Так або ні
 */
enum Yes_no {
    Так, //0
    Ні //1
};

/**
 * Стать птиці
 */
enum Sex {
    Чоловіча,
    Жіноча
};

/**
 * Структура домівки птаха
 */
typedef struct {
    int square; /**< площа домівки, см^2 */
    int height; /**< висота домівки, см */
    int number_of_feeders; /**< кількість годівниць */
    enum Yes_no nest_nest; /**< наявність гнізда */
} Feature;

/**
 * Структура "Птах"
 */
typedef struct {
    enum Yes_no label; /**< чи окольцьована птаха */
    char name[15]; /**< назва виду*/
    int age; /**< вік патаха, місяців*/
    Feature home; /**< структура домівки птаха (@link  Feature) */
    enum Sex sex; /**< стать птаха */
} Basic;

/**
 * Функція вставки в рядок
 *
 * Функція вставляє задане слово в заданий рядок на певну позицію
 */
void insert (char* text, char* text2, int position, char* result);

/**
 * Функція видалення з рядка
 *
 * Функція видаляє задану кількість символів з певної позиції заданого рядка
 */
void reduce (char* text, int position, int region, char* result1);

/**
 * Функція створення даних про птиць
 *
 * Функція створює випадкові данні для масиву структур
 */
void random_elements (Basic* p_bird, int count_birds);

/**
 * Функція сортування
 *
 * Функція сортує масив структур за певним критерієм, в данному випадку - за віком
 */
void sort_by_age (Basic* p_bird, int count_birds);

/**
 * Функція видалення елементу
 *
 * Функція видаляє певний елемент з масиву структур
 */
int delete_element (Basic* p_bird, int count_birds, int delete_element);

/**
 * Функція додавання елемету
 *
 * Функція додає еще одну структуру в масив структур
 */
int add_elements (Basic* p_bird, int count_birds, int add_element);
