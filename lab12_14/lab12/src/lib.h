/**
 * @file lib.h
 * @brief Файл з розміром масиву з речовинними числами та прототипами функцій
 *
 * @author Radievych V.
 * @date 15-dec-2020
 * @version 1.0
 */

#pragma one
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * Визначення кількості, завдяки користувача, випадкових чисел
 *
 * Функція показує деякий текст до консолі, з елементами вибору
 */
void print(int *p_n);
/**
 * Кількість речовинних числе в вхідному масиві
 */

void fillingNumber(float *pNumber, int *p_n);
/**
 * Заповнення вхідного масиву випадковими речовинними числами
 *
 * Функція заповнює вхідний масив випадковими речовинними числами з заданого діапазону
 */
void findsize_start(float *pNumber, int *r_size, int *r_start, int *r_amount_division, int *p_n);
/**
 * Знаходження розміру результуючого масиву, номер елементу з якого починається  послідовності чисел з не-зменшуваними значеннями та кількості ділянок таких чисел
 *
 * Функція знаходить розміру результуючого масиву, номер елементу з якого починається  послідовності чисел з не-зменшуваними значеннями та  кількість ділянок з не-зменшуваними речовинними числами
 */
void fillingResult(float *pResult, float *pArr, int *r_size, int *r_start);
/**
 * Заповнення результуючого масиву знайденною информациєю
 *
 * Функуція заповнює результуючий масив числами з не-зменшуваними значеннями,  послідовність, яких найбільша за розміром в масиві {@link pNumber}
 */
