/**
 * @mainpage
 * # Загальне завдання
 * 1. **Вирахувати** для тексту частотну таблицю: для кожного символу визначити його частоту появи у тексті.
 *
 * @author Radievych V.
 * @date 9-mar-2021
 * @version 1.0
 */

/**
 * @file main.c
 * @brief Файл з головною функцією main, що задає розмір масивам, змінним, виділяючи їм пам'ять та викликає функції count_text_length, count_of_unique_elements, fill_zeros, get_symbols, get_symbols_counts, get_symbols_frequencies.
 *
 * @author Radievych V.
 * @date 9-mar-2021
 * @version 1.0
 */

#include "lib.h"

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
