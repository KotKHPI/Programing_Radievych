/**
 * @file lib.h
 * @brief Файл з прототипами функцій
 *
 * @author Radievych V.
 * @date 18-feb-2021
 * @version 1.0
 */

#pragma once
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <errno.h>

/**
 *Функція перевірки файлу
 *
 *Функція перевіряє знаходження файлу по заданія дерикторії
 */
void check_file (FILE *fmatrix);

/**
 *Функція перевірки матриці
 *
 *Функція перевіряє чи є задана матриця квадратною та не перевищує вона розмір 3 на 3
 */
void check_matrix (int column, int row, FILE *fmatrix);

/**
 *Функція заповнення матриці
 *
 *Функція переписує з файлу значення матриці в двомірний масив
 */
void filling_matrix (int** p_matrix, int column, int row, FILE *fmatrix);

/**
 *Функція знаходження детермінанту
 *
 *Функція знаходить детермінант матриці, виписує його значення в консоль та в файл
 */
int find_det (int** p_matrix, int column, FILE *fmatrix);

/**
 *Функція звільнення пам'яті
 */
void free_matrix(int** p_matrix, int column, int row);

