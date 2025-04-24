#include <stdio.h>

int main() {
    float num1, num2, difference;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);

    // Calculate the difference
    difference = num1 - num2;

    // Output the result
    printf("Difference between %.2f and %.2f is: %.2f\n", num1, num2, difference);

    return 0;
}
