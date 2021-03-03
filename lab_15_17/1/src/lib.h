/**
 * @file lib.h
 * @brief Файл з прототипами функцій
 *
 * @author Radievych V.
 * @date 22-dec-2020
 * @version 1.0
 */


#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <stdbool.h>
#pragma once

/**
 *Функція перевірки файлу
 *
 *Функція перевіряє знаходження файлу по заданія дерикторії
 */
void check_file (FILE *fmatrix);

int check_count (FILE *file);

void view_file_array (int *p_array, FILE *file, int k);
