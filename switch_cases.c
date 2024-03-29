// switch case = if else but easier to write
#include <stdio.h>

int main(){

    char choice;
    int num1, num2;
    printf("Please choose one operator:");
    scanf("%c", &choice);
    printf("Choose two numbers to operate on:");
    scanf("%d %d", &num1, &num2);

    //switch(input_var)
    switch(choice){

        case '+':
            printf("%d + %d = %d", num1, num2, num1 + num2);
            break;

        case '-':
            printf("%d - %d = %d", num1, num2, num1 - num2);
            break;

         case '*':
            printf("%d * %d = %d", num1, num2, num1 * num2);
            break;

          case '/':
            printf("%d / %d = %d", num1, num2, num1 / num2);
            break;

        default:
            printf("you did not enter anything");
    
    }
    return 0;

}