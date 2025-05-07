#include <stdio.h>
#include <math.h>

int main() {
    int num, sum = 0, temp, remainder, n = 0;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    // Find the number of digits
    while (temp != 0) {
        temp /= 10;
        ++n;
    }

    temp = num;

    // Calculate the sum of powers of each digit
    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, n);
        temp /= 10;
    }

    // Check if the sum is equal to the original number
    if (sum == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
