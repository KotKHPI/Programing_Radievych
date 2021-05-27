/**
 * @file data.cpp
 * @brief Файл з реалізацією методів для data.h
 *
 * @author Radievych V.
 * @date 20-may-2021
 * @version 1.0
 */
#include "data.h"

std::string Basic::toString() {
    std::string s_info;
    std::string s_info1;
    std::string s_info2;
    std::stringstream ss;
    
    ss << this->label << " ";
    
    ss << this->name << " " << this->age <<" " << this->home.GetSquare()<< " " << this ->home.GetHeight()<< " " << this->home.GetNumber_of_feeders()<< " ";
    
    ss << this->home.GetNest_nest() << " ";
    
    ss << this->sex << " ";
    
    ss >> s_info;
    s_info += " ";
    for (int i = 0; i < 3; i++) {
        ss >> s_info1;
        ss >> s_info2;
        s_info += s_info1 + " " + s_info2 + " ";
    }
    ss >> s_info1;
    s_info += s_info1;
    
    ss.str(std::string());
    
    return s_info;
}

void Basic::printOne(std::ofstream &file) {
    file << "Чи окольцована птаха: ";
    if (this->label == 0) {
        file << "Так\n";
    } else {
        file << "Ні\n";
    }
    
    file << "Назва птаха: " << this->name << "\n"; file << "Вік птаха: " << this->age <<" місяців\n"; file << "Площа домівки: " << this->home.GetSquare() << " см^2\n"; file << "Висота домівки: " << this->home.GetHeight() << " см.\n"; file << "Кількість годівниць: " << this->home.GetNumber_of_feeders() << "\n";
    
    file << "Наявність гнізда: ";
    if (this->home.GetNest_nest() == 0) {
        file << "Є гніздо\n";
    } else {
        file << "Немає гнізда\n";
    }
    
    file << "Стать: ";
    if (this->sex == 0) {
        file << "Чоловіча\n\n";
    } else {
        file << "Жіноча\n\n";
    }
}
