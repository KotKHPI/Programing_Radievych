#define N 115 //написати число, яке ви хочете перевести на слова
#define K 50 // розмір масиву
int main() {
    char one[3] = {'o','n', 'e'};
    char two[3] = {'t', 'w', 'o'};
    char three[5] = {'t', 'h', 'r', 'e', 'e'};
    char four[4] = {'f', 'o', 'u', 'r'};
    char five[4] = {'f', 'i', 'v', 'e'};
    char six[3] = {'s', 'i', 'x'};
    char seven[5] = {'s', 'e', 'v', 'e', 'n'};
    char eight[5] = {'e', 'i', 'g', 'h', 't'};
    char nine[4] = {'n', 'i', 'n' , 'e'};
    char zero[4] = {'z', 'e', 'r', 'o'};
    char decade[8] = {' ', 'd', 'e', 'c', 'a', 'd', 'e', ' '};
    char hundred[9] = {' ', 'h' , 'u', 'n', 'd', 'r', 'e', 'd', ' '};
    char thousand[10] = {' ', 't', 'h', 'o', 'u', 's', 'a', 'n', 'd', ' '};
    int a = 0; //коефициент 
    char result[K];
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;
    int n4 = 0;
    
    if (N > 999) {
    n1 = N / 1000; // виражаємо перше число з чотирьох
    n2 = N % 1000 / 100; // виражаємо друге число з чотирьох
    n3 = N / 10 % 10; // виражаємо третє число з чотирьох
    n4 = N % 1000 % 100 % 10; // виражаємо четверте число з чотирьох
    } else {
         n2 = N / 100; // виражаємо друге число з чотирьох
         n3 = N % 100 / 10; // виражаємо третє число з чотирьох
         n4 = N % 100 % 10; // виражаємо четверте число з чотирьох
    }
    
    if (n1 > 0) { // перевірка першого числа, щоб воно не дорівнювало 0
    switch (n1) { // запсук сканування першого числа
        case 1 :
            for (int i = 0; i < 3; i++) {
                result[a] = one[i];
            a++;
        }
            break;
        case 2 :
            for (int i = 0; i < 3; i++) {
                result[a] = two[i];
            a++;
        }
            break;
        case 3 :
            for (int i = 0; i < 5; i++) {
                result[a] = three[i];
            a++;
        }
            break;
        case 4 :
            for (int i = 0; i < 4; i++) {
                result[a] = four[i];
            a++;
        }
            break;
        case 5 :
            for (int i = 0; i < 4; i++) {
                result[a] = five[i];
            a++;
        }
            break;
        case 6 :
            for (int i = 0; i < 3; i++) {
                result[a] = six[i];
            a++;
        }
            break;
        case 7 :
            for (int i = 0; i < 5; i++) {
                result[a] = seven[i];
            a++;
        }
            break;
        case 8 :
            for (int i = 0; i < 5; i++) {
                result[a] = eight[i];
            a++;
        }
            break;
        case 9 :
            for (int i = 0; i < 4; i++) {
                result[a] = nine[i];
            a++;
        }
            break;
    }
        for (int i = 0; i < 10; i++) { // цикл для заповнення result словом "тисяча"
            result [a] = thousand[i];
            a++;
        }
         // відстань між словом "тясяча" и другим числом, якщо воно є
     }
    if (n2 > 0) { // перевірка дургого числа, щоб воно не дорівнювало 0
    switch (n2) { // сканування другого числа
        case 1 :
            for (int i = 0; i < 3; i++) {
                result[a] = one[i];
            a++;
        }
            break;
        case 2 :
            for (int i = 0; i < 3; i++) {
                result[a] = two[i];
            a++;
        }
            break;
        case 3 :
            for (int i = 0; i < 5; i++) {
                result[a] = three[i];
            a++;
        }
            break;
        case 4 :
            for (int i = 0; i < 4; i++) {
                result[a] = four[i];
            a++;
        }
            break;
        case 5 :
            for (int i = 0; i < 4; i++) {
                result[a] = five[i];
            a++;
        }
            break;
        case 6 :
            for (int i = 0; i < 3; i++) {
                result[a] = six[i];
            a++;
        }
            break;
        case 7 :
            for (int i = 0; i < 5; i++) {
                result[a] = seven[i];
            a++;
        }
            break;
        case 8 :
            for (int i = 0; i < 5; i++) {
                result[a] = eight[i];
            a++;
        }
            break;
        case 9 :
            for (int i = 0; i < 4; i++) {
                result[a] = nine[i];
            a++;
        }
            break;
    }
    
        
        for (int i = 0; i < 9; i++) {
            result [a] = hundred[i];
            a++;
        }
    }
    if (n3 > 0) { // перевірка третього числа, щоб воно не дорівнювало 0
    switch (n3) { // сканування тертього числа
        case 1 :
            for (int i = 0; i < 3; i++) {
                result[a] = one[i];
            a++;
        }
            break;
        case 2 :
            for (int i = 0; i < 3; i++) {
                result[a] = two[i];
            a++;
        }
            break;
        case 3 :
            for (int i = 0; i < 5; i++) {
                result[a] = three[i];
            a++;
        }
            break;
        case 4 :
            for (int i = 0; i < 4; i++) {
                result[a] = four[i];
            a++;
        }
            break;
        case 5 :
            for (int i = 0; i < 4; i++) {
                result[a] = five[i];
            a++;
        }
            break;
        case 6 :
            for (int i = 0; i < 3; i++) {
                result[a] = six[i];
            a++;
        }
            break;
        case 7 :
            for (int i = 0; i < 5; i++) {
                result[a] = seven[i];
            a++;
        }
            break;
        case 8 :
            for (int i = 0; i < 5; i++) {
                result[a] = eight[i];
            a++;
        }
            break;
        case 9 :
            for (int i = 0; i < 4; i++) {
                result[a] = nine[i];
            a++;
        }
            break;
    }
        for (int i = 0; i < 8; i++) {
            result [a] = decade[i];
            a++;
        }
    }
    if (n4 > 0) { // перевірка четвертого числа, щоб воно не дорівнювало 0
    switch (n4) { // сканування четвертого числа
        case 1 :
            for (int i = 0; i < 3; i++) {
                result[a] = one[i];
            a++;
        }
            break;
        case 2 :
            for (int i = 0; i < 3; i++) {
                result[a] = two[i];
            a++;
        }
            break;
        case 3 :
            for (int i = 0; i < 5; i++) {
                result[a] = three[i];
            a++;
        }
            break;
        case 4 :
            for (int i = 0; i < 4; i++) {
                result[a] = four[i];
            a++;
        }
            break;
        case 5 :
            for (int i = 0; i < 4; i++) {
                result[a] = five[i];
            a++;
        }
            break;
        case 6 :
            for (int i = 0; i < 3; i++) {
                result[a] = six[i];
            a++;
        }
            break;
        case 7 :
            for (int i = 0; i < 5; i++) {
                result[a] = seven[i];
            a++;
        }
            break;
        case 8 :
            for (int i = 0; i < 5; i++) {
                result[a] = eight[i];
            a++;
        }
            break;
        case 9 :
            for (int i = 0; i < 4; i++) {
                result[a] = nine[i];
            a++;
        }
            break;
        }
    }
    if(N == 0) { // якщо число N буде дорівнювати 0
        for (int i = 0; i < 4; i++) {
        result[a] = zero[i];
            a++;
        }
    }
    result [a] = '\0';
    return 0;
}
