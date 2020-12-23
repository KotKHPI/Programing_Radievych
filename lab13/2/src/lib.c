#include "lib.h"

int finding_word_count(char *p_surnames, int amount_words) {
    while (p_surnames != NULL) {
        p_surnames = strtok(NULL, ",");
        amount_words++;
    }
    return amount_words;
}

void rewriting_words (char **p_all_surnames, char *p_surnames, int amount_words){
    int len = 0;
    for (int i = 0; i < amount_words; i++) {
        char *temp = strtok(p_surnames + len, ",");
        len += strlen(temp) + 1;
        *(p_all_surnames + i) = (char*)malloc(len * sizeof(char));
        strcpy(*(p_all_surnames + i), temp);
    }
}

void finding_duplicate_words(int amount_words, char **p_all_surnames) {
    for( int i = 0; i <= amount_words ; i++){
        for(int j = i + 1; j <= amount_words ; j++){
            if(strcmp(*(p_all_surnames + i),  *(p_all_surnames + j)) == 0) {
                amount_words -= 1;
                int len_temp = 0;
                len_temp = strlen(*(p_all_surnames + j)) + 1;
                for(int q = 0; q < len_temp; q++){
                    *(*(p_all_surnames + j) + q) = '1';
                }
                amount_words -= 1;
            }
        }
    }
}

int record_unique_words(int amount_words, int len_result, int save_amount_words, char **p_result, char **p_all_surnames){
    int temp = 0;
    for(int i = 0; i < amount_words; i++){
        for(int j = temp; j < save_amount_words; j++){
            if(*(*(p_all_surnames + j) + 0) != '1') {
                int len_temp = 0;
                len_temp = strlen(*(p_all_surnames + j)) + 1;
                *(p_result + i) = (char*)malloc(len_temp * sizeof(char));
                strcat(*(p_result + i), *(p_all_surnames + j));
                temp++;
                break;
            } else {
                temp++;
            }
        }
        len_result += strlen(*(p_result + i));
    }
    len_result += amount_words;
    return len_result;
}

void write_words_to_resulting(int amount_words, char *result, char **p_result){
    int len_r = 0;
    for( int i = 0; i < amount_words; i++) {
        strcat((result + len_r), *(p_result + i));
        len_r += strlen(*(p_result + i));
        if (i != amount_words - 1){
        *(result + len_r) = ',';
        }
        len_r++;
    }
}
