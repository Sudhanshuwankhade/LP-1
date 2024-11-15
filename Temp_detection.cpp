#include <dht.h>

dht DHT;

#define DHT11_PIN A1

void setup()
{
    Serial.begin(9600);
    Serial.println("Humidity (%) , \tTemperature (C)");
}

void loop()
{
    // READ DATA
    int chk = DHT.read11(DHT11_PIN);
    // DISPLAY DATA
    Serial.print(DHT.humidity, 1);
    Serial.print("/t");
    Serial.print(DHT.temperature, 1);
    delay(1000);
    
}
