#include <SoftwareSerial.h>

SoftwareSerial BTSerial(10, 11); // TX | RX
int STATE=9;  // STATE pin arduino bağlantısı
void setup()
{
  Serial.begin(9600);
  BTSerial.begin(9600);
}

void loop()
{
  if (BTSerial.available()){
    Serial.write(BTSerial.read());
    Serial.println("");
    }

  if (Serial.available()){
    BTSerial.write(Serial.read());
    Serial.println("");
   }
}
