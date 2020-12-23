#include "lib.h"

int main() {
    char surnames[] = "CaT,Dog,CaT,Sizui,Mellow,Dog"; /**задане речення*/
    char *p_surnames = surnames;
    int amount_words = 0; /**кількість слів у реченні*/
    
    p_surnames = strtok(surnames, ",");
    amount_words = finding_word_count(p_surnames, amount_words);
    
    int save_amount_words = amount_words; /**збереження початковії кількості слів*/
    p_surnames = surnames;
    char **p_all_surnames = (char**)malloc(amount_words * sizeof(char*)); /**двомірний масив в якому всі слова в реченні записані окремо*/
    
    rewriting_words(p_all_surnames, p_surnames, amount_words);
    
    finding_duplicate_words(amount_words, p_all_surnames);
    
    char **p_result = (char**)malloc(amount_words * sizeof(char*)); /**тимчасови масив, в якому будуть розбиті по рядкам усі унікальні слова*/
    int len_result = 0;
    len_result = record_unique_words(amount_words, len_result, save_amount_words, p_result, p_all_surnames);
    
    char *result = (char*)malloc(len_result * sizeof(char)); /**результуючий масив, в якому буде нове речення, з унакальних слів*/
    write_words_to_resulting(amount_words, result, p_result);
    
    printf("Результат: %c", *result);
    
    for (int i = 0; i < save_amount_words; i++) {
        free(*(p_all_surnames + i));
    }
    for (int i = 0; i < amount_words; i++) {
        free(*(p_result + i));
    }
    free(p_all_surnames);
    free(p_result);
    free(p_surnames);
    free(result);
    return 0;
}
