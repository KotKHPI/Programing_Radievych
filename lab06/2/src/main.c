#define A 100 // початок діапазону простих чисел
#define Z 200 // кінець діапазону заданих чисел
#define N 50 // розмір масиву з простими числами
int main() {
    int result[N] = {0}; // задання та очистка масиву
    int check = 1; // коефіцієнт перевірки
    
    for (int a = A, w = 0; a < Z; a++) { // запуск циклу для заповнення масиву з простими числами
        for (int i = 2, b = 0; i < a; i++) { //запуск циклу для перевірки простого числа
            b = a % i; //запускаємо перевірна на просто число
            if (b == 0) {
                check = -1; // якщо хоча б одно число ділиться націло, то вихід з цикулу та перехід до перевірки наступного числа в заданому діапазоні
                break;
            } else {
                check = 1; // якщо check = 1, то число а є простим
            }
        }
                if (check == 1) {
                    result [w] = a; // при виконанні умови, що check = 1, відповідному елементу масиву присвоюємо значення а
                    w++; // перехід до наступного елемента масиву
                }
    }
    return 0;
}
