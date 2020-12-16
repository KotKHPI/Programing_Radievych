#include "lib.h"

int main() {
    srand(time(NULL));
    
    int *pMatrix = (int*)malloc((N * N) * sizeof(int)); //виділяємо місце для матриці
    
    fillingArr(pMatrix);
    
    int *pMainDiagonal = (int*)malloc(N * sizeof(int)); //виділяємо місце для головної діагоналі
    
    MainDiagonal(pMainDiagonal, pMatrix);
    
    sort(pMainDiagonal);
    
    free(pMatrix);
    //free(pMainDiagonal);
    
    return 0;
}
