#include <TinyGPSPlus.h>
#include <SoftwareSerial.h>

/**
 * ### Connection diagrams
 *
 * GP-02 <-> Arduino
 * GND    :  GND
 * 5V     :  5V
 * TX     :  D2
 * RX     :  D3
 *
 * ### Result received
 *
 * A simple demonstration of TinyGPSPlus with an attached GPS module
 * Testing TinyGPSPlus library v. 1.0.3
 * by Mikal Hart
 *
 * Location: 10.773272,106.656715  Date/Time: INVALID 09:56:28.00
 * Location: 10.773272,106.656715  Date/Time: INVALID 09:56:28.00
 * Location: 10.773272,106.656715  Date/Time: INVALID 09:56:28.00
 * Location: 10.773272,106.656715  Date/Time: INVALID 09:56:28.00
 * Location: 10.773272,106.656715  Date/Time: INVALID 09:56:28.00
 * Location: 10.773272,106.656715  Date/Time: INVALID 09:56:28.00
 * Location: 10.773272,106.656715  Date/Time: INVALID 09:56:28.00
 * Location: 10.773272,106.656715  Date/Time: INVALID 09:56:28.00
 * Location: 10.773272,106.656715  Date/Time: INVALID 09:56:28.00
 * Location: 10.773272,106.656715  Date/Time: INVALID 09:56:28.00
 * Location: 10.773272,106.656715  Date/Time: INVALID 09:56:28.00
 * Location: 10.773272,106.656715  Date/Time: 2/3/2023 09:56:28.00
 * Location: 10.773272,106.656715  Date/Time: 2/3/2023 09:56:28.00
 * Location: 10.773272,106.656715  Date/Time: 2/3/2023 09:56:28.00
 * Location: 10.773272,106.656715  Date/Time: 2/3/2023 09:56:28.00
 * Location: 10.773272,106.656715  Date/Time: 2/3/2023 09:56:29.00
 * Location: 10.773272,106.656715  Date/Time: 2/3/2023 09:56:29.00
 * Location: 10.773272,106.656715  Date/Time: 2/3/2023 09:56:29.00
 * ...
 */
static const int RXPin = 2, TXPin = 3;
static const uint32_t GPSBaud = 9600;

// The TinyGPSPlus object
TinyGPSPlus gps;

// The serial connection to the GPS device
SoftwareSerial ss(RXPin, TXPin);

void setup()
{
  Serial.begin(115200);
  ss.begin(GPSBaud);

  Serial.println(F("A simple demonstration of TinyGPSPlus with an attached GPS module"));
  Serial.print(F("Testing TinyGPSPlus library v. "));
  Serial.println(TinyGPSPlus::libraryVersion());
  Serial.println(F("by Mikal Hart"));
  Serial.println();
}

void loop()
{
  // This sketch displays information every time a new sentence is correctly encoded.
  while (ss.available() > 0)
    if (gps.encode(ss.read()))
      displayInfo();

  if (millis() > 5000 && gps.charsProcessed() < 10)
  {
    Serial.println(F("No GPS detected: check wiring."));
    while (true)
      ;
  }
}

void displayInfo()
{
  Serial.print(F("Location: "));
  if (gps.location.isValid())
  {
    Serial.print(gps.location.lat(), 6);
    Serial.print(F(","));
    Serial.print(gps.location.lng(), 6);
  }
  else
  {
    Serial.print(F("INVALID"));
  }

  Serial.print(F("  Date/Time: "));
  if (gps.date.isValid())
  {
    Serial.print(gps.date.month());
    Serial.print(F("/"));
    Serial.print(gps.date.day());
    Serial.print(F("/"));
    Serial.print(gps.date.year());
  }
  else
  {
    Serial.print(F("INVALID"));
  }

  Serial.print(F(" "));
  if (gps.time.isValid())
  {
    if (gps.time.hour() < 10)
      Serial.print(F("0"));
    Serial.print(gps.time.hour());
    Serial.print(F(":"));
    if (gps.time.minute() < 10)
      Serial.print(F("0"));
    Serial.print(gps.time.minute());
    Serial.print(F(":"));
    if (gps.time.second() < 10)
      Serial.print(F("0"));
    Serial.print(gps.time.second());
    Serial.print(F("."));
    if (gps.time.centisecond() < 10)
      Serial.print(F("0"));
    Serial.print(gps.time.centisecond());
  }
  else
  {
    Serial.print(F("INVALID"));
  }

  Serial.println();
}