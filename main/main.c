#include <stdio.h>
#include <driver/gpio.h>
#include <freertos/FreeRtos.h>
#include <freertos/task.h>
#define PIN 2

void app_main(void)
{
gpio_pad_select_gpio(PIN);
gpio_set_direction(PIN,GPIO_MODE_OUTPUT);
int isOn = 0;
int test = 0;
int i = 0;

while(1)
{
    isOn = !isOn;
    gpio_set_level(PIN, isOn);
    vTaskDelay(1000/portTICK_RATE_MS);
}

}
