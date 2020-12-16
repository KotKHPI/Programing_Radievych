#include "lib.h"

int main() {
    srand(time(NULL));
    
    int *pNumber = (int*)malloc(N * sizeof(int)); //задаємо розмір масиву
    int *pArr = (int*)malloc(N * sizeof(int)); //масив з додатніми числами
    
    fillArr(pNumber, pArr);
    
    *(pNumber + N) = 1; //присвоюємо кінець масиву поза заданого розміра
   
    cleaningArr(pNumber, pArr);
    
    int pr_sum = 0;
    int pr_size = 0;
    int *r_size = &pr_size;
    int *r_sum = &pr_sum;
    int start = 0;
    int *r_start = &start;
    
    find_size_start(pArr, r_sum, r_size, r_start);
    
    int *pResult = (int*)malloc(*r_size * sizeof(int));
    
    fillResult(pResult, pArr, r_size, r_start);
    
    return 0;
}

