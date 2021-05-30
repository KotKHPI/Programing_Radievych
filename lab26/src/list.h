/**
 * @file list.h
 * @brief Файл з описом класу списку птиць та його методами
 *
 
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
     * Метод додавання елементу
     *
     * Метод добавляє елемент типу Basic до списку птиці, а саме у кіцень списку
     */
    void AddBird(Basic &other);
    
    /**
     * Метод видалення елементу
     *
     * Метод відаляє елемент за його інкексом зі списку з птицями
     */
    void RemoveBird(int index);
    
    Basic& GetBird (int index) {
        return *birds[index];
    }
    
    /**
     * Метод знаходження відсоток статі
     *
     * Метод знаходе відсоткове відношення усі елементів чоловічої та жіночої статі
     */
    void FindPercentage();
    
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
        delete[] birds;
        }
};

/**
 * Клас список для Layer_Birds
 */
class List_Layer_Birds {
private:
    Layer_Birds** birds;
    int count;
public:
    List_Layer_Birds(): count(0) {
        this->birds = new Layer_Birds*[count];
    }
    List_Layer_Birds(int count1) { //видилення памяти (конструктор)
        count = count1;
        birds = new Layer_Birds*[count];
        for (int i = 0; i < count; i++) {
            birds[i] = new Layer_Birds[sizeof(Layer_Birds)];
        }
    }
    
    Layer_Birds& GetBird (int index) {
        return *birds[index];
    }
    
    int GetCount() const{
        return count;
    }
    
    void Paste(const Layer_Birds &other, int position){
        *birds[position] = other;
    }
    
    /**
     * Метод додавання елементу
     *
     * Метод добавляє елемент типу Layer_Birds до списку птиці, а саме у кіцень списку
     */
    void AddBird(Layer_Birds &other);
    
    /**
     * Метод видалення елементу
     *
     * Метод відаляє елемент за його інкексом зі списку з птицями
     */
    void RemoveLayer_bird(int index);
    
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
    
    virtual ~List_Layer_Birds() {
        delete[] birds;
    }
};

/**
 * Клас список для Exotic_birds
 */
class List_Exotic_birds {
private:
    Exotic_birds** birds;
    int count;
public:
    List_Exotic_birds(): count(0) {
        this->birds = new Exotic_birds*[count];
    }
    List_Exotic_birds(int count1) { //видилення памяти (конструктор)
        count = count1;
        birds = new Exotic_birds*[count];
        for (int i = 0; i < count; i++) {
            birds[i] = new Exotic_birds[sizeof(Exotic_birds)];
        }
    }
    
    int GetCount() const{
        return count;
    }
    
    Exotic_birds& GetBird (int index) {
        return *birds[index];
    }
    
    void Paste(const Exotic_birds &other, int position){
        *birds[position] = other;
    }
    /**
     * Метод додавання елементу
     *
     * Метод добавляє елемент типу Exotic_birds до списку птиці, а саме у кіцень списку
     */
    void AddBird(Exotic_birds &other);
    
    /**
     * Метод видалення елементу
     *
     * Метод відаляє елемент за його інкексом зі списку з птицями
     */
    void RemoveExotic_bird(int index);
    
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
    
    virtual ~List_Exotic_birds() {
        delete[] birds;
    }
};
