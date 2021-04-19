/**
 * @file data.c
 * @brief Файл з реалізацією функцій для data.h
 *
 * @author Radievych V.
 * @date 15-apr-2021
 * @version 1.0
 */
#include "list.h"
#include "data.h"

void check_file(FILE *fmatrix) {
    if (fmatrix == NULL) {
        printf("Файл не знайдено\n");
        printf("%d\n\n", errno);
        exit(1);
    }
}

void scanning (Basic* p_bird, FILE *birds_info) {
        fscanf(birds_info, "%d %s %d %d %d %d %d %d", &(p_bird)->label, (p_bird)->name, &(p_bird)->age, &(p_bird)->home.square, &(p_bird)->home.height, &(p_bird)->home.number_of_feeders, &(p_bird)->home.nest_nest, &(p_bird)->sex);
}

void output_file (Basic* p_bird, FILE* out_info) {
        
        fprintf(out_info, "Чи окольцована птаха: ");
        if (p_bird->label == 0) {
            fprintf(out_info, "Так\n");
        } else {
            fprintf(out_info, "Ні\n");
        }
        
        fprintf(out_info, "Назва птаха: %s\nВік птаха: %d місяців\nПлоща домівки: %d см^2\nВисота домівки: %d см.\nКількість годівниць: %d\n", p_bird->name, p_bird->age, p_bird->home.square, p_bird->home.height, p_bird->home.number_of_feeders);
        
        fprintf(out_info, "Наявність гнізда: ");
        if (p_bird->home.nest_nest == 0) {
            fprintf(out_info, "Є гніздо\n");
        } else {
            fprintf(out_info, "Немає гнізда\n");
        }
        
        fprintf(out_info, "Стать: ");
        if (p_bird->sex == 0) {
            fprintf(out_info, "Чоловіча\n\n");
        } else {
            fprintf(out_info, "Жіноча\n\n");
        }
}

void output_monitor (Basic* p_bird) {
        
        printf("Чи окольцована птаха: ");
        if (p_bird->label == 0) {
            printf("Так\n");
        } else {
            printf("Ні\n");
        }
        
        printf("Назва птаха: %s\nВік птаха: %d місяців\nПлоща домівки: %d см^2\nВисота домівки: %d см.\nКількість годівниць: %d\n", p_bird->name, p_bird->age, p_bird->home.square, p_bird ->home.height, p_bird->home.number_of_feeders);
        
        printf("Наявність гнізда: ");
        if (p_bird->home.nest_nest == 0) {
            printf("Є гніздо\n");
        } else {
            printf("Немає гнізда\n");
        }
        
        printf("Стать: ");
        if (p_bird->sex == 0) {
            printf("Чоловіча\n\n");
        } else {
            printf("Жіноча\n\n");
        }
}
