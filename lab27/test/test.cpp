/**
 * @file test.cpp
 * @brief Файл з тестами на реалізації методів оперування динамічним списком елементів структурами та інвших класів
 *
 
 * @date 20-may-2021
 * @version 1.0
 */
#include "list.h"
#include "data.h"

/**
 * Верифікація роботи методу {@link test_AddBird}
 * на основі набора вхідних та очікуваних даних
 *
 * @return стан проходження тестів: 1 - тести пройшли успішно, 0 - частина
 * тестів не пройшла
 */
unsigned short test_AddBird() {
    std::cout << "Запуск тесту " << __FUNCTION__ << " ... \n";
    unsigned short is_success = 1;
    List pr;
    Layer_Birds* pr1 = new Layer_Birds("0 testKOT 1 1 2 3 0 0 1 2");
    pr.AddBird(pr1);
    
    
    if(pr.GetBird(0).GetAge() == pr1->GetAge()) {
        is_success = 0;
    } else {
        is_success = 1;
    }
    
    if(pr.GetBird(0).GetLabel() == pr1->GetLabel()) {
        is_success = 1;
    } else {
        is_success = 0;
    }
    if(pr.GetBird(0).GetSex() == pr1->GetSex()) {
        is_success = 1;
    } else {
        is_success = 0;
    }
    
    return is_success;
}

/**
 * Верифікація роботи методу {@link test_RemoveBird}
 * на основі набора вхідних та очікуваних даних
 *
 * @return стан проходження тестів: 1 - тести пройшли успішно, 0 - частина
 * тестів не пройшла
 */
unsigned short test_RemoveBird() {
    std::cout << "Запуск тесту " << __FUNCTION__ << " ... \n";
    unsigned short is_success = 1;
    List pr;
    Layer_Birds* pr1 = new Layer_Birds("0 testKOT 1 1 2 3 0 0 1 2");
    Layer_Birds* pr2 = new Layer_Birds("1 testKOT2 0 0 4 5 1 1 1 2");
    pr.AddBird(pr1);
    pr.AddBird(pr2);
    pr.RemoveBird(0);
    
    if(pr.GetBird(0).GetAge() == pr2->GetAge()) {
        is_success = 0;
    } else {
        is_success = 1;
    }
    
    if(pr.GetBird(0).GetLabel() == pr2->GetLabel()) {
        is_success = 1;
    } else {
        is_success = 0;
    }
    if(pr.GetBird(0).GetSex() == pr2->GetSex()) {
        is_success = 1;
    } else {
        is_success = 0;
    }

    return is_success;
}

/**
 * Верифікація роботи методу {@link Layer_bird (std::string tmp)}
 * на основі набора вхідних та очікуваних даних
 *
 * @return стан проходження тестів: 1 - тести пройшли успішно, 0 - частина
 * тестів не пройшла
 */
unsigned short test_Layer_bird_by_string() {
    std::cout << "Запуск тесту " << __FUNCTION__ << " ... \n" ;
    unsigned short is_success = 1;
    Layer_Birds real("0 testKOT 1 1 2 3 0 0 1 2");
    
    std::string s1 = "0 testKOT 1 1 2 3 0 0 1 2";
    
    Layer_Birds kot(s1);
    if (kot.GetLabel() == real.GetLabel()) {
        is_success = 1;
    } else {
        is_success = 0;
    }
    
    if (kot.GetSex() == real.GetSex()) {
        is_success = 1;
    } else {
        is_success = 0;
    }
    
    if (kot.GetAge() == real.GetAge()) {
        is_success = 1;
    } else {
        is_success = 0;
    }
    
    if (kot.GetTake_off() == real.GetTake_off()) {
        is_success = 1;
    } else {
        is_success = 0;
    }
    if (kot.GetRifle() == real.GetRifle()) {
        is_success = 1;
    } else {
        is_success = 0;
    }
    return is_success;
}

/**
 * Верифікація роботи методу {@link std::string toString()}
 * на основі набора вхідних та очікуваних даних
 *
 * @return стан проходження тестів: 1 - тести пройшли успішно, 0 - частина
 * тестів не пройшла
 */
unsigned short test_Layer_bird_to_string() {
    std::cout << "Запуск тесту " << __FUNCTION__ << " ... \n" ;
    unsigned short is_success = 1;
    Layer_Birds bb ("0 testKOT 1 1 2 3 0 0 1 2");
    
    std::string expected = "0 testKOT 1 1 2 3 0 0 1 2";
    
    std::string real = bb.toString();
    
    if (expected == real) {
        is_success = 1;
    } else {
        is_success = 0;
    }
    
    return is_success;
}

/**
 * Верифікація роботи методу {@link Layer_bird (std::string tmp)}
 * на основі набора вхідних та очікуваних даних
 *
 * @return стан проходження тестів: 1 - тести пройшли успішно, 0 - частина
 * тестів не пройшла
 */
unsigned short test_Exotic_birds_by_string() {
    std::cout << "Запуск тесту " << __FUNCTION__ << " ... \n" ;
    unsigned short is_success = 1;
    Exotic_birds real("0 testKOT 1 1 2 3 0 0 -10 10");
    
    std::string s1 = "0 testKOT 1 1 2 3 0 0 -10 10";
    
    Exotic_birds kot(s1);
    if (kot.GetLabel() == real.GetLabel()) {
        is_success = 1;
    } else {
        is_success = 0;
    }
    
    if (kot.GetSex() == real.GetSex()) {
        is_success = 1;
    } else {
        is_success = 0;
    }
    
    if (kot.GetAge() == real.GetAge()) {
        is_success = 1;
    } else {
        is_success = 0;
    }
    
    if (kot.GetMin_temp() == real.GetMin_temp()) {
        is_success = 1;
    } else {
        is_success = 0;
    }
    if (kot.GetMax_temp() == real.GetMax_temp()) {
        is_success = 1;
    } else {
        is_success = 0;
    }
    return is_success;
}

/**
 * Верифікація роботи методу {@link std::string toString()}
 * на основі набора вхідних та очікуваних даних
 *
 * @return стан проходження тестів: 1 - тести пройшли успішно, 0 - частина
 * тестів не пройшла
 */
unsigned short test_Exotic_birds_to_string() {
    std::cout << "Запуск тесту " << __FUNCTION__ << " ... \n" ;
    unsigned short is_success = 1;
    Exotic_birds bb ("0 testKOT 1 1 2 3 0 0 -10 10");
    
    std::string expected = "0 testKOT 1 1 2 3 0 0 -10 10";
    
    std::string real = bb.toString();
    
    if (expected == real) {
        is_success = 1;
    } else {
        is_success = 0;
    }
    
    return is_success;
}

/**
 * Верифікація роботи методу {@link test_FindPercentageMan}
 * на основі набора вхідних та очікуваних даних
 *
 * @return стан проходження тестів: 1 - тести пройшли успішно, 0 - частина
 * тестів не пройшла
 */
unsigned short test_FindPercentageMan() {
    std::cout << "Запуск тесту " << __FUNCTION__ << " ... \n" ;
    unsigned short is_success = 1;
    Layer_Birds* pr1 = new Layer_Birds("0 testKOT1 1 1 2 3 0 0 1 3");
    Layer_Birds* pr2 = new Layer_Birds("0 testKOT2 1 1 2 3 0 0 1 2");
    Layer_Birds* pr3 = new Layer_Birds("0 testKOT3 1 1 2 3 0 1 0 4");
    Layer_Birds* pr4 = new Layer_Birds("0 testKOT3 1 1 2 3 0 0 0 4");
    
    List b;
    b.AddBird(pr1);
    b.AddBird(pr2);
    b.AddBird(pr3);
    b.AddBird(pr4);
    
    int real = b.FindPercentageMan();
    int ex = 75;
    
    if (ex == real) {
        is_success = 1;
    } else {
        is_success = 0;
    }

    return is_success;
}

/**
 * Верифікація роботи методу {@link test_FindPercentageWoman}
 * на основі набора вхідних та очікуваних даних
 *
 * @return стан проходження тестів: 1 - тести пройшли успішно, 0 - частина
 * тестів не пройшла
 */
unsigned short test_FindPercentageWoman() {
    std::cout << "Запуск тесту " << __FUNCTION__ << " ... \n" ;
    unsigned short is_success = 1;
    Layer_Birds* pr1 = new Layer_Birds("0 testKOT1 1 1 2 3 0 0 1 3");
    Layer_Birds* pr2 = new Layer_Birds("0 testKOT2 1 1 2 3 0 0 1 2");
    Layer_Birds* pr3 = new Layer_Birds("0 testKOT3 1 1 2 3 0 1 0 4");
    Layer_Birds* pr4 = new Layer_Birds("0 testKOT3 1 1 2 3 0 0 0 4");
    
    List b;
    b.AddBird(pr1);
    b.AddBird(pr2);
    b.AddBird(pr3);
    b.AddBird(pr4);
    
    int real = b.FindPercentageWoman();
    int ex = 25;
    
    if (ex == real) {
        is_success = 1;
    } else {
        is_success = 0;
    }

    return is_success;
}

/**
 * Точка входу модуля тестування.
 *
 * Запускає розроблені методи роботи з динамічним списком елементів структур та класами.
 *
 * По завершенню тестів виводиться на екран резуміюча інформація про стан
 * проходження тестів.
 *
 * @return стан проходження тестів: 1 - тести пройшли успішно, 0 - частина
 * тестів не пройшла
 */
/*int main() {
    unsigned short is_success = 1;
    is_success = test_AddBird();
    if (is_success == 0) {
        std::cout << "Тест test_AddBird не пройдено!\n";
    }
    
    
    is_success = test_RemoveBird();
    if (is_success == 0) {
        std::cout << "Тест test_RemoveBird не пройдено!\n";
    }
    
    
    is_success = test_Layer_bird_by_string();
    if (is_success == 0) {
        std::cout << "Тест test_Layer_bird_by_string не пройдено!\n";
    }
    
    is_success = test_Exotic_birds_by_string();
    if (is_success == 0) {
        std::cout << "Тест test_Exotic_birds_by_string не пройдено!\n";
    }
    
    is_success = test_Layer_bird_to_string();
    if (is_success == 0) {
        std::cout << "Тест test_Layer_bird_to_string не пройдено!\n";
    }
    
    is_success = test_Exotic_birds_to_string();
    if (is_success == 0) {
        std::cout << "Тест test_Exotic_birds_to_string не пройдено!\n";
    }
    
    is_success = test_FindPercentageMan();
    if (is_success == 0) {
        std::cout << "Тест test_FindPercentageMan не пройдено!\n";
    }
    is_success = test_FindPercentageWoman();
    if (is_success == 0) {
        std::cout << "Тест test_FindPercentageWoman не пройдено!\n";
    }
    
    if (is_success == 1) {
        std::cout << "Модульні тести пройдено успішно!";
    }

    return !is_success;
}*/
