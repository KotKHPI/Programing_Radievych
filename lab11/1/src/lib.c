#include "lib.h"

void fillinArr(int *pArr) {
    for (int i = 0; i < N; i++) {
        *(pArr + i) = rand() % 10 + 1; //задання масиву випадковими числами від 1 до 10
    }
}

int size(int *pArr){ //функція визначення розмиру результатного масиву
    int size = 0;
    for (int i = 0; i < N; i++){
        for (int j = i; j < N; j++) {
            if (*(pArr + i) == *(pArr + j + 1) && *(pArr + i - 1) != *(pArr + j)) { // якщо хоча б один раз число повторюється, то size + 1
                size++;
                break;
        }
    }
}
    return size;
}

void sortArr(int *pArr) { //сортування масиву методом "бульбашки"
    int temp;
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (*(pArr + i) > *(pArr + j)) {
                temp = *(pArr + i);
                *(pArr + i) = *(pArr + j);
                *(pArr + j) = temp;
            }
        }
    }
}

void comparison(int *pArr, int *pResult) { // функція порівняння чисел, тобто знаходження однокових чисел в заданому масиві
    int arr[3] = {0}; // коефіциент
    int temp = 1; // коефіціент
    for (int i = 0; i < N; i++){ // i - число, яке перевіряємо
        arr[1] = 0;
        arr[2] = 0;
        for (int j = i; j < N; j++) { // j - перебір чисел в масиві
            if (*(pArr + i) == *(pArr + j) && *(pArr + i - 1) != *(pArr + j)) { // якщо є однакові числа, то +1
                arr[1] = i;
                arr[2] = arr[2] + 1;
            }
        }
        if(arr[2] > 1) { // якщо число повторюється хоча б 2 рази, то записуємо його в результатний масив
            int a = 2 * temp - 1; // непарне місце в масиві результату
            int b = 2 * temp; // парне місце в масиві резутата
            *(pResult + a) = *(pArr +arr[1]);
            *(pResult + b) = arr[2];
            temp++;
    }
    }
}
