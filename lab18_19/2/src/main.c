/**
 * @mainpage
 * # Загальне завдання
 * 4. **З розділу** "Розрахункове завдання / Індивідуальні завдання" взяти прикладну галузь, стосовно номеру варіанту за попередньо-визначеною формулою (номер 23) та сформувати односпрямований список елементів розробленної структури;
 *
 * @author Radievych V.
 * @date 15-apr-2021
 * @version 1.0
 */

/**
 * @file main.c
 * @brief Файл з демонстрацією роботи односпрямованого списоку елементів розробленної структури{@link Basic} та методів оперування ним.
 *
 * @author Radievych V.
 * @date 15-apr-2021
 * @version 1.0
 */
#include "list.h"

/**
 * Головна функція.
 *
 * Послідовність дій:
 * - відкриття файл з інформацією про структуру
 * (@link Basic)
 * - створення односпрямованого списоку елементів структури{@link Basic}
 * - сканування даних з файлу про структуру
 * - введення кількості птиць
 * - вибір однієї з дій: 1) виведення елементів списку на екран 2)виведення елементів списку у файл 3) додавання елементу на задану позицію у списку 4) видалення заданого елементу зі списку 5) сортування елементів списку за роками 6) вихід з прогрми
 * - звільнення пам'яті
 * @return успішний код повернення з програми (0)
 */
int main() {
    srand(time(NULL));
    
    printf("Вітаю вас!\nДля початку роботи потрібно заповнити дейкі дані.\n");
        
    //Ввод
    FILE *birds_info;
    birds_info = fopen("/Users/whatislove/birds.txt", "r"); //name_file
    check_file(birds_info);
    
    //Вывод
    FILE *out_info;
    out_info = fopen("/Users/whatislove/out_birds.txt", "w");
    
    printf("Введіть кількість птиць: ");
    int count_birds = 4;
    scanf("%d\n", &count_birds);
    
    Basic* head = malloc(sizeof(Basic));
    scanning(head, birds_info);
    head->next = NULL;
    
    //Ввод из файла
    for (int i = 0; i < count_birds - 1; i++) {
        head = creative(head, birds_info);
    }
    fseek(birds_info, 0L, SEEK_SET);
    scanning(head, birds_info);

    int q = 0;
    int o = 1;
    while(q != 100) {
        printf("Натиснiть:\n[1] - вивести дані списку на екран\n[2] - вивести данні списку у файл\n[3] - додати елемент у список\n[4] - видалити елемент зі списку\n[5] - відсортувати список за роками\n[100] - завершити програму\nВаша відповідь: ");
        scanf("%d", &q);
        switch(q) {
            case 1:
                //Вывод на экран
                output_monitor_element(head);
                break;
            
            case 2:
                //Вывод в файл
                output_file_element(head, out_info);
                break;
            
            case 3:
                printf("На якій позиції будет новий елемент: ");
                scanf("%d", &o);
                //Добавление елемента
                creative_element(head, o);
                break;
            
            case 4:
                //Удаление определенного елемента
                printf("Який елемент буде видалено: ");
                scanf("%d", &o);
                delete_once(head, o);
                break;
            
            case 5:
                //Сортировка по годам
                sort_by_age(head);
    
        }
    }
    free(head);
    return 0;
}
