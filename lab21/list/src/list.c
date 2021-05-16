/**
 * @file list.c
 * @brief Файл з реалізацією функцій для list.h
 *
 * @author Radievych V.
 * @date 15-apr-2021
 * @version 1.0
 */
#include "list.h"

Basic* creative(Basic* head, FILE *birds_info) {
#ifdef DEBUG
    printf("%s %s\nФункція: %s\n\n", __DATE__, __TIME__, __PRETTY_FUNCTION__);
#endif
    Basic* element;
    element = (Basic*)malloc(sizeof(Basic));
    scanning(head, birds_info);
    element->next = head;
    
    return element;
}

void creative_element(Basic* head, int position) {
#ifdef DEBUG
    printf("\n%s %s\nФункція: %s\n", __DATE__, __TIME__, __PRETTY_FUNCTION__);
#endif
    Basic* tmp;
    tmp = (Basic*)malloc(sizeof(Basic));
    
    position--;
    Basic* element = head;
    for (int i = 0; i < position; i++) {
        element = element->next;
    }
    
    Basic* temp = element->next;
    memcpy(tmp, head, sizeof(Basic));
    element->next = tmp;
    tmp->age = 100;
    tmp->next = temp;
    free(tmp);
    printf("Елемент додано до списку!\n\n");
}

void delete_once (Basic* head, int n) {
#ifdef DEBUG
    printf("\n%s %s\nФункція: %s\n", __DATE__, __TIME__, __PRETTY_FUNCTION__);
#endif
    Basic* element = head;
    Basic* tmp = head;
    
    n--;
    int i = 0;
    while (i != n) { //след
        element = element->next;
        i++;
    }
    
    i = 0;
    for (int i = 0; i < n-1; i++) {
        tmp = tmp->next;
        i++;
    }
    
    tmp->next = element->next;
    printf("Елемент видалено!\n\n");
}

void output_file_element (Basic* head, FILE *out_info) {
#ifdef DEBUG
    printf("\n%s %s\nФункція: %s\n", __DATE__, __TIME__, __PRETTY_FUNCTION__);
#endif
    int j = 0;
    while (head != NULL) {
        fprintf(out_info, "Птах № %d\n\n", j + 1);
        output_file(head, out_info);
        head = head->next;
        j++;
    }
    printf("Данні було виведено у файл!\n\n");
}

void output_monitor_element (Basic* head) {
#ifdef DEBUG
    printf("\n%s %s\nФункція: %s\n", __DATE__, __TIME__, __PRETTY_FUNCTION__);
#endif
    printf("Виведення на екран елементів структури:\n\n");
    int i = 0;
    while (head != NULL) {
        printf("Птах № %d\n\n", i + 1);
        output_monitor(head);
        head = head->next;
        i++;
    }
}

void sort_by_age (Basic* head) {
#ifdef DEBUG
    printf("\n%s %s\nФункція: %s\n", __DATE__, __TIME__, __PRETTY_FUNCTION__);
#endif
    Basic* element = head;
    int count = 0;
    while (element->next != NULL) {
        count++;
        element = element->next;
    }
    count++;
    element = head;
    for (int i = 0; i < count; i++) {
        while (element->next != NULL) {
            if (element->age > element->next->age) {
                int tmp = element->age;
                element->age = element->next->age;
                element->next->age = tmp;
            }
            element = element->next;
        }
        element = head;
    }
    printf("Дані відсортовано!\n\n");
}

long currentTimeMillis() {
    struct timeval time;
    gettimeofday(&time, NULL);
    return time.tv_sec * 1000 + time.tv_usec / 1000;
}
