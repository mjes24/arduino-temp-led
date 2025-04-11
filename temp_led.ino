int sensorPin = A0;
int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int reading = analogRead(sensorPin);
  float voltage = reading * 5.0 / 1024;
  float temperatureC = (voltage - 0.5) * 100;

  Serial.print("Temp: ");
  Serial.println(temperatureC);

  if (temperatureC > 30) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }

  delay(1000);
}
