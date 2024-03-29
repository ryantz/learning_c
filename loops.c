#include <stdio.h>

int main(){
    
    int num;

    do{
        //executes once -> check while loop -> if while loop true, executes again
        printf("Please enter a number:");
        scanf("%d", &num);
        printf("The number entered is: %d\n", num);
    }while(num <= 10);
    printf("Since the number entered is <= 10 a.k.a. %d, loop terminates.\n", num);
}