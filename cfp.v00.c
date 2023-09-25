#include <stdio.h>

void printMessage(char message[]) {
    printf("%s\n", message);
}

int main(void) {
    char message[] = "Hello, World!";
    printMessage(message);
    return 0;
}
