#include <stdio.h>

int main() {
    int dividend, divisor, remainder;

    // Input dividend and divisor
    printf("Enter dividend: ");
    scanf("%d", &dividend);
    printf("Enter divisor: ");
    scanf("%d", &divisor);

    // Check for division by zero
    if (divisor == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 1;
    }

    // Calculate remainder
    remainder = dividend % divisor; 

    // Output remainder
    printf("Remainder when %d is divided by %d is: %d\n", dividend, divisor, remainder);

    return 0;
}
