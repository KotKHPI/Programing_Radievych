#include <stdlib.h>
#include <time.h>

int unique_number (int a);

int main() {
    srand(time(NULL));
    
    int num = rand() % 20;// випадкове число ділемо з остачою на задане число, тим самим задаючи діапазон випадкого числа від 0 до 20
    
    int result = unique_number(num); //Якщо результат 1, то числа досконале, якщо 0 - то число не досконале

    return 0;
}

int unique_number (int a) {
    int sum = 1; /* змінній присвоюємо значення 1, бо якщо два однакових числа поділити,
то в результаті ми отримаємо 1. Таким чином, ми використовуємо нерівнисть i < N, щоб позбутися дії циклу ділення двох однакових чисел. Бо дільник буде дорівнювати N */
    int check = 0;
    
    for (int i = 2; i <= a; i++) {
        if (a % i == 0) {
         sum += i; // знаходимо суму всіх дільників числа N
        }
         if (sum == a) {
          check = 1; /* відображення результату: чи є число N досконалим? Якщо результат 1, то числа досконале,
    якщо 0 - то число не досконале*/
         }
    }
    return check;
}
