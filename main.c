#include <stdio.h>
#include <string.h>
#include "function.h"

FILE* file1, * file2;

int main() 
{
            //Работа с Файлом <>.
//
    FILE* file;
    errno_t err;

    // Открытие файла для записи
    err = fopen_s(&file, "file.txt", "w");
    if (err != 0) {
        printf("Error");
        return err;
    }
    // Запись в файл
    fputs("Пример работы с файлами в C\n", file);

    // Закрытие файла
    fclose(file);

                // Работа со строками<>.
    //1) Длина строки <strlen>.
//
     
    /*const char str[] = "ISeeDeadPeople";
    size_t length = StrLen(str);
    printf("String length: %zu \n", length);*/

    //2) Сравнение строк <strcmp>
//
    /*char* str1 = "Zxc";
    char* str2 = "Ghoul";
    StrCmp(str1, str2);*/

    //3) Объединение строк <StrCat>
// 
    /*char str1[30] = "ZXC";
    char str2[] = "GHOUL";
    StrCat(str1, str2);
    printf("%s\n", str1);*/

    //4) Копирование строк <CopyStr>
//
    /*char str1[] = "ZXC";
    char str2[100];
    CopyStr(str1, str2);
    printf("%s\n", str2);*/ 
    
    //5) Первое вхождение <strstr>
//
    /*char str[] = "I am the best mider, but there is a caveat: I only play on supports";
    printf("%s\n", strstr(str, "I only"));*/
    //printf("Lengt Str: %d", StrLen(str));
    return 0;
}