#include <stdlib.h>
#include <time.h>
int square_number (int a);
int main() {
    srand(time(NULL));
    
    int a = rand() % 64; // випадкове число ділемо з остачою на задане число, тим самим задаючи діапазон випадкого числа від 0 до 64
    int result = square_number(a); //якщо з заданого числа можливо знайти цілий корінь - він буду присвоєний змінній result, а якзо ні - змінна result буде дорівнявати -1
    return 0;
}
int square_number (int a) {
    int mult = 0; // множник
     int root = 0; //корінь

    for (int i = 1; i < a; i ++) {
        mult = i * i; // виделення точного множника з числа N
        if (mult == a) {
         mult = i; // множник числа N
         root = a / mult; // знаходження корня числа N
            break;
        } else {
            root = -1;
        }
    }
    if (a == 1) {
        root = 1;
    }
    return root;
}
