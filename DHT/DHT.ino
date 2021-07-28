#include <DHT.h>
#define DHTTYPE DHT11
#define pin 9
DHT dht9(pin,DHTTYPE);
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
dht9.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.print(dht9.readTemperature());
Serial.print("C,");
Serial.print(dht9.readHumidity());
Serial.println("%");
delay(2000);
}
