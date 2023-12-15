#include <string.h>
#include <stdio.h>
#pragma once
/*
* @breaf Ф-я приписывает одну строку к другой.
* @param str1_: Первая строка
* @param str2_: Вторая строка
*/
void StrCat(char* str1_, const char* str2_);
/*
* @breaf функция копирования одной строки в другую
 @param str1_: Первая строка(Копируемая)
* @param str2_: Вторая строка(Куда копируем)
*/
void CopyStr(char* str1_, const char* str2_);
/*
* @breaf функция копирования одной строки в другую
 @param str1_: Первая строка(Копируемая)
* @param str2_: Вторая строка(Куда копируем)
*/
int StrLen(char* str_);
/*
* @breaf  Функция сравнивает две строки
* @param str1: 1-ая строка
* @param str2: 2-ая строка
*/
void StrCmp(const char* str1, const char* str2);