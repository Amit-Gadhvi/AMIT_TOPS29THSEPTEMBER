
#include <stdio.h>

int add(int num1, int num2) {
    return num1 + num2;
}

int subtract(int num1, int num2) {
    return num1 - num2;
}

int multiply(int num1, int num2) {
    return num1 * num2;
}

int divide(int num1, int num2) {
    return num1 / num2;
}

int main() {
    int num1, num2, choice, Result;
    printf("------------------MENU--------------------\n1.Addition \n2.Substraction \n3.Multiplication \n4.Division\n\n");
    
    printf("\nEnter your choice:-");
    scanf("%d", &choice);
    
    printf("\nEnter first number: ");
    scanf("%d", &num1);
    printf("\nEnter second number: ");
    scanf("%d", &num2);
    switch(choice) {
        case 1:
            Result = add(num1, num2);
            printf("Result: %d\n", Result);
            break;
        case 2:
            Result = subtract(num1, num2);
            printf("Result: %d\n", Result);
            break;
        case 3:
            Result = multiply(num1, num2);
            printf("Result: %d\n", Result);
            break;
        case 4:
            Result = divide(num1, num2);
            printf("Result: %d\n", Result);
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}
