#include <stdio.h>

int main(){
    
    //displaying where the value is stored in memory
    int a = 1;
    printf("The value of variable a is: %d\n", a);
    printf("The address where variable a is stored in is: %p\n", &a); //& before variable name
    
    //pointers are used to store addresses, not values
    //ways to declare a pointer
    int *p;
    int* p1;
    int * p2;

    int* pc, c;
    c = 3; //storing value in c
    pc = &c; //storing address location info in pc
    printf("The value stored in variable c is: %d\n", *pc); // * before pointer shows the value of the address the pointer is at
    printf("The value is %d, and the address is %p\n", c, pc);

    int* point, val;
    point = &val; //pointer to address of val
    //*point = &val is wrong
    
    int *point2 = &val; //correct 

}