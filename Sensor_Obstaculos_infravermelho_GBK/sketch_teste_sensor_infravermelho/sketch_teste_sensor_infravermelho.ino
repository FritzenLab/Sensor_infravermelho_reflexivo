/*
 * Sketch desenvolvido por Clovis Fritzen (www.FritzenLab.com.br)
 * em 14/07/2016 , como parte de um artigo sobre sensores
 * reflexivos infravermelhos com Arduino
 * 
 * 
*/
#define emissor 2 // LED infravermelho
#define led13 13 // LED vermelho pino 13 do Arduino
#define receptor A0 // Fotodiodo ou fototransistor receptor infravermelho

int valorReceptor = 0;  

void setup() {
  
  pinMode(emissor, OUTPUT);
  pinMode(led13, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  
  digitalWrite(emissor, LOW);
  delay(20);
  valorReceptor = analogRead(receptor);
  if (valorReceptor < 600) { //o valor 600 foi obtido experimentalmente
    digitalWrite(led13, HIGH); // Liga o LED 13 caso encontre a fita isolante preta
  } else {
    digitalWrite(led13, LOW); // Desliga o LED 13 caso saia de cima da fita isolante preta 
  }
  delay(100);
  

}
