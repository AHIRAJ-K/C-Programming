#include <stdio.h>

int main() {
    char ch;

    printf("Enter an alphabet: ");
    scanf(" %c", &ch);  // Note the space before %c to consume any leftover newline

    // Convert to lowercase for simplicity
    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + 32;
    }

    // Check if it is a vowel
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("'%c' is a vowel.\n", ch);
    } else if ((ch >= 'a' && ch <= 'z')) {
        printf("'%c' is a consonant.\n", ch);
    } else {
        printf("'%c' is not an alphabet.\n", ch);
    }

    return 0;
}
