#include <stdio.h>

// helper to compute factorial of a digit (0–9)
int factorial(int x) {
    int f = 1;
    for (int i = 2; i <= x; ++i) {
        f *= i;
    }
    return f;
}

int main() {
    int num, original, remainder, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);
    original = num;

    // Sum of factorials of digits
    while (num > 0) {
        remainder = num % 10;
        sum += factorial(remainder);
        num /= 10;
    }

    if (sum == original)
        printf("%d is a Strong number.\n", original);
    else
        printf("%d is not a Strong number.\n", original);

    return 0;
}
