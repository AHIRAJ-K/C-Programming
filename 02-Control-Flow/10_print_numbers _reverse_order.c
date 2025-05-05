#include <stdio.h>

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Please enter a positive number.\n");
    } else {
        printf("Digits in reverse order: ");
        while (num > 0) {
            printf("%d ", num % 10);
            num = num/10;
        }
        printf("\n");
    }

    return 0;
}
