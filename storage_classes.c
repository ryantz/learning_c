#include <stdio.h>

void some(){
    static int b = 3;
    b += 3;
    printf("%d\n", b);
}

void some2(){
    int c = 3;
    c += 3;
    printf("%d\n", c);
}

int main(){
    some(); //starts as 3 then + 3 = 6
    some(); //since static, starts at 6 now and + 3 = 9
    some(); // starts 9, 9+3 =12

    some2(); //6
    some2(); //6
    some2(); //6
}