/**
 * @file data.h
 * @brief Файл з описом класу птиць, перерахуванням критеріїв птиць та методами оперування птахами
 *
 * @author Radievych V.
 * @date 20-may-2021
 * @version 1.0
 */

#pragma once
#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

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
 * Клас домівки птаха
 */

class Feature {
private:
    int square; /**< площа домівки, см^2 */
    int height; /**< висота домівки, см */
    int number_of_feeders; /**< кількість годівниць */
    enum Yes_no nest_nest; /**< наявність гнізда */
public:
    Feature(): square(0), height(0), number_of_feeders(0), nest_nest(Так) { } //данные по умолчанию (конструктор)
    
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
    Feature (const Feature &other) { //копирование
        this->square = other.square;
        this->height = other.height;
        this->number_of_feeders = other.number_of_feeders;
        this->nest_nest = other.nest_nest;
    }
    
    virtual ~Feature() { // :/ Bay-bay!
        
    }
};

/**
 * Базовий клас "Птах"
 */
class Basic {
private:
    enum Yes_no label; /**< чи окольцьована птаха */
    char name[15]; /**< назва виду*/
    int age; /**< вік патаха, місяців*/
    Feature home; /**< структура домівки птаха (@link  Feature) */
    enum Sex sex; /**< стать птаха */
public:
    Basic(): label(Так), name("Птиця"), age(0), sex(Чоловіча) { } //конструктор1
    
    Basic(Yes_no label1, char name1[], int age1, Feature home1, Sex sex1) { //конструктор2
        label = label1;
        strcpy(name, name1);
        age = age1;
        home = home1;
        sex = sex1;
    }
    
    Basic (std::string tmp) {
        std::stringstream ss;
        ss << tmp;
        int label1;
        
        ss >> label1;
        if (label1 == 0) {
            this->label = Так;
        } else {
            this->label = Ні;
        }
        
        ss >> this->name;
        ss >> this->age;
        
        int sq = 0;
        ss >> sq;
        this->home.SetSquare(sq);
        
        int h = 0;
        ss >> h;
        this->home.SetHeight(h);
        
        int num = 0;
        ss >> num;
        this->home.SetNumber_of_feeders(num);
        
        int nest = 0;
        ss >> nest;
        if (nest == 0) {
            this->home.SetNest_nest(Так);
        } else {
            this->home.SetNest_nest(Ні);
        }
        
        int s = 0;
        ss >> s;
        if (s == 0) {
            this->sex = Чоловіча;
        } else {
            this->sex = Жіноча;
        }
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
    
    /**
     * Функція запису в рядок-інформацію
     *
     * Функція записує в рядок-інформацію всі даніх елементу типу Basic
     */
    std::string toString();
    
    void SetSex (Sex x){
        sex = x;
    }
    Sex GetSex() const{
        return sex;
    }
    
    void SetAge(int x) {
        age = x;
    }
    int GetAge()const {
        return age;
    }
    
    Feature GetHome() {
        return home;
    }
    
    void printOne(std::ofstream &file);
    
    Basic (Basic& other){ //копирование
        this->label = other.label;
        strcpy(this->name, other.name);
        this->age = other.age;
        this->home = other.home;
        this->sex = other.sex;
    }
    
    virtual ~Basic() { // :/
        
    }
};
