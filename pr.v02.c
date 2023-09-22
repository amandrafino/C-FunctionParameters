#include <stdio.h>

// Func to calculate the area of rectangle using one parameter
float calculateArea(float length) {
    float width;
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);
    return length * width;
}

// Func to calculate the area of rectangle with two parameters
float calculateAreaWithTwoParameters(float length, float width) {
    return length * width;
}

int main() {
    float length, width;

    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    // calculate the area using the func with one parameter
    float area1 = calculateArea(length);
    printf("Area of rectange using one parameter: %.2f\n", area1);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    // calculate the area using the func with two parameters
    float area2 = calculateAreaWithTwoParameters(length, width);
    printf("Area of rectangle using two parameters: %.2f\n", area2);

    return 0;

}
