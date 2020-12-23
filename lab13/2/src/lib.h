/**
 * @file lib.h
 * @brief Файл   та прототипами функцій
 *
 * @author Radievych V.
 * @date 15-dec-2020
 * @version 1.0
 */

#pragma once
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdio.h>

int finding_word_count(char *p_surnames, int amount_words); /**функція знаходе кількість слів у заданому реченні*/
void rewriting_words (char **p_all_surnames, char *p_surnames, int amount_words); /**функція переписує кожне слово в окремий рядок двомірного масиву*/
void finding_duplicate_words(int amount_words, char **p_all_surnames); /**функція знаходе усі слов, що дублюються*/
int record_unique_words(int amount_words, int len_result, int save_amount_words, char **p_result, char **p_all_surnames); /**функція видаляє усі слова, що дублюються*/
void write_words_to_resulting(int amount_words, char *result, char **p_result);/**функція переписує усі унікальні слова в один рядок*/
