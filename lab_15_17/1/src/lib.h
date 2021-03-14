/**
 * @file lib.h
 * @brief Файл з прототипами функцій
 *
 * @author Radievych V.
 * @date 9-mar-2021
 * @version 1.0
 */


#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <stdbool.h>
#include <time.h>
#include <string.h>
#pragma once

enum Yes_no {
    Так, //0
    Ні //1
};

enum Sex {
    Чоловіча,
    Жіноча
};

typedef struct {
    int square; //кв.см
    int height; //см
    int number_of_feeders;
    enum Yes_no nest_nest; //да, нет
} Feature;

typedef struct {
    enum Yes_no label; //да, нет
    char name[15]; //петух, жаравель и тд
    int age; //месяцов
    Feature home;
    enum Sex sex; //мужской, женский
} Basic;


/**
 *Функція перевірки файлу
 *
 *Функція перевіряє знаходження файлу по заданія дерикторії
 */
void check_file (FILE *fmatrix);

void scanning (Basic* p_bird, int count_birds, FILE *birds_info);

void sort_by_age (Basic* p_bird, int count_birds);

void output_file (Basic* p_bird, int count_birds, FILE* out_info);

void random_elements (Basic* p_bird, int count_birds);

void output_monitor (Basic* p_bird, int count_birds);
