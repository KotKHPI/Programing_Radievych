/**
 * @file lib.c
 * @brief Файл з реалізацією функцій
 *
 * @author Radievych V.
 * @date 22-dec-2020
 * @version 1.0
 */
#include "lib.h"

int count_text_length(char *arr) {
    int count = 0;
    int i = 0;
    while (*(arr + i) != NULL) {
        count++;
        i++;
    }
    return count;
}

bool checker(char *arr, int currentIndex, char value) {
    bool flag = false;
    for (int i = 0; i < currentIndex; i++) {
        if (*(arr + i) == value) {
            flag = true;
        }
    }
    return flag;
}

int count_of_unique_elements(char *arr, int size) {
    int count = 0;
    int i = 0;
    int k = 0;
    char* arrTemp = (char*)malloc(size * sizeof(char));
    strncpy(arrTemp, arr, 1);

    for (i = 0; i < size + 1; i++) {
        char value = *(arr + i);
        bool check = checker(arrTemp, k, value);
        for (int j = i + 1; j < size + 1; j++) {
            if (check == false) {
                *(arrTemp + k) = value;
                count++;
                k++;
                break;
            }
        }
    }
    free(arrTemp);
    return count;
}

void fill_zeros(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        *(arr + i) = 0;
    }
}

void get_symbols(char *strIn, int sizeIn, char *symbols) {
    int i;
    int k = 0;
    for (i = 0; i < sizeIn + 1; i++) {
        char value = *(strIn + i);
        bool check = checker(symbols, k, value);
        for (int j = i + 1; j <= sizeIn; j++) {
            if (check == false) {
                *(symbols + k) = value;
                k++;
                break;
            }
        }
    }
    *(symbols + k) = '\0';
}

void get_symbols_counts(char *strIn, int sizeIn, char *elements, int *elCounts, int sizeOut) {

    for (int i = 0; i < sizeOut; i++) {
        for (int j = 0; j < sizeIn; j++) {
            if (*(elements + i) == *(strIn + j)) {
                *(elCounts + i) += 1;
            }
        }
    }
}

void get_symbols_frequencies(int *elCounts, float *elFreaqs, int size, int totalCount) {
    for (int i = 0; i < size; i++) {
        int current = *(elCounts + i);
        *(elFreaqs + i) = (float)current / totalCount;
    }
}
