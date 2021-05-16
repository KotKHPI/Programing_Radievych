/**
 * @file data.h
 * @brief Файл з описом структури птиць, перерахуванням критеріїв птиць та функцій оперування птахами
 *
 * @author Radievych V.
 * @date 22-apr-2021
 * @version 1.0
 */

#pragma once
#include <cstdio>
#include <cstring>

/**
 * Так або ні
 */
enum Yes_no {
    Так, //0
    Ні //1
};

/**
 * Стать птиці
 */
enum Sex {
    Чоловіча,
    Жіноча
};

/**
 * Структура домівки птаха
 */

class Feature {
private:
    int square; /**< площа домівки, см^2 */
    int height; /**< висота домівки, см */
    int number_of_feeders; /**< кількість годівниць */
    enum Yes_no nest_nest; /**< наявність гнізда */
public:
    Feature() { //данные по умолчанию (конструктор)
        square = 0;
        height = 0;
        number_of_feeders = 0;
        nest_nest = Так;
    }
    
    Feature(int square1, int height1, int number_of_feeders1, Yes_no nest_nest1){
        square = square1;
        height = height1;
        number_of_feeders = number_of_feeders1;
        nest_nest = nest_nest1;
    }
    
    void SetSquare (int x) {
        square = x;
    }
    int GetSquare () const{
        return square;
    }
    
    void SetHeight (int x) {
        height = x;
    }
    int GetHeight() const{
        return height;
    }
    
    void SetNumber_of_feeders (int x) {
        number_of_feeders = x;
    }
    int GetNumber_of_feeders () const {
        return number_of_feeders;
    }
    
    void SetNest_nest (Yes_no x) {
        nest_nest = x;
    }
    Yes_no GetNest_nest() const {
        return nest_nest;
    }
};

class Basic {
private:
    enum Yes_no label; /**< чи окольцьована птаха */
    char name[15]; /**< назва виду*/
    int age; /**< вік патаха, місяців*/
    Feature home; /**< структура домівки птаха (@link  Feature) */
    enum Sex sex; /**< стать птаха */
public:
    Basic() {
        label = Так;
        strcpy(name, "Птиця");
        age = 0;
        sex = Чоловіча;
        
    }
    
    Basic(Yes_no label1, char name1[], int age1, Feature home1, Sex sex1) {
        label = label1;
        strcpy(name, name1);
        age = age1;
        home = home1;
        sex = sex1;
    }
    
    void SetLabel (Yes_no x){
        label = x;
    }
    Yes_no GetLabel() const{
        return label;
    }
    
    void SetName (char n[15]) {
        strcpy(name, n);
    }
    void printName() const;
    
    void SetSex (Sex x){
        sex = x;
    }
    Sex GetSex() const{
        return sex;
    }
};

class Ab {
    int a;
    int b;
public:
    Ab(): a(0), b(0) {}
    
};