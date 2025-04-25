#include <stdio.h>

int main() {
    float num1, num2, result;

    // Input two numbers
    printf("Enter dividend: ");
    scanf("%f", &num1);
    printf("Enter divisor: ");
    scanf("%f", &num2);

    // Check for division by zero
    if (num2 == 0) {
        printf("Error: Division by zero is not allowed.\n");
    } else {
        // Perform division
        result = num1 / num2;
        printf("Result of %.2f divided by %.2f is: %.2f\n", num1, num2, result);
    }

    return 0; 
}
