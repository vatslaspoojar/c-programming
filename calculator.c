#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;

    printf("===== Simple Calculator =====\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);

    switch(choice) {
        case 1: result = num1 + num2; printf("Result = %.2f", result); break;
        case 2: result = num1 - num2; printf("Result = %.2f", result); break;
        case 3: result = num1 * num2; printf("Result = %.2f", result); break;
        case 4: 
            if(num2 != 0) {
                result = num1 / num2; 
                printf("Result = %.2f", result);
            } else {
                printf("Error! Division by zero.");
            }
            break;
        default: printf("Invalid choice!");
    }
    return 0;
}