/**
 * @file list.h
 * @brief Файл з описом структури птиць, перерахуванням критеріїв птиць та функцій оперування птахами
 *
 * @author Radievych V.
 * @date 22-apr-2021
 * @version 1.0
 */

#pragma once
#include "data.h"
#include <cstdio>
#include <cerrno>
#include <time.h> //?
#include <cstring>
#include <cstdlib>

class List {
private:
    Basic** birds;
    int count;
public:
    List() {
        count = 0;
    }
    
    //костр копирования
    
    void SetCount (int x){
        count = x;
    }
    int GetCount() const{
        return count;
    }
    
    void AddBird (){
    
    }
    
    ~List() {
        for (int i = 0; i < count; ++i) {
            delete birds[i];
        }
        delete birds;
        }
};
