#include <stdlib.h>
#include <time.h>

int checkSymbols(char text[], int a); //
int wordCount(char text[], int result, int a);
int main() {
    srand(time(NULL));
    
    int result = 1; // у заданому тексті може бути минимум одне слово
    int a = 0; // коефіциіет
    char text[] = "I am cat"; // у подвійні скобки ("") потрібно внести задани текст
   
    a = checkSymbols(text, a);
    
    result = wordCount(text, result, a);
    
    return 0;
}
int checkSymbols(char text[], int a) {
    
    for (int i = 0;  ; i++) { // запуск перевірки: скільки символів в тексті
        if (text[i] == '\0') {
            break;
        }
        a++;
    }
    return a;
}
int wordCount(char text[], int result, int a) {
    for (int i = 0; i < a; i ++) {
    if(text [i] == ' ' && text [i + 1] != ' ' ) { // якщо після пробілу в тексті починається слово, то result +=  1. Якщо у тексти після пробілу йде ще одни прибіл - нічого
        result++;
        }
    }
    return result;
}
