/////////Library//////////////
#include <Adafruit_NeoPixel.h> 

////////leds//////////
#define PIN        6
#define NUMPIXELS 20
Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);


const int ledPin = 11;
int brillo;
int fade = 1;

String Questions;
String num = "  ";
int numSuerte;

//Meses
int Mesos;
String g = "GENER";
String f = "FEBRER";
String m = "MARÇ";
String a = "ABRIL";
String y = "MAIG";
String j = "JUNY";
String l = "JULIOL";
String ag = "AGOST";
String s = "SETEMBRE";
String o = "OCTUBRE";
String n = "NOVEMBRE";
String d = "DESEMBRE";







void setup() {
  Serial.begin(9600);
  if (Serial) {
    Serial.println("Que dia del año....");
  }
  //pinMode(ledPin, OUTPUT); //// Solo led /////
  pixels.begin(); //// led strip ////
}

void loop() {
  if (Serial.available() > 0) {  //MIRA SI HAY ALGUN VALOR MAYOR A CERO = CUALQUIER DATO
    Questions = Serial.readStringUntil('\r');
    Serial.println(Questions);
    delay(1000);
    pixels.clear(); //// Manten los leds off //// 

    // Un dia del año entre 1 i 31.
    numSuerte = random(0, 32);
    Serial.println(numSuerte);

    // Un mes del año
    Mesos = random(1, 13);
    ////// GENER //////
    if (Mesos == 1) {
      Serial.println(g); 
    
      for(int i=0; i<NUMPIXELS; i++) { 
      pixels.setPixelColor(i, pixels.Color(141, 226, 252));
      pixels.show();
      delay(1000);
      }
    } 
      ///// FEBRER //////
      else if (Mesos == 2) {
      Serial.println(f);

      for(int i=0; i<NUMPIXELS; i++) {
      pixels.setPixelColor(i, pixels.Color(255, 119, 61));
      pixels.show();
      delay(1000);
      } 
    } 
      ///// MARÇ //////
      else if (Mesos == 3) {
      Serial.println(m);
      
      for(int i=0; i<NUMPIXELS; i++) { 
      pixels.setPixelColor(i, pixels.Color(166, 255, 167));
      pixels.show();
      delay(1000);
      } 
    } 
      ///// ABRIL //////
      else if (Mesos == 4) {
      Serial.println(a);

      for(int i=0; i<NUMPIXELS; i++) { 
      pixels.setPixelColor(i, pixels.Color(134, 252, 70));
      pixels.show();
      delay(1000);
      } 
    } 
      ///// MAIG //////
      else if (Mesos == 5) {
      Serial.println(y);

      for(int i=0; i<NUMPIXELS; i++) {
      pixels.setPixelColor(i, pixels.Color(206, 245, 15));
      pixels.show();
      delay(1000);
      } 
    } 
      ///// JUNY //////
      else if (Mesos == 6) {
      Serial.println(j);

      for(int i=0; i<NUMPIXELS; i++) {
      pixels.setPixelColor(i, pixels.Color(255, 245, 0));
      pixels.show();
      delay(1000);
      } 
    } 
      ///// JULIOL //////
      else if (Mesos == 7) {
      Serial.println(l);

      for(int i=0; i<NUMPIXELS; i++) {
      pixels.setPixelColor(i, pixels.Color(252, 217, 51));
      pixels.show();
      delay(1000);
      } 
    } 
      ///// AGOST //////
      else if (Mesos == 8) {
      Serial.println(ag);

      for(int i=0; i<NUMPIXELS; i++) {
      pixels.setPixelColor(i, pixels.Color(252, 103, 13));
      pixels.show();
      delay(1000);
      } 
    } 
      ///// SETEMBRE //////
      else if (Mesos == 9) {
      Serial.println(s);

      for(int i=0; i<NUMPIXELS; i++) {
      pixels.setPixelColor(i, pixels.Color(161, 66, 0));
      pixels.show();
      delay(1000);
      } 
    } 
      ///// OCTUBRE //////
      else if (Mesos == 10) {
      Serial.println(o);

      for(int i=0; i<NUMPIXELS; i++) {
      pixels.setPixelColor(i, pixels.Color(75, 88, 105));
      pixels.show();
      delay(1000);
      } 
    } 
      ///// NOVEMBRE //////
      else if (Mesos == 11) {
      Serial.println(n);

      for(int i=0; i<NUMPIXELS; i++) {
      pixels.setPixelColor(i, pixels.Color(117, 65, 39));
      pixels.show();
      delay(1000);
      } 
    } 
      ///// DESEMBRE //////
      else if (Mesos == 12) {
      Serial.println(d);

      for(int i=0; i<NUMPIXELS; i++) {
      pixels.setPixelColor(i, pixels.Color(58, 54, 250));
      pixels.show();
      delay(1000);
      } 
    }

    /*if (Questions) {
      digitalWrite(ledPin, HIGH);
      delay(2000);
      digitalWrite(ledPin, LOW);
      delay(5000);
    }*/ 

    delay(1500);
  }
}
