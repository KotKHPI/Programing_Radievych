#include "lib.h"

void fillArr(int *pNumber, int *pArr) {
    for (int i = 0; i < N; i++) {
        *(pNumber + i) = rand() % 11 - 5; //запомнюємо масив випадковими числами від -5 до 5
        *(pArr + i) = 0;
    }
}

void cleaningArr(int *pNumber, int *pArr) {
    for (int i = 0; i < N; i++){
       for(int j = i; j < N; j++){
            if (*(pNumber + i) > 0 && *(pNumber + j + 1) > 0 ) {
                *(pArr + i) = *(pNumber + i);
            }
       }
    }
}

void find_size_start(int *pArr, int *r_sum, int *r_size, int *r_start) {
    int size = 0;
    int sum = 0;
    for (int i = 0; i < N; i++) { //знаходження розміру та максимуму

            for (int j = i; *(pArr +j) != 0 && j < N; j++) {
            sum = sum + *(pArr + j);
            size++;
            }
            if(*r_sum < sum) {
                *r_start = i;
                *r_sum = sum;
                *r_size = size;
                sum = 0;
                size = 0;
            }
            sum = 0;
            size = 0;
    }
}

void fillResult(int *pResult, int *pArr, int *r_size, int *r_start){
    
    for (int i = 0; i < *r_size; i++) {
        *(pResult + i) = *(pArr + *r_start);
        *r_start = *r_start + 1;
        
    }
}
