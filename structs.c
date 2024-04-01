#include <stdio.h>
#include <string.h>


typedef struct Person{
    char name[20];
    int age;
    
}person;

int main(){
    person p1;
    strcpy(p1.name, "Ryan Tan");
    p1.age = 22;

    printf("%d\n", p1.age);
}