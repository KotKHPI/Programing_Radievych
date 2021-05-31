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
    
    
//    void Paste(Basic* other, int position){
//        delete birds[position];
//        birds[position] = other;
//    }
    
    int GetCount() const{
        return count;
    }
    
    /**
     * Метод додавання елементу
     *
     * Метод добавляє елемент типу Basic до списку птиці, а саме у кіцень списку
     */
    void AddBird(Basic* other);
    
    /**
     * Метод видалення елементу
     *
     * Метод відаляє елемент за його інкексом зі списку з птицями
     */
    void RemoveBird(int index);
    
    /**
     * Метод отрімання елементу масиву за індексом
     */
    Basic& GetBird (int index) {
        return *birds[index];
    }
    
    /**
     * Метод знаходження відсоток статі
     *
     * Метод знаходе відсоткове відношення усі елементів чоловічої та жіночої статі та повертає відсоток чоловічої статі
     */
    int FindPercentageMan();
    
    /**
     * Метод знаходження відсоток статі
     *
     * Метод знаходе відсоткове відношення усі елементів чоловічої та жіночої статі та повертає відсоток жіночої статі
     */
    int FindPercentageWoman();
    
    /**
     * Метод читання з файлу
     *
     * Метод читає дані для класу Basic з файлу, шлях якого повинен міститися в строці
     */
    void readFromFile(std::string fileName);
    
    /**
     * Метод запису в файл
     *
     * Метод записує дані про всі елементи класу List до файлу, шлях якого повинен міститися в строці
     */
    void writeToFile(std::string fileName);
    
    virtual ~List() {
        for (int i = 0; i < count; i++) {
            delete birds[i];
        }
        delete[] birds;
        }
};
