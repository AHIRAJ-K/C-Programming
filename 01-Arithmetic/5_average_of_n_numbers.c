#include <stdio.h>

int main() {
    int n, i;
    float number, sum = 0, average;

    // Input how many numbers
    printf("Enter the count of numbers: ");
    scanf("%d", &n);

    // Check for valid count
    if (n <= 0) {
        printf("Error: Count must be a positive number.\n");
        return 1;
    }

    // Loop to input and sum numbers
    for (i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%f", &number);
        sum += number;
    }

    // Calculate average
    average = sum / n;

    // Output result
    printf("Average of the %d numbers is: %.2f\n", n, average);

    return 0;
}
