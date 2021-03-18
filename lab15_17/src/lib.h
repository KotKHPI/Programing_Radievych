/**
 * @file lib.h
 * @brief Файл з описом структури птиць, перерахуванням критеріїв птиць та функцій оперування птахами
 *
 * @author Radievych V.
 * @date 9-mar-2021
 * @version 1.0
 */

#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <stdbool.h>
#include <time.h>
#include <string.h>
#pragma once

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
 *Функція перевірки файлу
 *
 *Функція перевіряє знаходження файлу з структурами по заданій директорії
 */
void check_file (FILE *fmatrix);

/**
 * Функція сканування
 *
 * Функція сканує та переносить данні з заданого файлу в задану структуру
 */
void scanning (Basic* p_bird, int count_birds, FILE *birds_info);

/**
 * Функція сортування
 *
 * Функція сортує масив структур за певним критерієм, в данному випадку - за віком
 */
void sort_by_age (Basic* p_bird, int count_birds); //test

/**
 * Функція виводу в файл
 *
 * Функція виводить масив структур у новий файл
 */
void output_file (Basic* p_bird, int count_birds, FILE* out_info);

/**
 * Функція створення даних про птиць
 *
 * Функція створює випадкові данні для масиву структур
 */
void random_elements (Basic* p_bird, int count_birds);

/**
 * Функція виводу на екран
 *
 * Функція виводить масив структур на екран
 */
void output_monitor (Basic* p_bird, int count_birds);
