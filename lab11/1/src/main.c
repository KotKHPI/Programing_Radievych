#include "lib.h"

int main() {
    srand(time(NULL));
    
    int *pNumber = (int*)malloc(N * sizeof(int)); //виділення пам'яті на N кількість елементів
    
    fillinArr(pNumber);
    
    sortArr(pNumber);
    
    int size1 = size(pNumber);
    size1 = size1 * 2 + 1; //змінна розміру результатного масиву, але враховуємо, що перший елемент результатного масиву пропускаємо
    
    int *pResult = (int*)malloc(size1 * sizeof(int));
    
    comparison(pNumber, pResult);
    
    free(pNumber);
    free(pResult);
    return 0;
}
