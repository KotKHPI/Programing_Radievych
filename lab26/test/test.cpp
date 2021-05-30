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
 * Верифікація роботи методу {@link AddLayer_bird}
 * на основі набора вхідних та очікуваних даних
 *
 * @return стан проходження тестів: 1 - тести пройшли успішно, 0 - частина
 * тестів не пройшла
 */
unsigned short test_AddLayer_bird() {
    printf("Запуск тесту %s ... \n", __FUNCTION__);
    unsigned short is_success = 1;
    Basic a;
    List_Layer_Birds pr(1);
    Layer_Birds pr1(a, Лютий, Вересень);
    pr.AddBird(pr1);
    
    if(pr.GetBird(1).GetTake_off() == pr1.GetTake_off()) {
        is_success = 0;
    } else {
        is_success = 1;
    }
    
    if(pr.GetBird(1).GetRifle() == pr1.GetRifle()) {
        is_success = 1;
    } else {
        is_success = 0;
    }
    return is_success;
}

/**
 * Верифікація роботи методу {@link AddExotic_bird}
 * на основі набора вхідних та очікуваних даних
 *
 * @return стан проходження тестів: 1 - тести пройшли успішно, 0 - частина
 * тестів не пройшла
 */
unsigned short test_AddExotic_bird() {
    printf("Запуск тесту %s ... \n", __FUNCTION__);
    unsigned short is_success = 1;
    List_Exotic_birds pr(1);
    Basic a;
    Exotic_birds pr1(a, -134, 234);
    pr.AddBird(pr1);
    
    if(pr.GetBird(1).GetMin_temp() == pr1.GetMin_temp()) {
        is_success = 1;
    } else {
        is_success = 0;
    }
    
    if(pr.GetBird(1).GetMax_temp() == pr1.GetMax_temp()) {
        is_success = 1;
    } else {
        is_success = 0;
    }
    
    return is_success;
}

/**
 * Верифікація роботи методу {@link test_RemoveLayer_bird}
 * на основі набора вхідних та очікуваних даних
 *
 * @return стан проходження тестів: 1 - тести пройшли успішно, 0 - частина
 * тестів не пройшла
 */
unsigned short test_RemoveLayer_bird() {
    printf("Запуск тесту %s ... \n", __FUNCTION__);
    unsigned short is_success = 1;
    List_Layer_Birds pr(1);
    Basic a;
    Layer_Birds pr1(a, Лютий, Вересень);
    pr.AddBird(pr1);
    pr.RemoveLayer_bird(0);
    
    if(pr.GetBird(0).GetTake_off() == pr1.GetTake_off()) {
        is_success = 1;
    } else {
        is_success = 0;
    }
    
    if(pr.GetBird(0).GetRifle() == pr1.GetRifle()) {
        is_success = 1;
    } else {
        is_success = 0;
    }
    return is_success;
}

/**
 * Верифікація роботи методу {@link test_RemoveExotic_birds}
 * на основі набора вхідних та очікуваних даних
 *
 * @return стан проходження тестів: 1 - тести пройшли успішно, 0 - частина
 * тестів не пройшла
 */
unsigned short test_RemoveExotic_birds() {
    printf("Запуск тесту %s ... \n", __FUNCTION__);
    unsigned short is_success = 1;
    List_Exotic_birds pr(1);
    Basic a;
    Exotic_birds pr1(a, -134, 234);
    pr.AddBird(pr1);
    pr.RemoveExotic_bird(0);
    
    if(pr.GetBird(0).GetMin_temp() == pr1.GetMin_temp()) {
        is_success = 1;
    } else {
        is_success = 0;
    }
    
    if(pr.GetBird(0).GetMax_temp() == pr1.GetMax_temp()) {
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
    Feature home(1, 2, 3, Так);
    Basic bird(Так, "testKOT", 1, home, Чоловіча);
    Layer_Birds real(bird, Лютий, Березень);
    
    std::string s1 = "0 testKOT 1 1 2 3 0 0 1 2";
    
    Layer_Birds kot(s1);
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
    Feature home(1, 2, 3, Так);
    Basic bird(Так, "testKOT", 1, home, Чоловіча);
    Layer_Birds bb (bird, Лютий, Березень);
    
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
    Feature home(1, 2, 3, Так);
    Basic bird(Так, "testKOT", 1, home, Чоловіча);
    Exotic_birds real(bird, -10, 10);
    
    std::string s1 = "0 testKOT 1 1 2 3 0 0 -10 10";
    
    Exotic_birds kot(s1);
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
    Feature home(1, 2, 3, Так);
    Basic bird(Так, "testKOT", 1, home, Чоловіча);
    Exotic_birds bb (bird, -10, 10);
    
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
    is_success = test_AddLayer_bird();
    if (is_success == 0) {
        printf("Тест test_AddLayer_bird не пройдено!\n");
    }
    
    is_success = test_AddExotic_bird();
    if (is_success == 0) {
        printf("Тест test_AddExotic_bird не пройдено!\n");
    }
    
    is_success = test_RemoveLayer_bird();
    if (is_success == 0) {
        printf("Тест test_RemoveLayer_bird не пройдено!\n");
    }
    
    is_success = test_RemoveExotic_birds();
    if (is_success == 0) {
        printf("Тест test_RemoveExotic_birds не пройдено!\n");
    }
    
    is_success = test_Layer_bird_by_string();
    if (is_success == 0) {
        printf("Тест test_Layer_bird_by_string не пройдено!\n");
    }
    
    is_success = test_Exotic_birds_by_string();
    if (is_success == 0) {
        printf("Тест test_Exotic_birds_by_string не пройдено!\n");
    }
    
    is_success = test_Layer_bird_to_string();
    if (is_success == 0) {
        printf("Тест test_Layer_bird_to_string не пройдено!\n");
    }
    
    is_success = test_Exotic_birds_to_string();
    if (is_success == 0) {
        printf("Тест test_Exotic_birds_to_string не пройдено!\n");
    }
    
    if (is_success == 1) {
        printf("Модульні тести пройдено успішно!");
    }

    return !is_success;
}*/
