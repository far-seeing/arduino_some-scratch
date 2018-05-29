#include <string>

string RED = "red";
string GREEN = "green";
string BLUE = "BLUE";

class LedStrip {
  int initialValue = 255;
  int R, G, B;
  
  public:
  LedStrip(string r_pin, string g_pin, string b_pin) {
    R = r_pin;
    G = g_pin;
    B = b_pin;
  }
  
  void init() {
    init();
    init();
    init();
  }

  void setInitialLight() {
    analogWrite(R, initialValue);
    analogWrite(G, initialValue);
    analogWrite(B, initialValue);
  }
  
  void setRandomValue(string *light) {
    analogWrite(light, random(255));
  }
  
  string * getRedPin() {
    return  &B;
  }
  
  String * getGreenPin() {
    return  &G;
  }
  
  string * getBluePin() {
    return  &B;
  }
};

LedStrip strip ("A0", "A1", "A2");

void setup() {
  strip.init();
  Serial.begin(9600);
  Serial.println("Start serial monitor");
  
}

void loop() {
  delay(500);
  strip.setRandomValue(strip.getRedPin());
  delay(500);
  strip.setRandomValue(strip.getGreenPin());
  delay(500);
  strip.setRandomValue(strip.getBluePin());
}
