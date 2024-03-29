#include <stdio.h>

int main(){
    int array[5];
    int i;

    for(i=0; i<5; ++i){
        printf("The address of array[%d] is: %p\n",i, &array[i]);
    }
    // array name is sort of the pointer 
    printf("The location of array: %p is the same as x[0]: %p\n", array, &array[0]);
    printf("The value of array[1]: %d is the same as *(array+1): %d\n", array[1], *(array+1));

    int x[4] = {23,1,0,40};
    int* ptr;

    ptr = &x[2]; //ptr is assigned to the location of x[3] fourth element, *ptr will be the value which is pointed at
    printf("ptr has position: %d\n", *ptr); // 0
    printf("before pointer pos: %d\n", *(ptr-1));// 1 
    printf("after pointer pos: %d\n", *(ptr+1));// 40

}