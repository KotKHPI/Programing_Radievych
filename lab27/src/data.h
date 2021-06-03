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
 * Місяці року
 */
enum Month {
    Січень,
    Лютий,
    Березень,
    Квітнь,
    Травень,
    Червень,
    Липень,
    Серпень,
    Вересень,
    Жовтень,
    Листопад,
    Грудень
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
 * Базовий клас "Птах" (абстрактний)
 */
class Basic {
protected:
    enum Yes_no label; /**< чи окольцьована птаха */
    std::string name; /**< назва виду*/
    int age; /**< вік патаха, місяців*/
    Feature home; /**< структура домівки птаха (@link  Feature) */
    enum Sex sex; /**< стать птаха */
public:
    Basic(): label(Так), name("Птиця"), age(0), sex(Чоловіча) { } //конструктор1
    
    Basic(Yes_no label1, std::string name1, int age1, Feature home1, Sex sex1) { //конструктор2
        label = label1;
        name = name1;
        age = age1;
        home = home1;
        sex = sex1;
    }
    
    /**
     * Конструктор вводу інформації про об'єкт через строку
     */
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
    
    void SetName (std::string n) {
        name = n;
    }
    
    /**
     * Метод запису в рядок-інформацію
     */
    virtual std::string toString() = 0;
    
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
    
    virtual void printOne(std::ofstream &file) = 0;
    
    /**
     * Конструктор копіювання
     */
    Basic (Basic& other){ //копирование
        this->label = other.label;
        this->name = other.name;
        this->age = other.age;
        this->home = other.home;
        this->sex = other.sex;
    }
    
    virtual ~Basic() { // :/
        
    }
};

/**
 * Клас "перелітні птахи"
 */
class Layer_Birds : public Basic {
private:
    enum Month take_off; /**< місяць коли відлітає птах у вирій */
    enum Month rifle; /**< місяць коли прилітає птах з вирію */
public:
    Layer_Birds(): Basic(), take_off(Січень), rifle(Січень) {}
    Layer_Birds(Basic &other, enum Month take_off, enum Month refle): Basic(other), take_off(take_off), rifle(refle){ }
    
    void SetTake_off(enum Month take_off) {
        this->take_off = take_off;
    }
    Month GetTake_off() const {
        return this->take_off;
    }
    
    void SetRifle(enum Month rifle) {
        this->rifle = rifle;
    }
    Month GetRifle() const {
        return this->rifle;
    }
    
    /**
     * Конструктор вводу інформації про об'єкт через строку
     */
    Layer_Birds (std::string tmp) {
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
        int q = 0;
        ss >> q;
        switch (q) {
            case 0:
                this->take_off = Січень;
                break;
            case 1:
                this->take_off = Лютий;
                break;
            case 2:
                this->take_off = Березень;
                break;
            case 3:
                this->take_off = Квітнь;
                break;
            case 4:
                this->take_off = Травень;
                break;
            case 5:
                this->take_off = Червень;
                break;
            case 6:
                this->take_off = Липень;
                break;
            case 7:
                this->take_off = Серпень;
                break;
            case 8:
                this->take_off = Вересень;
                break;
            case 9:
                this->take_off = Жовтень;
                break;
            case 10:
                this->take_off = Листопад;
                break;
            case 11:
                this->take_off = Грудень;
                break;
        }
        int w = 0;
        ss >> w;
        switch (w) {
            case 0:
                this->rifle = Січень;
                break;
                
            case 1:
                this->rifle = Лютий;
                break;
            case 2:
                this->rifle = Березень;
                break;
            case 3:
                this->rifle = Квітнь;
                break;
            case 4:
                this->rifle = Травень;
                break;
            case 5:
                this->rifle = Червень;
                break;
            case 6:
                this->rifle = Липень;
                break;
            case 7:
                this->rifle = Серпень;
                break;
            case 8:
                this->rifle = Вересень;
                break;
            case 9:
                this->rifle = Жовтень;
                break;
            case 10:
                this->rifle = Листопад;
                break;
            case 11:
                this->rifle = Грудень;
                break;
        }
        
    }
    
    /**
     * Метод запису в рядок-інформацію
     *
     * Метод записує в рядок-інформацію всі даніх елементу типу Layer_birds
     */
    std::string toString() override final;
    
    /**
     * Метод виведення у файл
     *
     * Метод виводе у файл оформлений елемент класу (@link Layer_Birds)
     */
    void printOne(std::ofstream &file) override final;
    
    /**
     * Конструктор копіювання
     */
    Layer_Birds (Layer_Birds &other) : Basic(other), take_off(other.take_off), rifle(other.rifle) { }
    
    virtual ~Layer_Birds() {
        
    }
};

/**
 * Клас "екзотичні птахи"
 */
class Exotic_birds : public Basic {
private:
    int max_temp; /**< максимально комфортна температура для птаха */
    int min_temp; /**< манімально комфортна температура для птаха */
public:
    Exotic_birds(): max_temp(0), min_temp(0) {}
    Exotic_birds(Basic &other, int min_temp, int max_temp): Basic(other), min_temp(min_temp), max_temp(max_temp) { }
    
    void SetMin_temp(int min_temp) {
        this->min_temp = min_temp;
    }
    int GetMin_temp() const{
        return this->min_temp;
    }
    
    void SetMax_temp(int max_temp) {
        this->max_temp = max_temp;
    }
    int GetMax_temp() const{
        return this->max_temp;
    }
    
    /**
     * Конструктор вводу інформації про об'єкт через строку
     */
    Exotic_birds (std::string tmp) {
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
        
        ss >> this->min_temp;
        ss >> this->max_temp;
    }
    
    /**
     * Метод запису в рядок-інформацію
     *
     * Метод записує в рядок-інформацію всі даніх елементу типу Exotic_birds
     */
    std::string toString() override final;
    
    /**
     * Метод виведення у файл
     *
     * Метод виводе у файл оформлений елемент класу (@link Exotic_birds)
     */
    void printOne(std::ofstream &file) override final;
    
    /**
     * Конструктор копіювання
     */
    Exotic_birds (Exotic_birds &other) : Basic(other), min_temp(other.min_temp), max_temp(other.max_temp) { }
    
    virtual ~Exotic_birds() {
        
    }
};
