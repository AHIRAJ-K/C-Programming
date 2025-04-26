#include <stdio.h>

int main() {
    const float PI = 3.14159;
    float radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    if (radius < 0) {
        printf("Error: Radius cannot be negative.\n");
        return 1;
    }

    area = PI * radius * radius;

    printf("Area of the circle is: %.2f\n", area);

    return 0;
} 
