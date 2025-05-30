#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Find and sum all proper divisors
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // Check if the sum of divisors is equal to the number
    if (sum == num)
        printf("%d is a Perfect number.\n", num);
    else
        printf("%d is not a Perfect number.\n", num);

    return 0;
}
