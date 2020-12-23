#include "lib.h"

int main() {
    char sentence[] = "I am a cat, it is so fanny"; /**задане речення*/
    char *p_sentence = sentence;
    int amount_words = 0; /**кількість слів у реченні*/
    
    p_sentence = strtok(sentence, " ");
    amount_words = finding_word_count(p_sentence, amount_words);
    
    p_sentence = sentence;
    
    int len = 0; /**довжина речення*/
    char **p_words = (char**)malloc(amount_words * sizeof(char*)); /**масив в якому будет результат виконаної прогрмми*/
    len = packing_words(amount_words, len, p_words, p_sentence);
    
    sort_words(amount_words, p_words);
    
    for (int i = 0; i < amount_words; i++) {
        free(*(p_words + i));
    }
    free(p_words);
    free(p_sentence);
    return 0;
}
