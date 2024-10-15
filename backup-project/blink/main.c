#include <stdio.h>
#include "pico/stdlib.h"

void loop();

void my_gpio_put(int pin,int val){
    gpio_put(pin,val);
    return;
}

int main() {

    const uint led_pin = 25;

    // Initialize LED pin
    gpio_init(led_pin);
    gpio_set_dir(led_pin, GPIO_OUT);

    // Initialize chosen serial port
    stdio_init_all();

    // // Loop forever
    // while (true) {
    //     // Blink LED
    //     printf("Shit Biscuit!\r\n");
    //     gpio_put(led_pin, true);
    //     sleep_ms(1000);
    //     gpio_put(led_pin, false);
    //     sleep_ms(1000);
    // }

    gpio_put(led_pin, true);
    loop();
    gpio_put(led_pin, false);
}