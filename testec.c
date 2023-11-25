#include <unistd.h>
#include <stdio.h>

int main(void) {
    write(1,"Hello, World!", 9);
    printf("\nHello, World!");
}