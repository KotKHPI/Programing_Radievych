/**
 * @file lib.h
 * @brief Файл з прототипами функцій
 *
 * @author Radievych V.
 * @date 15-dec-2020
 * @version 1.0
 */

#pragma once
#include <stdlib.h>
#include <time.h>
#include <string.h>

int finding_word_count (char *p_sentence, int amount_words); /**функція знаходження кількості слів у реченні*/
int packing_words (int amount_words, int len, char **p_words, char *p_sentence); /**функція, яка розбиває слова на окремі строки у двохмірному масиві та знаходить загальну довжину заданого речення */
void sort_words (int amount_words, char **p_words); /**функція сортує слова за алфавітом*/


