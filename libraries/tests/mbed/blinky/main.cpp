#include "mbed.h"

DigitalOut myled(LED1);

int main() {
    while(1) {
        printf("blink led\r\n");
        myled = 1;
        wait(0.2);
        myled = 0;
        wait(0.2);
    }
}
