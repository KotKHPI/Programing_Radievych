/**
 * @file lib.c
 * @brief Файл з реалізацією функцій
 *
 * @author Radievych V.
 * @date 9-mar-2021
 * @version 1.0
 */

#include "lib.h"

void check_file(FILE *fmatrix) {
    if (fmatrix == NULL) {
        printf("Файл не знайдено\n");
        printf("%d\n\n", errno);
        exit(1);
    }
}

void scanning (Basic* p_bird, int count_birds, FILE *birds_info) {
    int i = 0;
    while (i != count_birds) {
        fscanf(birds_info, "%d %s %d %d %d %d %d %d", &(p_bird + i)->label, (p_bird + i)->name, &(p_bird + i)->age, &(p_bird + i)->home.square, &(p_bird + i)->home.height, &(p_bird + i)->home.number_of_feeders, &(p_bird + i)->home.nest_nest, &(p_bird + i)->sex);
        i++;
    }
}

void sort_by_age (Basic* p_bird, int count_birds) {
    for(int i = 0 ; i < count_birds - 1; i++) {
        if((p_bird + i)->age > (p_bird + i + 1)->age) {
            Basic tmp = *(p_bird + i);
            *(p_bird + i) = *(p_bird + i + 1);
            *(p_bird + i + 1) = tmp;
        }
    }
}

void output_file (Basic* p_bird, int count_birds, FILE* out_info) {
    int j = 0;
    while(j != count_birds) {
        fprintf(out_info, "Птах № %d\n\n", j + 1);
        
        fprintf(out_info, "Чи окольцована птаха: ");
        if ((p_bird + j)->label == 0) {
            fprintf(out_info, "Так\n");
        } else {
            fprintf(out_info, "Ні\n");
        }
        
        fprintf(out_info, "Назва птаха: %s\nВік птаха: %d місяців\nПлоща домівки: %d см^2\nВисота домівки: %d см.\nКількість годівниць: %d\n", (p_bird + j)->name, (p_bird + j)->age, (p_bird + j)->home.square, (p_bird + j)->home.height, (p_bird + j)->home.number_of_feeders);
        
        fprintf(out_info, "Наявність гнізда: ");
        if ((p_bird + j)->home.nest_nest == 0) {
            fprintf(out_info, "Є гніздо\n");
        } else {
            fprintf(out_info, "Немає гнізда\n");
        }
        
        fprintf(out_info, "Стать: ");
        if ((p_bird + j)->sex == 0) {
            fprintf(out_info, "Чоловіча\n\n");
        } else {
            fprintf(out_info, "Жіноча\n\n");
        }
        j++;
    }
    printf("Відсортовані данні було виведено у файл!\n\n");
}

void random_elements (Basic* p_bird, int count_birds) {
    for(int f = 0; f < count_birds; f++) {
        int i = rand() % 2;
        char i_c = i + '0';
        char tmp[] = "Птах № ";
        //strcat(tmp, i_c);
        
        (p_bird + f)->label = rand() % 2;
        (p_bird + f)->age = rand() % 208 + 23;
        (p_bird + f)->home.square = rand() % 208 + 23;
        (p_bird + f)->home.height = rand() % 208 + 23;
        (p_bird + f)->home.number_of_feeders = rand() % 208 + 23;
        (p_bird + f)->home.nest_nest = rand() % 2;
        (p_bird + f)->sex = rand() % 2;
    }
}

void output_monitor (Basic* p_bird, int count_birds) {
    printf("Виведення на екран випадкових елементів структури:\n\n");
    
    for(int j = 0; j < count_birds; j++) {
        printf("Птах № %d\n\n", j + 1);
        
        printf("Чи окольцована птаха: ");
        if ((p_bird + j)->label == 0) {
            printf("Так\n");
        } else {
            printf("Ні\n");
        }
        
        printf("Назва птаха: %s\nВік птаха: %d місяців\nПлоща домівки: %d см^2\nВисота домівки: %d см.\nКількість годівниць: %d\n", (p_bird + j)->name, (p_bird + j)->age, (p_bird + j)->home.square, (p_bird + j)->home.height, (p_bird + j)->home.number_of_feeders);
        
        printf("Наявність гнізда: ");
        if ((p_bird + j)->home.nest_nest == 0) {
            printf("Є гніздо\n");
        } else {
            printf("Немає гнізда\n");
        }
        
        printf("Стать: ");
        if ((p_bird + j)->sex == 0) {
            printf("Чоловіча\n\n");
        } else {
            printf("Жіноча\n\n");
        }
    }
}
