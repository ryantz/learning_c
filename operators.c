// different operators in c
#include <stdio.h>

int main(void){

    // arithmetic ops
    int a, b, c;
    a = b = 3;
    c = 6;
    //printf("%d, %d", a, b);
    printf("%d\n", a + b); // 6
    printf("%d\n", a - b); // 0
    printf("%d\n", a * b); // 9
    printf("%d\n", c / a); // 2

    int i = 0;
    i++;
    ++i;
    i--;
    --i;
    // ++ / -- after the i; uses i first then increments
    // ++ / -- before the i; increments i first then uses i

    int d, e;
    d = 0;
    e = 4;
    d = e++; // d = 4, e = 5
    d = ++e; // d = 4, e = 4

    // comparison operators
    // ==, !=, >, <, >=, <=

    // logical operators
    // !(NOT), &&(AND), ||(OR)

    // compound assignment operators
    // -=, +=, *=, /=, %=

    

}