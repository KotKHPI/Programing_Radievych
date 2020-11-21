#define L 15 //длинна рядка

int main() {
    char line_result[L]; //масив в якому будет слово
    char zap = '_'; //заповнювач
    char word[] = "KOT"; //задане слово
    int word_length = 0; //розмір заданого слова
    int a = 0; //количество половины заполнителя в line_result
    for (int i = 0; ; i++) {
        if (word[i] == '\0'){ //знахожемо розмір заданого слова
            break;
        } else {
            word_length++;
        }
    }
    
    a = L - word_length - 1; //виділяємо скільки потрібно заповнювачив з урахуванням слова
    
    a /=2; //скільки потрібно запомнювачив з обох сторін слова
    
    for (int i = 0; i <= a; i++) {
        line_result[i] = zap; //заповнюємо зоповнювачем місце перед словом
    }
    for (int i = 0, b = a; i <= a + word_length; i++) {
        b++;
        line_result[b] = word[i]; // зоповнюємо масив словом, яке вже стоїть в середені
        }
    for (int i = a + word_length + 1; i <= L - 1; i++) {
        line_result[i] = zap; //заповнюємо зоповнювачем місце після слова
    }
    line_result[L-1] = '\0'; //видяємо кінець рядка в масиві
    
    return 0;
}
