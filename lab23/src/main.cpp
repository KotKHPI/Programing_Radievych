/**
 * @mainpage
 * # Загальне завдання
 * 4. **З розділу** "Розрахункове завдання / Індивідуальні завдання" взяти прикладну галузь, стосовно номеру варіанту за попередньо-визначеною формулою (номер 23) та сформувати односпрямований список елементів розробленної структури;
 *
 * @author Radievych V.
 * @date 22-apr-2021
 * @version 1.0
 */

/**
 * @file main.c
 * @brief Файл з демонстрацією роботи односпрямованого списоку елементів розробленної структури{@link Basic} та методів оперування ним.
 *
 * @author Radievych V.
 * @date 15-apr-2021
 * @version 1.0
 */
#include "list.h"



int main() {
    /*List bird;
    bird.SetCount(6);
    Basic a;
    bird.operator=(bird);*/
    
    Feature home(1, 2, 3, Так);
    Feature home1(4, 5, 6, Ні);
    Feature home2();
    
    int a = home1.GetHeight();
    
    Basic bird(Так, "Петух", 1, home, Чоловіча);
    Basic bird1(Ні, "Чапалах", 2, home1, Жіноча);
    
//    List b(2);
//    b.SetData(0, bird);
//    b.SetData(1, bird1);
    
    return 0;
}
