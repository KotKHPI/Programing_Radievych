/**
 * @file list.h
 * @brief Файл з описом класу списку птиць та його методами
 *
 * @author Radievych V.
 * @date 20-may-2021
 * @version 1.0
 */

#pragma once
#include "data.h"
#include <cerrno>
#include <cstdlib>
#include <fstream>

/**
 * Клас списку птиць та його методи
 */
class List {
private:
    Basic** birds;
    int count;
public:
    List(): count(0) {
        this->birds = new Basic*[count];
    }
    
    List(int count1) { //видилення памяти (конструктор)
        count = count1;
        birds = new Basic*[count];
        for (int i = 0; i < count; i++) {
            birds[i] = new Basic[sizeof(Basic)];
        }
    }
    
    void Paste(const Basic &other, int position){
        *birds[position] = other;
    }
    
    int GetCount() const{
        return count;
    }
    
    /**
     * Функція додавання елементу
     *
     * Функія добавляє елемент типу Basic до списку птиці, а саме у кіцень списку
     */
    void AddBird(Basic &other);
    
    /**
     * Функція видалення елементу
     *
     * Функція відаляє елемент за його інкексом зі списку з птицями
     */
    void RemoveBird(int index);
    
    Basic& GetBird (int index) {
        return *birds[index];
    }
    
    /**
     * Функція знаходження відсоток статі
     *
     * Функція знаходе відсоткове відношення усі елементів чоловічої та жіночої статі
     */
    void FindPercentage();
    
    void readFromFile(std::string fileName);
    
    void writeToFile(std::string fileName);
    
    virtual ~List() {
        delete[] birds;
        }
};
