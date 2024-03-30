// a string is basically an array of chars that end with a /0 as the last bit
// string[5], accomodates for only 'four', and not 'fours'

#include <stdio.h>

int main(){
    char str[30];
    char str2[30];

    
    printf("Please enter your first name: ");
    scanf("%s", str); // no need & before the name
    printf("You entered: %s\n", str); // scanf captures until the whitespace is detected.
//----------------------------------------------------------------------------------------------//
    printf("Please enter your full name: ");
    fgets(str2, sizeof(str2), stdin); // accepts white spaces
    printf("You entered: ");
    puts(str2);
}