/**
 * @file test.cpp
 * @brief Файл з тестами на реалізації методів оперування динамічним списком елементів структурами та інвших класів
 *
 * @author Radievych V.
 * @date 20-may-2021
 * @version 1.0
 */
#include "list.h"
#include "data.h"

/**
 * Верифікація роботи методу {@link AddBird}
 * на основі набора вхідних та очікуваних даних
 *
 * @return стан проходження тестів: 1 - тести пройшли успішно, 0 - частина
 * тестів не пройшла
 */
unsigned short test_AddBird() {
    printf("Запуск тесту %s ... \n", __FUNCTION__);
    unsigned short is_success = 1;
    Feature home(1, 2, 3, Так);
    Basic bird(Так, "testKOT", 1, home, Чоловіча);
    
    List test(2);
    test.AddBird(bird);
    
    Basic ad(test.GetBird(2));
    if (ad.GetLabel() == bird.GetLabel()) {
        is_success = 1;
    } else {
        is_success = 0;
    }
    
    if (ad.GetSex() == bird.GetSex()) {
        is_success = 1;
    } else {
        is_success = 0;
    }
    
    if (ad.GetAge() == bird.GetAge()) {
        is_success = 1;
    } else {
        is_success = 0;
    }
    return is_success;
}

/**
 * Верифікація роботи методу {@link RemoveBird}
 * на основі набора вхідних та очікуваних даних
 *
 * @return стан проходження тестів: 1 - тести пройшли успішно, 0 - частина
 * тестів не пройшла
 */
unsigned short test_RemoveBird() {
    printf("Запуск тесту %s ... \n", __FUNCTION__);
    unsigned short is_success = 1;
    Feature home(1, 2, 3, Так);
    Basic bird(Так, "testKOT", 1, home, Чоловіча);
    
    List test(2);
    test.Paste(bird, 1);
    test.RemoveBird(0);
    if(test.GetBird(0).GetAge() == bird.GetAge()) {
        is_success = 1;
    }else{
        is_success = 0;
    }
    return is_success;
}

//**
// * Верифікація роботи методу {@link FindPercentage}
// * на основі набора вхідних та очікуваних даних
// *
// * @return стан проходження тестів: 1 - тести пройшли успішно, 0 - частина
// * тестів не пройшла
// */
//unsigned short test_FindPercentage() {
//    printf("Запуск тесту %s ... \n", __FUNCTION__);
//    unsigned short is_success = 1;
//    List birds(2);
//    Basic a;
//    Feature home(1, 2, 3, Так);
//    Basic b(Так, "testKOT", 1, home, Жіноча);
//
//    birds.Paste(a, 0);
//    birds.Paste(b, 1);
//    birds.FindPercentage();
//    return is_success;
//}

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
int main() {
    unsigned short is_success = 1;
    is_success = test_AddBird();
    if (is_success == 0) {
        printf("Тест test_AddBird не пройдено!\n");
    }
    
    is_success = test_RemoveBird();
    if (is_success == 0) {
        printf("Тест test_RemoveBird не пройдено!\n");
    }
    
    if (is_success == 1) {
        printf("Модульні тести пройдено успішно!");
    }

    return !is_success;
}
