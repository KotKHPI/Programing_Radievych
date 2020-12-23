/**
 * @file lib.h
 * @brief Файл з прототипами функцій
 *
 * @author Radievych V.
 * @date 22-dec-2020
 * @version 1.0
 */

#pragma once
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int count_text_length(char* arr);
/**
 * Функція знаходження кількості слів
 *
 * Функція знаходе певну кількість слів у заданому реченні
 */
bool checker(char* arr, int currentIndex, char value);
/**
 * Функція допомагає знайти символи, що дубюлюється
 */
int count_of_unique_elements(char* arr, int size);
/**
 * Функція знаходження кількість символів, які дублюються та знаходжену довжину рядка унікальних символів
 *
 * Функція знаходе всі символи, що дублюються в заданому рядку та знаходить кількості унікальних символів, що є результатом функції
 */
void fill_zeros(int* arr, int size);
/**
 *Функція очищення масиву
 *
 *Функція заповнює масив з кількостю доблюваних символів нулями для очищення масиву
 */
void get_symbols(char* strIn, int sizeIn, char* symbols);
/**
 * Функція виділення унікальних символів
 *
 * Функція виділяє унікальні символи з заданого тексту за переписує їх в окремий рядок
 */
void get_symbols_counts(char* strIn, int sizeIn, char* elements, int* elCounts, int sizeOut);
/**
 *Функція присвоєння кількості
 *
 *Функція присвоює кожному унікальному символу його кількість повторення до переписання тексту в один рядок тільки з унікальними символами
 */

void get_symbols_frequencies(int* elCounts, float* elFreaqs, int size, int totalCount);
/**
 *Функція визначення частоти
 *
 *Функція заповнює масив, в якому збергаеться частота появи кожного символа в заданому тексті
 */
