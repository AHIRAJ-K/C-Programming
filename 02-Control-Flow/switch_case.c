#include <stdio.h>

int main() {
    int choice;

    printf("Menu:\n");
    printf("1. Greet\n");
    printf("2. Say Bye\n");
    printf("3. Exit\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Hello! Have a great day.\n");
            break;
        case 2:
            printf("Goodbye! See you again.\n");
            break;
        case 3:
            printf("Exiting program.\n");
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}