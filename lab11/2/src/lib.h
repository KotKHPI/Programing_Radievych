#pragma once
#include <stdlib.h>
#include <time.h>

#define N 10

void fillArr(int *pNumber, int *pArr);
void cleaningArr(int *pNumber, int *pArr); //видяємо з масиву pNumber додотні числа
void find_size_start(int *pArr, int *r_sum, int *r_size, int *r_start);
void fillResult(int *pResult, int *pArr, int *r_size, int *r_start);
