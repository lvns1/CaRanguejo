#include "BluetoothSerial.h"

BluetoothSerial SerialBT;

#define IN1 27
#define IN2 26
#define IN3 25
#define IN4 33

#define ENA 13
#define ENB 32

char comando;
int velocidade = 180; // começa na média

void setup() {
  Serial.begin(115200);
  SerialBT.begin("CaRanguejo");

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  ledcAttach(ENA, 1000, 8);
  ledcAttach(ENB, 1000, 8);

  parar();
}

void loop() {

  if (SerialBT.available()) {

    comando = SerialBT.read();

    Serial.print("Recebi: ");
    Serial.println(comando);

    // VELOCIDADES
    if (comando == '1') {
      velocidade = 140;
      Serial.println("lento");
    }

    else if (comando == '2') {
      velocidade = 180;
      Serial.println("medio");
    }

    else if (comando == '3') {
      velocidade = 255;
      Serial.println("rapido");
    }

    // MOVIMENTOS
    else if (comando == 'F') {
      frente();
    }

    else if (comando == 'T') {
      tras();
    }

    else if (comando == 'E') {
      esquerda();
    }

    else if (comando == 'D') {
      direita();
    }

    else if (comando == 'S') {
      parar();
    }
  }
}

void frente() {

  ledcWrite(ENA, velocidade);
  ledcWrite(ENB, velocidade);

  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void tras() {

  ledcWrite(ENA, velocidade);
  ledcWrite(ENB, velocidade);

  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void direita() {

  ledcWrite(ENA, velocidade);
  ledcWrite(ENB, velocidade);

  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void esquerda() {

  ledcWrite(ENA, velocidade);
  ledcWrite(ENB, velocidade);

  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void parar() {

  ledcWrite(ENA, 0);
  ledcWrite(ENB, 0);

  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}
