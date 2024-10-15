#include <stdio.h>
#include "pico/stdlib.h"

float my_sqrt(float x);

int main() {

    const uint led_pin = 25;

    // Initialize LED pin
    gpio_init(led_pin);
    gpio_set_dir(led_pin, GPIO_OUT);

    // Initialize chosen serial port
    stdio_init_all();
    float x = 26.0f;

    while(true){
        float ret = my_sqrt(x);
        printf("ret:%f\n",ret);
        sleep_ms(100);
    }
}