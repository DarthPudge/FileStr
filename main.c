#include <stdio.h>
#include <string.h>
#include "function.h"

FILE* file1, * file2;

int main() 
{
            //Ðàáîòà ñ Ôàéëîì <>.
//
    FILE* file = NULL;
    fopen_s(&file, "file.txt", "r+");
    if (!file) {
        perror("f == NULL!");
        return 1;
    }
    // Запись в файл
    fputs("Niggers\n", file);

    // Закрытие файла
    fclose(file);

                // Ðàáîòà ñî ñòðîêàìè<>.
    //1) Äëèíà ñòðîêè <strlen>.
//
     
    /*const char str[] = "ISeeDeadPeople";
    size_t length = StrLen(str);
    printf("String length: %zu \n", length);*/

    //2) Ñðàâíåíèå ñòðîê <strcmp>
//
    /*char* str1 = "Zxc";
    char* str2 = "Ghoul";
    StrCmp(str1, str2);*/

    //3) Îáúåäèíåíèå ñòðîê <StrCat>
// 
    /*char str1[30] = "ZXC";
    char str2[] = "GHOUL";
    StrCat(str1, str2);
    printf("%s\n", str1);*/

    //4) Êîïèðîâàíèå ñòðîê <CopyStr>
//
    /*char str1[] = "ZXC";
    char str2[100];
    CopyStr(str1, str2);
    printf("%s\n", str2);*/ 
    
    //5) Ïåðâîå âõîæäåíèå <strstr>
//
    /*char str[] = "I am the best mider, but there is a caveat: I only play on supports";
    printf("%s\n", strstr(str, "I only"));*/
    //printf("Lengt Str: %d", StrLen(str));
    return 0;
}
