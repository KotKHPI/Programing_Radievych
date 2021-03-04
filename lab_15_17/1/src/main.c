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
} Feature;

typedef struct {
    enum Yes_no label; //да, нет
    char name[15]; //петух, жаравель и тд
    int age; //месяцов
    Feature home;
    enum Sex sex; //мужской, женский
} Basic;


int main() {
    FILE *birds_info;
    char name_file[30] = "0";
    printf("Введіть імя файлу з текстом (шлях до файлу): ");
    scanf("%s", name_file);
    
    birds_info = fopen("/Users/whatislove/birds.txt", "r+"); //name_file
    check_file(birds_info);
    
    printf("Кількість птиць: ");
    int count_birds;
    scanf("%d", &count_birds);
    
    /*struct Basic ** p_bird = malloc(count_birds * sizeof(struct Basic*));
    for (int i = 0; i < 2000; i++) {
        *(p_bird + i) = malloc(sizeof(struct Basic*));
    }*/
    
    Basic* bird1 = malloc(sizeof(Basic));
    Basic* bird2 = malloc(sizeof(Basic));
    Basic* bird3 = malloc(sizeof(Basic));
    
    
    fscanf(birds_info, "%d %s %d %d %d %d %d %d", &bird1->label, bird1->name, &bird1->age, &bird1->home.square, &bird1->home.height, &bird1->home.number_of_feeders, &bird1->home.nest_nest, &bird1->sex);
    
    fscanf(birds_info, "%d %s %d %d %d %d %d %d", &bird2->label, bird2->name, &bird2->age, &bird2->home.square, &bird2->home.height, &bird2->home.number_of_feeders, &bird2->home.nest_nest, &bird2->sex);
    
    fscanf(birds_info, "%d %s %d %d %d %d %d %d", &bird3->label, bird3->name, &bird3->age, &bird3->home.square, &bird3->home.height, &bird3->home.number_of_feeders, &bird3->home.nest_nest, &bird3->sex);
    
    /*if (bird2->label == 0) {
        printf("Так ");
    }
    if (bird2->label == 1) {
        printf("Нить ");
    }
    
    printf("%s %d %d %d %d %d %d", bird2->name, bird2->age, bird2->home.square, bird2->home.height, bird2->home.number_of_feeders, bird2->home.nest_nest, bird2->sex);*/
    
    //free Basic** TODO
    fclose(birds_info);
    return 0;
}
