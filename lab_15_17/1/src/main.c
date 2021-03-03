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

enum Yes_no {
    Так, //0
    Ні //1
};

enum Sex {
    Чоловіча,
    Жіноча
};

typedef struct {
    int square; //кв.см
    int height; //см
    int number_of_feeders;
    enum Yes_no nest_nest; //да, нет
} feature;

typedef struct {
    enum Yes_no label; //да, нет
    char name[15]; //петух, жаравель и тд
    int age; //месяцов
    feature home;
    enum Sex sex; //мужской, женский
} basic;


int main() {
    FILE *birds;
    char name_file[30] = "0";
    printf("Введіть імя файлу з текстом (шлях до файлу): ");
    scanf("%s", name_file);
    
    birds = fopen(name_file, "r+");
    check_file(birds);
    
    
    //TO DO
    struct feature* count; // = (struct feature*)malloc(50)
    struct basic* bird; // = (struct basic*)malloc(100)
    
    fscanf(birds, "%d %s %d %d %d %d %d %d", struct basic bird->label, struct basic bird->name, struct basic bird->);
    /*
    int k = check_count(birds);
    
    int *p_array = (int*)malloc(k * sizeof(int));
    
    view_file_array(p_array, birds, k);
    
    fprintf(birds, "\nКожному значенню з заданого масиву добовлено одиницю\nНовый масив чисел:");
    for(int i = 0; i < k; i++) {
        *(i + p_array) += 1;
        fprintf(birds, "%d", *(i + p_array));
    }
    
    free(p_array); */
    fclose(birds);
    return 0;
}
