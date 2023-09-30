////////LED AZUL////////

const int ledPin = 11;
int brillo;
int fade = 1;

////////LED BLANCO/////////

const int ledPin2 = 11;
int brillo2;
int fade2 = 1;

////////PREGUNTA/////////
String Questions;
String r0 = " Si ";
String r1 = " No ";
String r2 = " Millor torna-m'ho a preguntar";
String num = "Quedat amb aquest numero ";

int numRandom;



void setup() {
  // Serial Begin
  Serial.begin(9600);

  //Quan començi l'sketch, Saluda:
  if (Serial) {
    Serial.println("Welcome al Oráculo de Arduino. Pregúntame");
  }

  //declarar los dos leds
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop() {

  if (Serial.available() > 0) {                //MIRA SI HAY ALGUN VALOR MAYOR A CERO = CUALQUIER DATO
    Questions = Serial.readStringUntil('\r');  //LEE HASTA (\n = NUEVA LINEA) (\t = TABULADOR) (\r=ENTER)

    //Serial.println("Tu pregunta: ");
    Serial.println(Questions);
    delay(1000);

    //Tirar un dado entre el 0 y el 2.
    numRandom = random(0, 3);

    //
    if (numRandom == 0) {
      Serial.println(r0);
      digitalWrite(ledPin, HIGH);
      digitalWrite(ledPin2, LOW);
      
    } else if (numRandom == 1) {
      Serial.println(r1);
      digitalWrite(ledPin2, HIGH);
      digitalWrite(ledPin, LOW);

    } else if (numRandom == 2) {
      Serial.println(r2);
      for (int i = 0; i <= 5; i++) {
        digitalWrite(ledPin, HIGH);
          delay(500);
        digitalWrite(ledPin, LOW);
          delay(500);
      }
    }
  }
}
