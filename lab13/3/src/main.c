/**
 * @mainpage
 * # Загальне завдання
 * 1. **Вирахувати** для тексту частотну таблицю: для кожного символу визначити його частоту появи у тексті.
 *
 * @author Radievych V.
 * @date 22-dec-2020
 * @version 1.0
 */

/**
 * @file main.c
 * @brief Файл з головною функцією main, що задає розмір масивам, змінним, виділяючи їм пам'ять та викликає функції count_text_length, count_of_unique_elements, fill_zeros, get_symbols, get_symbols_counts, get_symbols_frequencies.
 *
 * @author Radievych V.
 * @date 15-dec-2020
 * @version 1.0
 */

#include "lib.h"

/**
 * Головна функція.
 *
 * Послідовність дій:
 * - створення масиву text - масиву заданим текстом
 * - створення покажчика на масив тесту
 * - створення text_length та присвоєння результату функції
 * {@link count_text_length}
 * - створення uniqueElCount та присвоєння результату функції
 * {@link count_of_unique_elements}
 * - створення масиву *symbols - покажик на рядкок в якому будуть усі унікальні символи
 * - створення масиву *symbols_counts - покажчик на масив, в якому указано кількість слів, що дублюється
 * - створення масиву *symbols_frequency - покажик на масив, в якому указано частоту появи символів, які задано в тексті
 * - використання функції
 * {@link fill_zeros}
 *  * - використання функції
 * {@link get_symbols}
 *  * - використання функції
 * {@link get_symbols_counts}
 *  * - використання функції
 * {@link get_symbols_frequencies}
 * звільнення пам'яті
 * @return успішний код повернення з програми (0)
 */

int main() {
    
    char text[] = "Cat Kote Kotovich aka Kotovsky";
    char *p_Text = text;

    int text_length = count_text_length(p_Text); /**кількість слів в заданому тексті*/
    int uniqueElCount = count_of_unique_elements(p_Text, text_length);/**кількість унікальних символів*/

    char *symbols = (char*) malloc ((uniqueElCount + 1) * sizeof(char)); /**покажик на рядкок в якому будуть усі унікальні символи*/
    int *symbols_counts = (int*) malloc (uniqueElCount * sizeof(int)); /**покажчик на масив, в якому указано кількість слів, що дублюється*/
    float *symbols_frequency = (float*) malloc (uniqueElCount * sizeof(float)); /**покажик на масив, в якому указано частоту появи символів, які задано в тексті*/
    
    fill_zeros(symbols_counts, uniqueElCount);

    get_symbols(p_Text, text_length, symbols);
    get_symbols_counts(p_Text, text_length, symbols, symbols_counts, uniqueElCount);
    get_symbols_frequencies(symbols_counts, symbols_frequency, uniqueElCount, text_length);


    free(p_Text);
    free(symbols);
    free(symbols_counts);
    free(symbols_frequency);
    return 0;
}
