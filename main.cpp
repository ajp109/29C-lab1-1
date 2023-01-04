#include "mbed.h"

int x;

int main() {

    int a;

    printf("x is stored at address %p\r\n", &x);
    printf("a is stored at address %p\r\n", &a);

    while (true) {
        sleep();
    }
}
