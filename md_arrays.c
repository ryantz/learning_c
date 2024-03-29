#include <stdio.h>

int main(){

// multi dimensional arrays: array[x][y]

//3x5 matrix. 
    int mul_array[3][5] = {
        {1,2,3,4,5},
        {5,4,3,2,1},
        {2,3,4,1,5},
        };

    printf("%d", mul_array[0][3]);
}