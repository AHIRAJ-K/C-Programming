#include <stdio.h>

int main() {
    float num1, num2, sum;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);

    // Calculate the sum
    sum = num1 + num2;

    // Output the result
    printf("Sum of %.2f and %.2f is: %.2f\n", num1, num2, sum);

    return 0;
}
