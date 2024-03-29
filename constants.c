// usually constants are declared in CAPS
#include <stdio.h>

int main(void){

    const int AGE = 27;
    //another way
    #define AGE2 27 // no need for var type, = and ;
    printf("%d\n", AGE);
    printf("%d\n", AGE2);

}