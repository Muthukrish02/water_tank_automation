#include <DHT.h>
#include <LiquidCrystal.h>

// Initialize the DHT sensor
#define DHTPIN 2     // Pin which is connected to the DHT sensor
#define DHTTYPE DHT11   // DHT 11
DHT dht(DHTPIN, DHTTYPE);

// Initialize the LCD
LiquidCrystal lcd(13, 12, 11, 10, 9, 8);

const int relayPin = 7; // Pin connected to relay
const float desiredTemp = 22.0; // Desired room temperature in Celsius

void setup() {
  // Initialize the LCD
  lcd.begin(20, 4);
  lcd.setCursor(0, 0);
  lcd.print("  ROOM TEMPERATURE  ");
  
  // Initialize the DHT sensor
  dht.begin();

  // Initialize the relay pin as output
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, LOW); // Start with relay off
}

void loop() {
  // Read temperature as Celsius
  float currentTemp = dht.readTemperature();

  // Check if any reads failed and exit early (to try again).
  if (isnan(currentTemp)) {
    lcd.setCursor(0, 1);
    lcd.print("Error reading temp");
    return;
  }

  // Display temperature on LCD
  lcd.setCursor(0, 1);
  lcd.print("Temp: ");
  lcd.print(currentTemp);
  lcd.print(" C  ");

  // Control the relay based on temperature
  if (currentTemp < desiredTemp) {
    digitalWrite(relayPin, HIGH); // Turn on the heater
    lcd.setCursor(0, 2);
    lcd.print("Heater: ON  ");
  } else {
    digitalWrite(relayPin, LOW); // Turn off the heater
    lcd.setCursor(0, 2);
    lcd.print("Heater: OFF ");
  }

  delay(2000); // Wait a few seconds between measurements
}
