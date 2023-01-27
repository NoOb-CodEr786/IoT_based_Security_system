#include "ARDUINO.h"
#include "Lcd.h"
#define LCD_ADDRESS 0x27
#define LCD_ROWS 2
#define LCD_COLUMNS 16
#define BACKLIGHT 255
#define led 13
#define buzzer 10

int d=50;
#define SENSOR 11
int val;

void setup() {
  // put your setup code here, to run once:
  pinMode(SENSOR,INPUT);
  pinMode(led,OUTPUT);
  pinMode(buzzer,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  val=digitalRead(SENSOR);
  if(val==0)
  {
    digitalWrite(led,HIGH);
    digitalWrite(buzzer,HIGH);
    Serial.println("DETECTED");
    delay(d);
    
  }
  else
  {
    digitalWrite(led,LOW);
    digitalWrite(buzzer,LOW);
    Serial.println("NOT DETECTED");
    delay(d);
  }

  
}
