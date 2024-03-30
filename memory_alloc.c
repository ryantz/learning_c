// memory allocation functions are found in stdlib.h library
// malloc() -> memory allocation. syntax ptr = (cast-type*)malloc(size) : allocates and no initialization
// calloc() -> contigious allocation. syntax ptr = (cast-type*)calloc(n, size) : allocates and initializes all bits to 0
// free() -> free memory allocated by any ^
// realloc() -> if previous allocated memory is insufficient, use realloc(). syntax ptr = (cast-type*)realloc(ptr, size)
#include <stdio.h>
#include <stdlib.h>

int main(){

    int numsofelements, *ptr, i, sum = 0;

    printf("Please input the number of elements to be stored: ");
    scanf("%d", &numsofelements);

    // memory allocation for the program
    //ptr = (int*)malloc(numsofelements * sizeof(int));
    ptr = (int*)calloc(numsofelements, sizeof(int));
    
    if(ptr == NULL){
        printf("Error, amount of memory cannot be allocated\n");
        exit(0);
    }

    // program
    printf("Welcome:\n");
    for(i=0; i<numsofelements; ++i){
        printf("Enter the element %d: ", i+1);
        scanf("%d", ptr + i); // same as &var.....but ptr+i increments according to amount of memory alloc
        sum += *(ptr + i); // sum += value in address pointed at
    }

    printf("Sum = %d\n", sum);

    // deallocating memory
    free(ptr);
    return 0;

}