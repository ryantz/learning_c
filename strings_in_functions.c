#include <stdio.h>

void displaystring(char str[]);

int main(){
    char string[30];
    
    printf("Please enter a string: ");
    fgets(string, sizeof(string), stdin);
    displaystring(string);
    
    return 0;
    
}

void displaystring(char str[]){
    printf("The string entered is: ");
    puts(str);
}