#include <stdio.h>

// A function with one parameter
void printMessage(char message[]) {
    printf("%s\n", message);
}

int main(void) {
    char greeting[] = "Hello, World!";
    printMessage(greeting);
    return 0;
}
