#include <string.h>
#include <stdio.h>
#pragma once
/*
* @breaf Ф-я приписывает одну строку к другой.
* @param str1_: Первая строка
* @param str2_: Вторая строка
*/
char* StrCat(char* str1_, const char* str2_);
/*
* @breaf функция копирования одной строки в другую
 @param str1_: Первая строка(Копируемая)
* @param str2_: Вторая строка(Куда копируем)
*/
char* CopyStr(char* str1_, const char* str2_);
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
char* StrCmp(const char* str1, const char* str2);
/*
* @breaf  Функция ищет первое вхождение подстроки string2 в строке string1. 
* @param str1: 1-ая строка
* @param str2: 2-ая строка
*/
char* strStr(char* str1_, char* str2_);