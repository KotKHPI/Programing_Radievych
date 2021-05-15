/**
 * @file list.h
 * @brief Файл з описом структури птиць, перерахуванням критеріїв птиць та функцій оперування птахами
 *
 * @author Radievych V.
 * @date 15-apr-2021
 * @version 1.0
 */

#pragma once
#include "data.h"
#include <stdio.h>
#include <errno.h>
#include <stdbool.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <libc.h>


/**
 * Функція вводу даних з файлу
 *
 * Функція заповнює дані до списку взяті з заданого файлу
 */
Basic* creative(Basic* head, FILE *birds_info);

/**
 * Функція створення одного елементу
 *
 * Функція додає до списку елемент та розміщує его в заданій позиції
 */
void creative_element(Basic* head, int position); //test

/**
 * Функція видалення елементу
 *
 * Функція видаляє певний елемент зі списку
 */
void delete_once (Basic* head, int n); //test

/**
 * Функція виводу у файл
 *
 * Функція виводить у файл існуючий динамічний список
 */
void output_file_element (Basic* head, FILE *out_info);

/**
 * Функція виводу на екран
 *
 * Функція виводить елементи динаміного списку на екрна
 */
void output_monitor_element (Basic* head);

/**
 * Функція сортування
 *
 * Функція сортує елементи динамічного списку за роками (від меньшого до більшого)
 */
void sort_by_age (Basic* head); //test

/**
 * Функція для знаходження часу роботи
 *
 * Функція знаходе час, який був витраченний при роботі програми
 */
long currentTimeMillis();
