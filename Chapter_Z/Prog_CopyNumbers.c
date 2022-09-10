// Copy a string (combination of digits & alphabets)
// to another string (only alphabets)
// Input:  h3ll0wo7l6z
// Result or output: hllwolz
// str1 = "h3ll0wo7l6z"
// str2 = "hllwol" copied only alphabets

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[30] = "h3ll0wo7l6z";
    char str2[30];
    int len = strlen(str1);
    int j = 0;
    for (int i = 0; i < len; i++)
    {
        // 0 - 48, a - 97, A - 65
        if ((str1[i] >= 48 && str1[i] <= 57))
        {
            str2[j++] = str1[i];
        }
    }
    str2[j] = '\0';

    printf("Copy numbers only from str1: %s to str2: %s", str1, str2);
}