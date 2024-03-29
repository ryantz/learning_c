#include <stdio.h>

int main(){

    int init[] = {1,2,3,4,5};
    int init2[5] = {1,2,3,4,5};
    int storing[1];
    scanf("%d", &storing[0]);

    int grades[3];// array with 3 integers
    int total_average, current_grade, total_grade, ideal_average_total;
    
    grades[0] = 80;
    grades[2] = 90;

    ideal_average_total = 85 * 3;
    
    //average grades to be 85
    current_grade = grades[0] + grades[2];
    
    grades[1] = ideal_average_total - current_grade ;
    total_grade = grades[0] + grades[1] + grades[2];

    total_average = (total_grade / 3 );
    
    printf("The value of the missing grade is: %d \n", grades[1]);
    printf("The average of all three grades is: %d \n", total_average);
    
}