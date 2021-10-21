/*=======================================================================
  Conteúdo completo e detalhado no link: 
  https://elcereza.com/sensor-ultrassonico-com-arduino/

  Site  : https://elcereza.com/
  
  Autor : Gustavo Cereza
  Disponibilizado por : Elcereza
  Redes : @ellcereza
  Canal Telegram : https://t.me/elcereza
=======================================================================*/

#include <Elcereza_HCSR04.h>

#define TRIGGER_PIN  4                                                            
#define ECHO_PIN     5  

HCSR04 u(ECHO_PIN, TRIGGER_PIN);

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println("Distância: " + String(u.getcm()) + "cm");
  delay(1000);
}
