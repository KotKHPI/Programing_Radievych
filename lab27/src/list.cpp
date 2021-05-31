/**
 * @file list.cpp
 * @brief Файл з реалізацією методів для list.h
 *
 * @author Radievych V.
 * @date 20-may-2021
 * @version 1.0
 */
#include "list.h"

void List::AddBird(Basic* other) {
    Basic** tmp = new Basic*[this->count+1];
    for (int i = 0; i < count; i++) {
        tmp[i] = birds[i];
    }

    tmp[count] = other;
    delete[] birds;
    this->birds = tmp;
    this->count++;
}

void List::RemoveBird(int index) {
    if (index > 0) {
        Basic** tmp = new Basic*[this->count - 1];
        for (int i = 0; i < count - 1; i++) {
            tmp[i] = birds[i];
        }

        int a = 0;
        for (a = 0; a < index; a++) {
            Basic* ab(birds[a]);
            tmp[a] = ab;
        }
        a++;
        while(a < count) {
            Basic* ab(birds[a]);
            tmp[a] = ab;
            a++;
        }
        delete[] this->birds;
        this->birds = tmp;
        this->count--;

    } else {

        Basic** tmp = new Basic*[this->count - 1];
        for (int i = 0; i < count - 1; i++) {
            tmp[i] = birds[i];
        }
        for (int i = 1, a = 0; i < count; i++, a++){
            Basic* ab(birds[i]);
            tmp[a] = ab;
        }
        delete[] this->birds;
        this->birds = tmp;
        this->count--;
    }
}

int List::FindPercentageMan() {
    int man = 0;
    int woman = 0;
    for (int i = 0; i < count; i++) {
        Basic& ab(GetBird(i));
        if (ab.GetSex() == 0) {
            man++;
        } else {
            woman++;
        }
    }
    int sum = man + woman;
    int fman = (float)man/sum * 100;
    std::cout << "Відсоток птахів чоловічої статі : " << fman << "%\n";
    int fwoman = (float)woman/sum * 100;
    std::cout << "Відсоток птахів жіночої статі : "<< fwoman << "%\n";
    return fman;
}

int List::FindPercentageWoman() {
    int man = 0;
    int woman = 0;
    for (int i = 0; i < count; i++) {
        Basic& ab(GetBird(i));
        if (ab.GetSex() == 0) {
            man++;
        } else {
            woman++;
        }
    }
    int sum = man + woman;
    int fman = (float)man/sum * 100;
    std::cout << "Відсоток птахів чоловічої статі : " << fman << "%\n";
    int fwoman = (float)woman/sum * 100;
    std::cout << "Відсоток птахів жіночої статі : "<< fwoman << "%\n";
    return fwoman;
}

void List::readFromFile(std::string fileName) {
    std::string element;
    std::ifstream file_r;
    file_r.open(fileName);
    if (!file_r.is_open()) {
        std::cout << "Помилка відкриття файлу" << std::endl;
    } else {
        std::cout << "Файл відкрито!" << std::endl;
    }
    while(!file_r.eof()) {
        std::getline(file_r, element);
        int b = element.length();
        int a = element[b-1];
        Basic *tmp;
        if (a == 48) {
            tmp = new Layer_Birds(element);
        } else {
            tmp = new Exotic_birds(element);
        }

        this->AddBird(tmp);
    }
    if (element == ""){
        std::cout << "Файл пустий!" << std::endl;
    }

    file_r.close();
}

void List::writeToFile(std::string fileName) {
    std::ofstream file_w;
    file_w.open(fileName, std::ofstream::app);
    if (!file_w.is_open()) {
        std::cout << "Помилка відкриття файлу" << std::endl;
    } else {
        std::cout << "Файл відкрито!" << std::endl;
    }
    for (int i = 0; i < count; i++) {
        Basic& ab(GetBird(i));
        file_w << "Птах № " << i + 1 << "\n";
        ab.printOne(file_w);
    }
    file_w.close();
}
//-------------------
