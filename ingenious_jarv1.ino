// C++ code

// Define the pin for the buzzer
const int buzzerPin = 8;

// Define LED pins
const int ledPins[] = {9, 10, 11, 12}; // Array to hold LED pins

// Define the tone frequencies and delays
const int frequencies[] = {440, 494, 523, 587}; // Frequências para cada LED
const int delays[] = {100, 200, 300, 400}; // Atrasos para cada LED

void setup() {
  // Define os pinos dos LEDs como OUTPUT
  for (int i = 0; i < 4; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
  pinMode(buzzerPin, OUTPUT); // Define o pino do buzzer como OUTPUT
}

void loop() {
  // Loop para percorrer todos os LEDs e tons
  for (int i = 0; i < 4; i++) {
    digitalWrite(ledPins[i], HIGH); // Acende o LED
    tone(buzzerPin, frequencies[i]); // Toca o tom correspondente
    delay(delays[i]); // Aguarda o tempo especificado
    digitalWrite(ledPins[i], LOW); // Apaga o LED
    noTone(buzzerPin); // Para o som
    delay(30); // Pequeno intervalo entre as ações
  }
}