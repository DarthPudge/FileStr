#include <string.h>
#include <stdio.h>
#pragma once
/*
* @breaf �-� ����������� ���� ������ � ������.
* @param str1_: ������ ������
* @param str2_: ������ ������
*/
char* StrCat(char* str1_, const char* str2_);
/*
* @breaf ������� ����������� ����� ������ � ������
 @param str1_: ������ ������(����������)
* @param str2_: ������ ������(���� ��������)
*/
char* CopyStr(char* str1_, const char* str2_);
/*
* @breaf ������� ����������� ����� ������ � ������
 @param str1_: ������ ������(����������)
* @param str2_: ������ ������(���� ��������)
*/
int StrLen(char* str_);
/*
* @breaf  ������� ���������� ��� ������
* @param str1: 1-�� ������
* @param str2: 2-�� ������
*/
char* StrCmp(const char* str1, const char* str2);
/*
* @breaf  ������� ���� ������ ��������� ��������� string2 � ������ string1. 
* @param str1: 1-�� ������
* @param str2: 2-�� ������
*/
char* strStr(char* str1_, char* str2_);