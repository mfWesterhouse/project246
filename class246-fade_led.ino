const byte led_gpio = 32;
int brightness = 0;
int faeAmount = 5;

void setup() {
  ledcAttachPin(led_gpio, 0);

  ledcSetup(0, 4000, 8)
}

void loop() {
  ledcWrite(0, brightness);

  brightness = brightneww + fadeAmount;

  if (brightness <= 0 || brightness >= 255){
    fadeAmount = -fadeAmount;
  }
  delay(30);
}
