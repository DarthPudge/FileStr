#include <string.h>
#include <stdio.h>
#pragma once
/*
* @breaf �-� ����������� ���� ������ � ������.
* @param str1_: ������ ������
* @param str2_: ������ ������
*/
void StrCat(char* str1_, const char* str2_);
/*
* @breaf ������� ����������� ����� ������ � ������
 @param str1_: ������ ������(����������)
* @param str2_: ������ ������(���� ��������)
*/
void CopyStr(char* str1_, const char* str2_);
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
void StrCmp(const char* str1, const char* str2);