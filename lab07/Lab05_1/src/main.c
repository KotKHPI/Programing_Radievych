#include <stdlib.h>
#include <time.h>
int NSD (int a, int b); // прототип функції
int main() {
    srand(time(NULL));
    int a = rand() % 50; // випадкове число ділемо з остачою на задане число, тим самим задаючи діапазон випадкого числа від 0 до 50
    int b = rand() % 40; // випадкове число ділемо з остачою на задане число, тим самим задаючи діапазон випадкого числа від 0 до 40
    
    int result = NSD(a, b); // задаємо будь-які два додатніх числа, НСД яких бамаємо знайти
    
    return 0;
}
int NSD (int a, int b) {
    while (a != b) { // запуск циклу
        if (a > b) { // віднимаємо найменше з двох чисел
        a = a - b;
        } else {
        b = b - a; // віднимаємо найменше з двох чисел
        } /*a - це НСД, яке ми отривали в наслідок поступового віднімання двох чисел,
          до поки вони не стали тотожними (алгоритм Евкліда)*/
    }
    return a;
}