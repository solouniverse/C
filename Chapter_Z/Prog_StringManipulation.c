// strlen()	computes string's length
// strcpy()	copies a string to another
// strcat()	concatenates(joins) two strings
// strcmp()	compares two strings
// strlwr()	converts string to lowercase
// strupr()	converts string to uppercase
#include <stdio.h>
#include <string.h>

int main() {
    char str1[30];
    char str2[30];
    printf("Enter string 1: ");
    gets(str1);     //Function to read string from user.
    printf("Enter string 2: ");
    gets(str2);    //Function to display string.

    //strlen()
    printf("strlen() of %s is %d\n", str1, strlen(str1));
    printf("strlen() of %s is %d\n", str2, strlen(str2));

    // strcat()
    // char concat[]=strcat(str1, str2);
    // char originalStr1[30]=str1;
    // char originalStr2[30]=str2;
    // printf("strcat() of %s and %s is %s\n", originalStr1, originalStr2, strcat(str1, str2));
    printf("strcat() of two string is %s\n", strcat(str1, str2));

    //strlwr()
    printf("strlwr() of %s => %s \n %s => %s", str1, strlwr(str1), str2, strlwr(str2));

    //strupr()
    printf("strupr() of %s => %s \n %s => %s", str1, strupr(str1), str2, strupr(str2));
    return 0;
}