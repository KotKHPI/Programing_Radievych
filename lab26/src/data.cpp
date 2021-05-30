/**
 * @file data.cpp
 * @brief Файл з реалізацією методів для data.h
 *
 
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

std::string Layer_Birds::toString() {
    std::string s_info;
    std::string s_info1;
    std::string s_info2;
    std::stringstream ss;
    
    ss << this->label << " ";
    
    ss << this->name << " " << this->age <<" " << this->home.GetSquare()<< " " << this ->home.GetHeight()<< " " << this->home.GetNumber_of_feeders()<< " ";
    
    ss << this->home.GetNest_nest() << " ";
    
    ss << this->sex << " ";
    
    ss << this->GetTake_off() << " ";
    ss << this->GetRifle() << " ";
    
    ss >> s_info;
    s_info += " ";
    for (int i = 0; i < 4; i++) {
        ss >> s_info1;
        ss >> s_info2;
        s_info += s_info1 + " " + s_info2 + " ";
    }
    ss >> s_info1;
    s_info += s_info1;
    
    ss.str(std::string());
    
    return s_info;
}

void Layer_Birds::printOne(std::ofstream &file) {
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
        file << "Чоловіча\n";
    } else {
        file << "Жіноча\n";
    }
    
    file << "Місяць відльоту: ";
    switch (this->take_off) {
        case 0:
            file << "Січень\n";
            break;
        case 1:
            file << "Лютий\n";
            break;
        case 2:
            file << "Березень\n";
            break;
        case 3:
            file << "Квітнь\n";
            break;
        case 4:
            file << "Травень\n";
            break;
        case 5:
            file << "Червень\n";
            break;
        case 6:
            file << "Липень\n";
            break;
        case 7:
            file << "Серпень\n";
            break;
        case 8:
            file << "Вересень\n";
            break;
        case 9:
            file << "Жовтень\n";
            break;
        case 10:
            file << "Листопад\n";
            break;
        case 11:
            file << "Грудень\n";
            break;
    }
    
    file << "Місяць прильту: ";
    switch (this->rifle) {
        case 0:
            file << "Січень\n\n";
            break;
        case 1:
            file << "Лютий\n\n";
            break;
        case 2:
            file << "Березень\n\n";
            break;
        case 3:
            file << "Квітнь\n\n";
            break;
        case 4:
            file << "Травень\n\n";
            break;
        case 5:
            file << "Червень\n\n";
            break;
        case 6:
            file << "Липень\n\n";
            break;
        case 7:
            file << "Серпень\n\n";
            break;
        case 8:
            file << "Вересень\n\n";
            break;
        case 9:
            file << "Жовтень\n\n";
            break;
        case 10:
            file << "Листопад\n\n";
            break;
        case 11:
            file << "Грудень\n\n";
            break;
    }
}

std::string Exotic_birds::toString() {
    std::string s_info;
    std::string s_info1;
    std::string s_info2;
    std::stringstream ss;
    
    ss << this->label << " ";
    
    ss << this->name << " " << this->age <<" " << this->home.GetSquare()<< " " << this ->home.GetHeight()<< " " << this->home.GetNumber_of_feeders()<< " ";
    
    ss << this->home.GetNest_nest() << " ";
    
    ss << this->sex << " ";
    
    ss << this->min_temp << " ";
    ss << this->max_temp << " ";
    
    ss >> s_info;
    s_info += " ";
    for (int i = 0; i < 4; i++) {
        ss >> s_info1;
        ss >> s_info2;
        s_info += s_info1 + " " + s_info2 + " ";
    }
    ss >> s_info1;
    s_info += s_info1;
    
    ss.str(std::string());
    
    return s_info;
}

void Exotic_birds::printOne(std::ofstream &file) {
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
        file << "Чоловіча\n";
    } else {
        file << "Жіноча\n";
    }
    
    file << "Мінімальна комфортна температура: " << this->min_temp << "\n";
    
    file << "Максимальна комфортна температура: " << this->max_temp << "\n\n";
}
