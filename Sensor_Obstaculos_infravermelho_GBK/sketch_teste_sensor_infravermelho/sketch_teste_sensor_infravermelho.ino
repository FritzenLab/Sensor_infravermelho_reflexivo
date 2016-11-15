/*
 * Este sketch serve para encontrar os valores
 * analógicos de reflectância de uma determinada superfície,
 * através da aplicação de luz infravermelha e leitura
 * da quantidade de luz refletida, através de um sensor 
 * infravermelho (fotodiodo ou fototransistor)
 * ** Os valores encontrados são impressos no terminal serial **
 *  
 * Sketch desenvolvido por Clovis Fritzen (www.FritzenLab.com.br)
 * em 15/11/2016 , como parte de um artigo sobre sensores
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
  digitalWrite(emissor, LOW);
  Serial.begin(115200);

}

void loop() {
  
  valorReceptor = analogRead(receptor);
  Serial.print("valor analogico recebido= ");
  Serial.println(valorReceptor);
  
  delay(500);
  

}
