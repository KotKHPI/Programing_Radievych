/**
 * @file list.cpp
 * @brief Файл з реалізацією методів для list.h
 *
 * @author Radievych V.
 * @date 20-may-2021
 * @version 1.0
 */
#include "list.h"

void List::AddBird(Basic &other) {
    Basic** tmp = new Basic*[this->count+1];
    for (int i = 0; i < count + 1; i++) {
        tmp[i] = new Basic[sizeof(Basic)];
    }

    for (int i = 0; i < count; i++) {
        Basic ab(*birds[i]);
        *tmp[i] = ab;
    }

    tmp[count] = &other;
    delete[] this->birds;
    this->birds = tmp;
    this->count++;
}

void List::RemoveBird(int index) {
    if (index > 0) {
        Basic** tmp = new Basic*[this->count - 1];
        for (int i = 0; i < count - 1; i++) {
            tmp[i] = new Basic[sizeof(Basic)];
        }
    
        int a = 0;
        for (a = 0; a < index; a++) {
            Basic ab(*birds[a]);
            *tmp[a] = ab;
        }
        a++;
        while(a < count) {
            Basic ab(*birds[a]);
            *tmp[a] = ab;
            a++;
        }
        delete[] this->birds;
        this->birds = tmp;
        this->count--;
        
    } else {
        
        Basic** tmp = new Basic*[this->count - 1];
        for (int i = 0; i < count - 1; i++) {
            tmp[i] = new Basic[sizeof(Basic)];
        }
        for (int i = 1, a = 0; i < count; i++, a++){
            Basic ab(*birds[i]);
            *tmp[a] = ab;
        }
        delete[] this->birds;
        this->birds = tmp;
        this->count--;
    }
}

void List::ShowAll() {
    for (int i = 0; i < count; i++) {
        Basic ab(GetBird(i));
        printf("Птах № %d\n", i + 1);
        ab.printAll();
    }
}

void List::FindPercentage() {
    int man = 0;
    int woman = 0;
    for (int i = 0; i < count; i++) {
        Basic ab(GetBird(i));
        if (ab.GetSex() == 0) {
            man++;
        } else {
            woman++;
        }
    }
    int sum = man + woman;
    float fman = (float)man/sum * 100;
    printf("Відсоток птахів чоловічої статі : %f \n", fman);
    float fwoman = (float)woman/sum * 100;
    printf("Відсоток птахів жіночої статі : %f \n", fwoman);
}
