/**
 * @file test.cpp
 * @brief Файл з тестами на реалізації методів оперування динамічним списком елементів структурами та інших класів
 *
 * @author Rkotievych V.
 * @date 20-may-2021
 * @version 1.0
 */
#include "list.h"
#include "data.h"

/**
 * Верифікація роботи методу {@link Basic (std::string tmp)}
 * на основі набора вхідних та очікуваних даних
 *
 * @return стан проходження тестів: 1 - тести пройшли успішно, 0 - частина
 * тестів не пройшла
 */
unsigned short test_Bird_by_string() {
    std::cout << "Запуск тесту " << __FUNCTION__ << " ... \n" ;
    unsigned short is_success = 1;
    Feature home(1, 2, 3, Так);
    Basic bird(Так, "testKOT", 1, home, Чоловіча);
    
    std::string s1 = "0 testKOT 1 1 2 3 0 0";
    
    Basic kot(s1);
    if (kot.GetLabel() == bird.GetLabel()) {
        is_success = 1;
    } else {
        is_success = 0;
    }
    
    if (kot.GetSex() == bird.GetSex()) {
        is_success = 1;
    } else {
        is_success = 0;
    }
    
    if (kot.GetAge() == bird.GetAge()) {
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
unsigned short test_Bird_to_string() {
    std::cout << "Запуск тесту " << __FUNCTION__ << " ... \n" ;
    unsigned short is_success = 1;
    Feature home(1, 2, 3, Так);
    Basic bird(Так, "testKOT", 1, home, Чоловіча);
    
    std::string expected = "0 testKOT 1 1 2 3 0 0";
    
    std::string real = bird.toString();
    
    if (expected == real) {
        is_success = 1;
    } else {
        is_success = 0;
    }
    
    return is_success;
}

/**
 * Точка входу модуля тестування.
 *
 * Запускає розроблені методи роботи з динамічним списком елементів структур та класами
 *
 * По завершенню тестів виводиться на екран резуміюча інформація про стан
 * проходження тестів.
 *
 * @return стан проходження тестів: 1 - тести пройшли успішно, 0 - частина
 * тестів не пройшла
 */
int main() {
    unsigned short is_success = 1;
    is_success = test_Bird_by_string();
    if (is_success == 0) {
        std::cout << "Тест test_kotdBird_by_string не пройдено!\n";
    }
    
    is_success = test_Bird_to_string();
    if (is_success == 0) {
        std::cout << "Тест test_Bird_to_string не пройдено!\n";
    }
    
    if (is_success == 1) {
        std::cout << "Модульні тести пройдено успішно!";
    }

    return !is_success;
}
