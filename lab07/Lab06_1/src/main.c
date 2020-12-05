#include <stdlib.h>
#include <time.h>

int size_word (char word[], int word_length);
void filling (char line_result[], char word[], int word_length, char zap, int l); //функція в яку потрібно який масив буде із словом, розмір слова, чим заповнюватиметься масив зі словом, чим централизувати, розмір масиву із словом

int main() {
    
    int l = rand() % 20 + 10; // розмір масиву, визначений псевдовипадковім числом
    char line_result[l];
    char zap = '_'; //заповнювач
    char word[] = "KOT"; //задане слово
    
    int word_length = size_word(word, word_length); //розмір заданого слова
    
    filling(line_result, word, word_length, zap, l); //масив в якому будет слово
    
    line_result[l-1] = '\0'; //видяємо кінець рядка в масиві
    
    return 0;
}
int size_word (char word[], int word_length) {
    for (int i = 0; ; i++) {
        if (word[i] == '\0'){ //знахожемо розмір заданого слова
            break;
        } else {
            word_length++;
        }
    }
    return word_length;
}
void filling (char line_result[], char word[], int word_length, char zap, int l) {
    
    int a = l - word_length - 1; //виділяємо скільки потрібно заповнювачив з урахуванням слова
    a /=2; //скільки потрібно запомнювачив з обох сторін слова
    for (int i = 0; i <= a; i++) {
        line_result[i] = zap; //заповнюємо зоповнювачем місце перед словом
    }
    for (int i = 0, b = a; i <= a + word_length; i++) {
        b++;
        line_result[b] = word[i]; // зоповнюємо масив словом, яке вже стоїть в середені
        }
    for (int i = a + word_length + 1; i <= l - 1; i++) {
        line_result[i] = zap; //заповнюємо зоповнювачем місце після слова
    }
 
}
