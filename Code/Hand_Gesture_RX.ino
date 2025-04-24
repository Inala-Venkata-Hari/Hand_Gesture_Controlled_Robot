#include <RH_ASK.h>
#include <SPI.h> // SPI is required for RadioHead, even if not used

#define ENA 9   // Enable pin for motor A (PWM)
#define ENB 10  // Enable pin for motor B (PWM)
#define m1 2    // IN1
#define m2 3    // IN2
#define m3 4    // IN3
#define m4 5    // IN4

// Create an instance of the RadioHead ASK (Amplitude Shift Keying) object
RH_ASK driver;

void setup()
{
    // Initialize the RadioHead driver
    if (!driver.init()) {
        Serial.println("RadioHead init failed");
    }

    // Set motor control pins as output
    pinMode(m1, OUTPUT);
    pinMode(m2, OUTPUT);
    pinMode(m3, OUTPUT);
    pinMode(m4, OUTPUT);
    pinMode(ENA, OUTPUT);
    pinMode(ENB, OUTPUT);

    Serial.begin(9600);
    Serial.println("Receiver Ready!");

    // Enable motors (Full speed)
    digitalWrite(ENA, HIGH);
    digitalWrite(ENB, HIGH);
}

void loop()
{
    Serial.print(" IN1: "); Serial.print(digitalRead(2)); // Replace 5 with your actual IN1 pin
    Serial.print(" IN2: "); Serial.print(digitalRead(3)); // Replace 6 with your actual IN2 pin
    Serial.print(" IN3: "); Serial.print(digitalRead(4)); // Replace 7 with your actual IN3 pin
    Serial.print(" IN4: "); Serial.println(digitalRead(5)); // Replace 8 with your actual IN4 pin
    // Buffer to store the received message
    uint8_t buf[RH_ASK_MAX_MESSAGE_LEN];
    uint8_t buflen = sizeof(buf);

    // Check if a message is received
    if (driver.recv(buf, &buflen))
    {
        // Null-terminate the received message
        buf[buflen] = '\0';

        // Print the received message for debugging
        Serial.print("Received: ");
        Serial.println((char*)buf);

        // Control motors based on the received message
        if (buf[0] == 'f') // Forward
        {  
            digitalWrite(ENA, HIGH);  // Enable motor A
            digitalWrite(ENB, HIGH);  // Enable motor B
            digitalWrite(m1, HIGH);
            digitalWrite(m2, LOW);
            digitalWrite(m3, HIGH);
            digitalWrite(m4, LOW);
            Serial.println("Forward");
        }  
        else if (buf[0] == 'b') // Backward
        {
            digitalWrite(ENA, HIGH);
            digitalWrite(ENB, HIGH);
            digitalWrite(m1, LOW);
            digitalWrite(m2, HIGH);
            digitalWrite(m3, LOW);
            digitalWrite(m4, HIGH);
            Serial.println("Backward");
        }
        else if (buf[0] == 'r') // Right
        {
            digitalWrite(ENA, HIGH);
            digitalWrite(ENB, HIGH);
            digitalWrite(m1, HIGH);
            digitalWrite(m2, LOW);
            digitalWrite(m3, LOW);
            digitalWrite(m4, LOW);
            Serial.println("Right");
        }
        else if (buf[0] == 'l') // Left
        {
            digitalWrite(ENA, HIGH);
            digitalWrite(ENB, HIGH);
            digitalWrite(m1, LOW);
            digitalWrite(m2, LOW);
            digitalWrite(m3, HIGH);
            digitalWrite(m4, LOW);
            Serial.println("Left");
        }
        else if (buf[0] == 's') // Stop
        {            
            digitalWrite(ENA, LOW); // Disable motors
            digitalWrite(ENB, LOW);
            digitalWrite(m1, LOW);
            digitalWrite(m2, LOW);
            digitalWrite(m3, LOW);
            digitalWrite(m4, LOW);
            Serial.println("Stop");
        }
    }
}