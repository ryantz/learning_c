#include <stdio.h>
// break, exits the loop (for, do , while)
// continue, skips the current iteration and moves to the next

int main(){
    int a = 0;
    while(a < 10){
        printf("The number now is: %d\n", a);
        a++;
        /*
        if(a == 5){
            break;
        }
        */
       if(a == 5){
        printf("HELLO");
        continue;
       }
    }
    
}