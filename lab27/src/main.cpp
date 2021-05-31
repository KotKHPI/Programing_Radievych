/**
 * @mainpage
 * # Загальне завдання
 * 1. **Модернізувати** попередню лабораторну роботу шляхом: базовий клас зробити абстрактним. Додати абстрактні методи;  розроблені класи-списки поєднуються до одного класу таким чином, щоб він міг працювати як з базовим класом, так і з його спадкоємцями. При цьому серед полів класу-списку повинен бути лише один масив, що містить усі типи класів ієрархії. Оновити методи, що працюють з цим масивом; у функціях базового класу та класів-спадкоємців обов'язкове використання ключових final та override;
 *
 * @author Radievych V.
 * @date 20-may-2021
 * @version 1.0
 */

/**
 * @file main.cpp
 * @brief Файл з демонстрацією роботи списків List, Basic та їх спадкоємці та методи роботи з ними.
 *
 * @author Radievych V.
 * @date 20-may-2021
 * @version 1.0
 */
#include "list.h"

/**
 * Головна функція.
 *
 * Послідовність дій:
 * -створення данних для класу-списку та записання в строку шляхи до файлів вводу та виводу
 * -створення класу класу списку
 * -робота з методами класу (@link List)
 * @return успішний код повернення з програми (0)
 */
int main() {
    Layer_Birds* c = new Layer_Birds("0 KOT 12 12 8 2 1 1 1 2");
    Layer_Birds* q = new Layer_Birds("0 KOT2 12 12 8 2 1 1 3 4");
    Exotic_birds* d = new Exotic_birds("0 Півень 12 12 8 2 1 1 -10 12");
    std::string fileOut = "/Users/whatislove/out_birds.txt";
    std::string fileIn = "/Users/whatislove/birds2.txt";
    List b;
    b.AddBird(c);
    b.AddBird(q);
    b.AddBird(d);
    b.GetBird(1).SetAge(123);
    
    
    //b.RemoveBird(1);
    List a;
    a.readFromFile(fileIn);
    //a.writeToFile(fileOut);
    int qw;
    std::cin >> qw;
    
    return 0;
}
