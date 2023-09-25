#include <stdio.h>

float calcArea(float length, float width) {
    return length * width;
}

int main() {
    float length, width;

    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    float area = calcArea(length, width); 
    printf("The area of the rectangle: %.2f\n", area);
       
    return 0; 
}
