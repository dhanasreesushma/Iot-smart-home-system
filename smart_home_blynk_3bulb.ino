#define BLYNK_TEMPLATE_ID "YOUR_TEMPLATE_ID"
#define BLYNK_TEMPLATE_NAME "Smart Home 3 Bulb"
#define BLYNK_AUTH_TOKEN "YOUR_AUTH_TOKEN"

#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

// ===== WiFi Credentials =====
char ssid[] = "YOUR_WIFI_NAME";
char pass[] = "YOUR_WIFI_PASSWORD";

// ===== Relay Pins =====
#define BULB1 26
#define BULB2 27
#define BULB3 14

BlynkTimer timer;

// ===== Blynk Virtual Pins =====
// V0 -> Bulb 1
// V1 -> Bulb 2
// V2 -> Bulb 3

BLYNK_WRITE(V0)
{
  int state = param.asInt();
  digitalWrite(BULB1, state == 1 ? LOW : HIGH);
}

BLYNK_WRITE(V1)
{
  int state = param.asInt();
  digitalWrite(BULB2, state == 1 ? LOW : HIGH);
}

BLYNK_WRITE(V2)
{
  int state = param.asInt();
  digitalWrite(BULB3, state == 1 ? LOW : HIGH);
}

void setup()
{
  Serial.begin(115200);

  pinMode(BULB1, OUTPUT);
  pinMode(BULB2, OUTPUT);
  pinMode(BULB3, OUTPUT);

  // OFF initially (relay HIGH = OFF)
  digitalWrite(BULB1, HIGH);
  digitalWrite(BULB2, HIGH);
  digitalWrite(BULB3, HIGH);

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}

void loop()
{
  Blynk.run();
}
