/**
 * @mainpage
 * # Загальне завдання
 * 1. **Підрахувати** кількість ділянок , які утворюють безперервні послідовності чисел з не-зменшуваними значеннями. Максимальну ділянку переписати у інший масив;
 *
 * @author Radievych V.
 * @date 15-dec-2020
 * @version 1.0
 */

/**
 * @file main.c
 * @brief Файл з головною функцією main, що задає розмір масивам, змінним, виділяючи їм пам'ять та викликає функції fillingNumber, findsize_start, fillingResult.
 *
 * @author Radievych V.
 * @date 15-dec-2020
 * @version 1.0
 */

#include "lib.h"
#include <malloc.h>

/**
 * Головна функція.
 *
 * Послідовність дій:
 * - створення масиву *pNumber - масиву з числами
 * - генерація випадкових речовинних чисел для масиву *pNumber шляхом виклика функції
 * {@link fillingNumber}
 * - створення змінних *r_size та *r_start
 * - знаходження розміру результуючого масиву, з якого елемента масиву потрібно переписувати речевинні чисела з не-зменшуваними значеннями, шляхом виклика функції та кількість ділянок з не-зменшуваними значеннями
 * {@link findsize_start}
 * - створення масиву *pResult - резулютуючого масиву
 * - заповнення масиву речевинними чисели з не-зменшуваними значеннями, шляхом виклика функції
 * {@link fillingResult}
 * @return успішний код повернення з програми (0)
 */

int main() {
    /**
     * @param[in, out] pNumber - масив з речевинними числами
     * @param[in, out] r_amount_division - кількість ділянок з не-зменшуваними значеннями
     * @param[in, out] r_size - розмір рузультуючого маисиву та довжинна послідновних чисел
     * @param[in, out] r_start - номер елементу вхідного масиву, з якого потрібно переписувати послідовні числа
     * @param[in, out] pResult - результуючий масив з не-зменшуваними значеннями
    */
    srand(time(NULL));
    
    float *pNumber = (float*)malloc(N * sizeof(float)); //задаємо розмір масиву
    
    fillingNumber(pNumber);
    
    int pr_amount_division = 0;
    int pr_size = 0;
    int pr_start = 0;
    int *r_amount_division = &pr_amount_division;
    int *r_size = &pr_size;
    int *r_start = &pr_start;
    
    findsize_start(pNumber, r_size, r_start, r_amount_division);
    
    float *pResult = (float*)malloc(*r_size * sizeof(float));
    
    fillingResult(pResult, pNumber, r_size, r_start);
    
    *alloca(pResult);
    *alloca(pNumber);
    free(pResult);
    free(pNumber);
    *alloca(r_size);
    //free(r_size);
    *alloca(r_start);
    //free(r_start);
    *alloca(r_amount_division);
    //free(r_amount_division);
    
    return 0;
}
