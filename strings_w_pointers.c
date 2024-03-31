#include <stdio.h>

int main(void){
    char str[30] = "Hello";

    printf("%c\n", *str); //h
    printf("%c\n", *(str+4)); //o

    // or declare a pointer
    char *ptr;
    ptr = str;
    printf("%c\n", *ptr); //H
    printf("%p\n", ptr); //address
    printf("%c\n", *(ptr+4)); //o

}