#include <stdio.h>

int main() {
    printf("Hello, World!\n");

    int foo = 10;
    int bar = 10;

    if (foo > bar) {
        printf("Foo!\n");
    }
    else if (foo < bar) {
        printf("Bar!\n");
    }
    else {
        printf("Foobar!\n");
    }

    return 0;
}