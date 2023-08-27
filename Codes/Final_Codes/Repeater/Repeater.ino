#include <SPI.h>
#include <RF24.h>

RF24 radio(7, 8);  // CE, CSN pins

struct SensorData {
  float temperature;
  float CO_ppm;
  float other_value;
};

SensorData sensorData;  // Create an instance of the struct

void setup() {
  radio.begin();
  radio.setPALevel(RF24_PA_HIGH);            // Set power level
  radio.openReadingPipe(1, 0xF0F0F0F0E1LL);  // Address to receive from (6-byte alphanumeric)
  radio.openWritingPipe(0xF0F0F0F0D2LL);     // Address to transmit to (6-byte alphanumeric)
  radio.startListening();
}

void loop() {
  if (radio.available()) {

    radio.read(&sensorData, sizeof(sensorData));

    // Process the received data if needed

    // Forward the received data to the receiver
    radio.stopListening();
    radio.write(&sensorData, sizeof(sensorData));
    radio.startListening();
  }
}
