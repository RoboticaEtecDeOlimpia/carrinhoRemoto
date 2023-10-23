
#define CUSTOM_SETTINGS
#define INCLUDE_GAMEPAD_MODULE
#include <Dabble.h>
//verificar ligações de acordo com carrinho.
#define INT1 12
#define INT2 11
#define INT3 10
#define INT4 9

void setup() {
   
   Serial.begin(250000);
   Serial.println("incia");
  
  
  Dabble.begin(9600,7,6);  
  pinMode(INT1,OUTPUT);
  pinMode(INT2,OUTPUT);
  pinMode(INT3,OUTPUT);                                                                    
  pinMode(INT4,OUTPUT);


}

void loop() {
     
Dabble.processInput();          
   
if(GamePad.isUpPressed())
{
 digitalWrite(INT1,LOW);
  digitalWrite(INT2,HIGH);
  digitalWrite(INT3,HIGH);
  digitalWrite(INT4,LOW);
 Serial.println("andar");
 para();
}
if(GamePad.isDownPressed())
{
  digitalWrite(INT1,HIGH);
  digitalWrite(INT2,LOW);
  digitalWrite(INT3,LOW);
  digitalWrite(INT4,HIGH);
 Serial.println("andando de ré");
  para();
}

if(GamePad.isLeftPressed())
{
 digitalWrite(INT1,HIGH);
  digitalWrite(INT2,LOW);
  digitalWrite(INT3,HIGH);
  digitalWrite(INT4,LOW);
 Serial.println("virando esquerda");
  para();
}
if(GamePad.isRightPressed())
{
  digitalWrite(INT1,LOW);
  digitalWrite(INT2,HIGH);
  digitalWrite(INT3,LOW);
  digitalWrite(INT4,HIGH);  

 Serial.println("virando para direita");
  para();
}


}
void para() {
  digitalWrite(INT1,LOW);
  digitalWrite(INT2,LOW);
  digitalWrite(INT3,LOW);
  digitalWrite(INT4,LOW);  
}
   
