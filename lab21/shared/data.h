/**
 * @file data.h
 * @brief Файл з описом структури птиць, перерахуванням критеріїв птиць та функцій оперування птахами
 *
 * @author Radievych V.
 * @date 15-apr-2021
 * @version 1.0
 */

#pragma once
#include <stdio.h>

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
typedef struct Basic {
    enum Yes_no label; /**< чи окольцьована птаха */
    char name[15]; /**< назва виду*/
    int age; /**< вік патаха, місяців*/
    Feature home; /**< структура домівки птаха (@link  Feature) */
    enum Sex sex; /**< стать птаха */
    struct Basic* next;
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
void scanning (Basic* p_bird, FILE *birds_info);

/**
 * Функція виводу в файл
 *
 * Функція виводить масив структур у новий файл
 */
void output_file (Basic* p_bird, FILE* out_info);

/**
 * Функція виводу на екран
 *
 * Функція виводить масив структур на екран
 */
void output_monitor (Basic* p_bird);

