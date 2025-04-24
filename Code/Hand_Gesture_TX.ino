#include <RH_ASK.h>
#include <SPI.h>

RH_ASK driver;

#define x A0
#define y A1
#define z A2

char data;

void setup() {
    Serial.begin(9600);
    if (!driver.init()) {
        Serial.println("RadioHead init failed!");
        while (1);
    }

    pinMode(x, INPUT);
    pinMode(y, INPUT);
    pinMode(z, INPUT);
}

void loop() {
    int x_val = analogRead(x);
    int y_val = analogRead(y);
    int z_val = analogRead(z);

    if (y_val >= 368) {
        data = 'f';  // Forward
        Serial.println("Forward");
    } else if (y_val <= 299) {
        data = 'b';  // Backward
        Serial.println("Backward");
    } else if (x_val >= 394) {
        data = 'l';  // Left
        Serial.println("Left");
    } else if (x_val <= 290) {
        data = 'r';  // Right
        Serial.println("Right");
    } else {
        data = 's';  // Stop
        Serial.println("Stop");
    }

    driver.send((uint8_t *)&data, sizeof(data));
    driver.waitPacketSent();
    Serial.print("Sent: ");
    Serial.println(data);
    delay(500);
}
