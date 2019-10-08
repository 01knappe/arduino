#include <Arduino.h>
/*
    Blikání
    LED na sekundu zasvítí a pak zase na sekundu zhasne. Opakovaně.
*/

// Pin 13 je na většině Arduino deskách spojen s LED
int led = 13;


void setup() {
    // nastavení pinu na Output
    pinMode(led, OUTPUT);
}

// opakujici se smyčka
void loop() {
    digitalWrite(led, HIGH); //zapnutí led
    delay(1000); // po dobu jedné sekundy
    digitalWrite(led, LOW); // vypnuti LED
    delay(1000); // po dobu jedné sekundy
}