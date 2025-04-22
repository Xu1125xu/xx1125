const int potPin = A0;    // 可變電阻接腳
const int ledPin = 9;     // LED接腳（支援PWM）

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int potValue = analogRead(potPin);            // 讀取可變電阻值（0~1023）
  int brightness = map(potValue, 0, 1023, 0, 255); // 對應到PWM亮度範圍
  analogWrite(ledPin, brightness);              // 設定LED亮度
  delay(10); // 小延遲讓變化更平滑
}
