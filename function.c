#include <string.h>
#include <stdio.h>
#include "function.h"

void StrCat(char* str1_, const char* str2_)
{
    while (*str1_) {
        str1_++;
    }

    while (*str2_) {
        *str1_ = *str2_;
        str2_++;
        str1_++;
    }
    *str1_ = '\0';
}
void CopyStr(char* str1_, char* str2_)
{
    while (*str1_)
    {
        *str2_ = *str1_;
        str2_++;
        str1_++;
    }
    *str2_ = '\0';
}
int StrLen(char* str_)
{
    int n = 0;
    for (; str_[n]; n++);
    return n;
}

void StrCmp(const char* str1, const char* str2)
{
    int count = 0;

    while (str1[count] && (str1[count] == str2[count])) {
        count++;
    }
    int res = str1[count] - str2[count];

    if (res == 0)
    {
        printf("1==2\n");
    }
    else
    {
        if (res < 0)
        {
            printf("1>2\n");
        }
        else
        {
            printf("1<2\n");
        }
    }
}

