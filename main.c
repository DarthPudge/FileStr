#include <stdio.h>
#include <string.h>
#include "function.h"

FILE* file1, * file2;

int main() 
{
            //������ � ������ <>.
//
    FILE* file;
    errno_t err;

    // �������� ����� ��� ������
    err = fopen_s(&file, "file.txt", "w");
    if (err != 0) {
        printf("Error");
        return err;
    }
    // ������ � ����
    fputs("������ ������ � ������� � C\n", file);

    // �������� �����
    fclose(file);

                // ������ �� ��������<>.
    //1) ����� ������ <strlen>.
//
     
    /*const char str[] = "ISeeDeadPeople";
    size_t length = StrLen(str);
    printf("String length: %zu \n", length);*/

    //2) ��������� ����� <strcmp>
//
    /*char* str1 = "Zxc";
    char* str2 = "Ghoul";
    StrCmp(str1, str2);*/

    //3) ����������� ����� <StrCat>
// 
    /*char str1[30] = "ZXC";
    char str2[] = "GHOUL";
    StrCat(str1, str2);
    printf("%s\n", str1);*/

    //4) ����������� ����� <CopyStr>
//
    /*char str1[] = "ZXC";
    char str2[100];
    CopyStr(str1, str2);
    printf("%s\n", str2);*/ 
    
    //5) ������ ��������� <strstr>
//
    /*char str[] = "I am the best mider, but there is a caveat: I only play on supports";
    printf("%s\n", strstr(str, "I only"));*/
    //printf("Lengt Str: %d", StrLen(str));
    return 0;
}