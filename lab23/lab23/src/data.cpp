/**
 * @file data.c
 * @brief Файл з реалізацією функцій для data.h
 *
 * @author Radievych V.
 * @date 22-apr-2021
 * @version 1.0
 */
#include "list.h"
#include "data.h"

void Basic::printName() const {
    printf("%s", this->name);
}
