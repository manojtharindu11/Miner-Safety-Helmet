int gas_sensor = A0;  // Sensor pin
float m = -0.6527;    // Slope
float b = 1.30;       // Y-Intercept
float R0 = 21.91;     // Sensor Resistance in fresh air from previous code

void setup() {
  Serial.begin(9600);          // Baud rate
  pinMode(gas_sensor, INPUT);  // Set gas sensor as input
}

void loop() {
  float ppm = readCOConcentration();  // Read CO concentration value from the sensor

  Serial.print("CO Concentration (ppm) = ");
  Serial.println(ppm);

  delay(2000);
}

float readCOConcentration() {
  float sensor_volt;                         // Define a variable for sensor voltage
  float RS_gas;                              // Define a variable for sensor resistance
  float ratio;                               // Define variable for ratio
  int sensorValue = analogRead(gas_sensor);  // Read analog values of the sensor

  Serial.print("GAS SENSOR RAW VALUE = ");
  Serial.println(sensorValue);

  sensor_volt = sensorValue * (5.0 / 1023.0);  // Convert analog values to voltage
  Serial.print("Sensor value in volts = ");
  Serial.println(sensor_volt);

  RS_gas = ((5.0 * 10.0) / sensor_volt) - 10.0;  // Get value of RS in a gas
  Serial.print("Rs value = ");
  Serial.println(RS_gas);

  ratio = RS_gas / R0;  // Get ratio RS_gas/RS_air
  Serial.print("Ratio = ");
  Serial.println(ratio);

  double ppm_log = (log10(ratio) - b) / m;  // Get ppm value in linear scale according to the ratio
  double ppm = pow(10, ppm_log);            // Convert ppm value to log scale
  Serial.print("CO Concentration (ppm) = ");
  Serial.println(ppm);

  return ppm;
}