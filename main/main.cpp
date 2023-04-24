
#include <stdio.h>
#include "pico/stdlib.h"

const uint LED_PIN1 = 21;
const uint LED_PIN2 = 22;
const uint LED_PIN3 = 23;


int main()
{ 
    stdio_init_all();

    gpio_init(LED_PIN1);
    gpio_init(LED_PIN2);
    gpio_init(LED_PIN3);

    gpio_set_dir(LED_PIN1, GPIO_OUT);
    gpio_set_dir(LED_PIN2, GPIO_OUT);
    gpio_set_dir(LED_PIN3, GPIO_OUT);

    printf("BOOTING...\n");
    sleep_ms(2000);

    while (1) {

        printf("OFF\n");
        gpio_put(LED_PIN1, 0);
        gpio_put(LED_PIN2, 0);
        gpio_put(LED_PIN3, 0);

        sleep_ms(1000);

        printf("ON\n");
        gpio_put(LED_PIN1, 1);
        gpio_put(LED_PIN2, 1);
        gpio_put(LED_PIN3, 1);

        sleep_ms(1000);
        printf("READY\n");
        sleep_ms(1000);

    };

    return 0;
}