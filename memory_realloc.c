#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int n, m, *ptr, i;
    int ans;

    printf("please enter the number of elements to be stored: ");
    scanf("%d", &n);
    ptr = (int*)calloc(n, sizeof(int));
    
    for(i=0; i<n; ++i){
        printf("the addresses are: %p\n", ptr+i);
    }
    printf("Is this enough memory?: ");
    scanf("%d", &ans);

    if(ans == 1){
        return 0;
    }
    
    if (ans == 0){
        printf("Please enter new number of elements: ");
        scanf("%d", &m);
        // reallocate new memory
        ptr = (int*)realloc(ptr, m * sizeof(int));
        for(i=0; i<m; ++i){
         printf("The new addresses are: %p\n", ptr+i);   
        }
        return 0;
    }
}