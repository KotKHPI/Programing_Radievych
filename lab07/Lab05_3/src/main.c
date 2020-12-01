#include <stdlib.h>
#include <time.h>
int cycle_for (int num);
int cycle_while (int num);
int cycle_do_while (int num);
int comparison (int a, b, c);

int main() {
 srand(time(NULL));
 int num = rand() % 899999 + 100000; // випадкове число ділемо з остачою на задане число та додаємо певне значення, сміщуючи діапазон правору відповідно системи координат, тим самим задаючи діапазон випадкого числа від 100 000 до 999 999
 int result_for = cycle_for(num); //якщо результат -1, то білет не щасливий, а якщо 1 - то щасливий
 int result_while = cycle_while(num); //якщо результат -1, то білет не щасливий, а якщо 1 - то щасливий
 int result_do_while = cycle_do_while(num); //якщо результат -1, то білет не щасливий, а якщо 1 - то щасливий
    int result_comparison = comparison(result_for, result_while, result_do_while); //якщо результат -1, то значення цинклів не збігаються , а якщо 1 - значення цинклів не збігаються

return 0;
}

int cycle_for (int num) {
    int f1 = num / 1000; //виділяємо просто першу половину числа num
    int f2 = num % 1000; //виділяємо просто другу половину числа num
    int half1 = 0; //сума першої половини
    int half2 = 0; //сума другої пловини
    int check = 0;
    for  (int i = 10, j = 1; i <= 1000; i *=10, j *=10) {
        half1 += f1 % i / j; //виділяємо суму першої половини числа
    }
    for (int i = 10, j = 1; i <= 1000; i *=10, j *=10) {
            half2 += f2 % i / j; //виділяємо суму другої половини числа
    }
    if (half1 == half2) {
        check = 1; //білет щасливий
     } else {
        check = -1; //білет на щасливий
    }
    
    return check;
}

int cycle_while (int num) {
    int f1 = num / 1000; //виділяємо просто першу половину числа num
    int f2 = num % 1000; //виділяємо просто другу половину числа num
    int half1 = 0;
    int half2 = 0;
    int i = 10;
    int j = 1;
    int check = 0;
    while (i <= 1000) {
        half1 += f1 % i / j;
        i *=10;
        j *= 10;
    }

    i = 10;
    j = 1;

     while ( i <= 1000) {
        half2 += f2 % i / j;
        i *= 10;
        j *= 10;
    }
    if (half1 == half2) {
        check = 1; //білет щасливий
     } else {
        check = -1; //білет на щасливий
    }
    return check;
}

int cycle_do_while (int num) {
    int f1 = num / 1000; //виділяємо просто першу половину числа num
    int f2 = num % 1000; //виділяємо просто другу половину числа num
    int half1 = 0;
    int half2 = 0;
    int i = 10;
    int j = 1;
    int check = 0;
    do {
        half1 += f1 % i / j;
        i *= 10;
        j *= 10;
    } while (i <= 1000);

    i = 10;
    j = 1;
    do {
            half2 += f2 % i / j;
            i *= 10;
            j *= 10;
    } while (i <= 1000);

    if (half1 == half2) {
            check = 1; //білет щасливий
     } else {
            check = -1; //білет на щасливий
    }
    return check;;
}

int comparison (int a, b, c) {
    int result = 0;
    if (a == b == c) {
        result = 1;
    } else {
        result = -1;
    }
    
    return result;
}
