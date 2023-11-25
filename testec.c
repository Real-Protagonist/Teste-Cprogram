#include <unistd.h>
#include <stdio.h>

int main(void) {
    write(1,"Hello, World!", 15);
    printf("\ncodificando C no VS Code");
    write(1, "\nPublicando a nova branch.", 30);
}