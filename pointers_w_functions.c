#include <stdio.h>

void swap(int* a, int* b);
void addone(int* ptr);

int main(){

    int num1 = 10, num2 = 3;
    swap(&num1, &num2); // takes in addresses
    printf("the values are swapped. num1: %d, num2: %d\n", num1, num2);//3, 10

    addone(&num1);
    printf("The value of num1 is incremented: %d\n", num1);// 4

}

void swap(int* a, int* b){ // accepts addresses as args
    int temp;
    temp = *a;//value in addresses are swapped
    *a = *b;
    *b = temp;
}

void addone(int* ptr){
    (*ptr)++; // increments the value in address pointed by ptr
}