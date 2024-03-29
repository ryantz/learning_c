#include <stdio.h>

int multiply(int a, int b){
    return a * b;
}

int main(){
    int num1 = 3;
    int num2 = 4;
    int num3 = 0;
    num3 = multiply(num1, num2);
    printf("%d\n", num3);
}