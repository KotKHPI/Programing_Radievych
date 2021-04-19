/**
 * @file lib.c
 * @brief Файл з реалізацією функцій
 *
 * @author Radievych V.
 * @date 15-apr-2021
 * @version 1.0
 */
#include "lib.h"

void insert (char* text, char* text2, int position, char* result) {
    int len_text = strlen(text);
    int len_text2 = strlen(text2);
    int now = 0;
    int left = len_text - position;
    
    for (int i = 0; i < position; i++) {
        *(result + i) = *(text + i);
        now++;
    }
    
    int temp = strlen(result);
    
    for (int i = now, j = 0; i < len_text2 + temp; i++, j++){
        *(result + i) = *(text2 + j);
        now++;
    }
    for (int i = now, j = position; i < now + left; i++, j++) {
        *(result + i) = *(text + j);
    }
}


void reduce (char* text, int position, int region, char* result1) {
    int len_text = strlen(text);
    int now = 0;
    
    for (int i = 0; i < position; i++) {
        *(result1 + i) = *(text + i);
        now++;
    }
    
    for (int i = now, j = position + region; i < len_text - region; i++, j++) {
        *(result1 + i) = *(text + j);
    }
    
    *(result1 + position + 1) = NULL;
}

void random_elements (Basic* p_bird, int count_birds) {
    for(int f = 0; f < count_birds; f++) {
        (p_bird + f)->label = rand() % 2;
        (p_bird + f)->age = rand() % 208 + 23;
        (p_bird + f)->home.square = rand() % 208 + 23;
        (p_bird + f)->home.height = rand() % 208 + 23;
        (p_bird + f)->home.number_of_feeders = rand() % 208 + 23;
        (p_bird + f)->home.nest_nest = rand() % 2;
        (p_bird + f)->sex = rand() % 2;
    }
}

void sort_by_age (Basic* p_bird, int count_birds) {
    for (int j = 0; j < count_birds - 1; j++) {
        for (int i = 0 ; i < count_birds - j - 1; i++) {
            if ((p_bird + i)->age < (p_bird + i + 1)->age) {
                Basic tmp = *(p_bird + i);
                *(p_bird + i) = *(p_bird + i + 1);
                *(p_bird + i + 1) = tmp;
            }
        }
    }
}

int delete_element (Basic* p_bird, int count_birds, int delete_element) {
    memset((p_bird + delete_element), 0, sizeof(Basic));
    sort_by_age(p_bird, count_birds);
    count_birds -= 1;
    return count_birds;
}

int add_elements (Basic* p_bird, int count_birds, int add_element) {
    count_birds += add_element;
    for (int i = count_birds - add_element; i < count_birds; i++) {
        memcpy((p_bird + i), (p_bird + 1), sizeof(Basic));
    }
    return count_birds;
}
