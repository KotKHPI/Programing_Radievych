/**
 * @mainpage
 * # Загальне завдання
 * 1. **З розділу** "Розрахункове завдання / Індивідуальні завдання" взяти прикладну галузь, стосовно номеру варіанту за попередньо-визначеною формулою (номер 23);
 *
 * 2. **Створити** структуру, що відображає "базовий клас"
 *
 * @author Radievych V.
 * @date 9-mar-2021
 * @version 1.0
 */

/**
 * @file main.c
 * @brief Файл з демонстрацією роботи структури {@link Basic} та методів оперування ним.
 *
 * @author Radievych V.
 * @date 9-mar-2021
 * @version 1.0
 */

#include "lib.h"

/**
 * Головна функція.
 *
 * Послідовність дій:
 * - відкриття файл з інформацією про структуру
 * (@link Basic)
 * - створення масиву із
 * {@link count_birds} птиць
 * - сканування даних з файлу про структуру
 * - сортування масиву структур функцією
 * (@link sort_by_age)
 * - виведення відсортованих структур в файл, функцією
 * (@link output_file)
 * - генерація даних для кожної птиці шляхом виклика функції
 * (@link random_elements)
 * - вивід даних про всіх птиць на екран за допомогою функції
 * (@link output_monitor)
 * @return успішний код повернення з програми (0)
 */
int main() {
    srand(time(NULL));
    
    //Ввод
    FILE *birds_info;
    birds_info = fopen("/Users/whatislove/birds.txt", "r"); //name_file
    check_file(birds_info);
    
    //Вывод
    FILE *out_info;
    out_info = fopen("/Users/whatislove/out_birds.txt", "w");
    
    printf("Кількість птиць: ");
    int count_birds;
    scanf("%d", &count_birds);
    
    Basic* p_bird = malloc(count_birds * sizeof(Basic));
    
    //Сканирование
    
    scanning(p_bird, count_birds, birds_info);
    
    //Сортировка за возрастом
    
    sort_by_age(p_bird, count_birds);
    
    //Вывод данных в файл
    
    output_file(p_bird, count_birds, out_info);
    
    //Рандом значений
    
    random_elements(p_bird, count_birds);
    
    //Вывод на экран
    
    output_monitor(p_bird, count_birds);
        
    fclose(birds_info);
    fclose(out_info);
    return 0;
}
