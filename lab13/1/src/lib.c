#include "lib.h"

int finding_word_count (char *p_sentence, int amount_words) {
    while (p_sentence != NULL) {
        p_sentence = strtok(NULL, " ");
        amount_words++;
    }
    return amount_words;
}

int packing_words (int amount_words, int len, char **p_words, char *p_sentence) {
    for (int i = 0; i < amount_words; i++) {
        char *temp = strtok(p_sentence + len, " ");
        len += strlen(temp) + 1;
        *(p_words + i) = (char*)malloc(len * sizeof(char));
        strcpy(*(p_words + i), temp);
    }
    return len;
}

void sort_words (int amount_words, char **p_words) {
    for(int i = 0; i < amount_words; i++) {
            for(int j = 0; j < amount_words - 1; j++) {
                if (strcmp(*(p_words + j), *(p_words + j + 1)) > 0) {
                    char temp[10];
                    strcpy(temp, *(p_words + j));
                    strcpy(*(p_words + j), *(p_words + j + 1));
                    strcpy(*(p_words + j + 1), temp);
                }
            }
        }
}
