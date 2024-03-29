#include <stdio.h>

int factorial(int n){
    if(n != 0){
        return n * factorial(n-1);
    }
    else{
        return n;
    }
}

int main(){
    int num, result;
    printf("Please enter a number:");
    scanf("%d", &num);
    result = factorial(num);
    printf("the factorial of itself is: %d\n", result);

}