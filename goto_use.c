#include <stdio.h>

int main(){
    int a = 0;
    while(a < 5){
        printf("Number is: %d\n", a);
        a++;

        if(a == 4){
            goto if_4;//if 4, jump to if_4
        }
    }

    if_4:
        printf("Its 4!!!\n");
}