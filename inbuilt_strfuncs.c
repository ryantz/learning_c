#include <stdio.h>
#include <string.h> // lib for string functions
#include <ctype.h>

int main(){
    char str[6] = "Hello"; // hello/0
    char str2[3] = "Hi";
    char str3[20];
    char str4[10] = "abc";
    char upper[10] = "YMCA";
    char lower[20] = "forgottoupper";
    int len, compare;
    

    len = strlen(str); 
    printf("%d\n", len);

    strcpy(str3, str2); // strcpy(destination, source) copies str to another
    printf("%s\n", str3);

    compare = strcmp(str, str4); // compare according to ASCII, 0 if equal, >0 if str1 > str2, <0 if str1 < str2
    printf("%d\n", compare); // -25, str1 < str2   H < A

    strcat(str, str4);
    printf("%s\n", str); // Helloabc

}