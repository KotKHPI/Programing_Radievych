/**
 * @file data.cpp
 * @brief Файл з реалізацією методів для data.h
 *
 * @author Radievych V.
 * @date 20-may-2021
 * @version 1.0
 */
#include "data.h"

void Basic::printAll() const {
    printf("Чи окольцована птаха: ");
    if (this->label == 0) {
        printf("Так\n");
    } else {
        printf("Ні\n");
    }
    
    printf("Назва птаха: %s\nВік птаха: %d місяців\nПлоща домівки: %d см^2\nВисота домівки: %d см.\nКількість годівниць: %d\n", this->name, this->age, this->home.GetSquare(), this ->home.GetHeight(), this->home.GetNumber_of_feeders());
    
    printf("Наявність гнізда: ");
    if (this->home.GetNest_nest() == 0) {
        printf("Є гніздо\n");
    } else {
        printf("Немає гнізда\n");
    }
    
    printf("Стать: ");
    if (this->sex == 0) {
        printf("Чоловіча\n\n");
    } else {
        printf("Жіноча\n\n");
    }
}
