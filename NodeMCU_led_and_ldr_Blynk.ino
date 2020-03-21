#define BLYNK_PRINT Serial

#include<BlynkSimpleEsp8266.h>
#include<ESP8266WiFi.h>

char auth[] = "cRgROgMdCXdnv360d6SK_0oT0d5rx5v7";
char ssid[] = "Crystal Rock 11";
char pass[] = "Ambrish11";

BlynkTimer timer;
int led1 = 16;
int led2 = 5;
int led3 = 4;
int led4 = 14;
int ldr = A0;
int led1State;
int led2State;
int led3State;
int led4State;

void ldrsensor()
{
  int ldr_value = analogRead(ldr);
  if(ldr_value<500)
  {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
  }
  else
  {
    digitalWrite(led1,led1State);
    digitalWrite(led2,led2State);
    digitalWrite(led3,led3State);
    digitalWrite(led4,led4State);
  }
}

void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  timer.setInterval(1000, ldrsensor);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(ldr,INPUT);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
}

BLYNK_WRITE(V0)
{
  led1State = param.asInt();
  digitalWrite(led1,led1State);
}

BLYNK_WRITE(V1)
{
  led2State = param.asInt();
  digitalWrite(led2,led2State);
}

BLYNK_WRITE(V2)
{
  led3State = param.asInt();
  digitalWrite(led3,led3State);
}

BLYNK_WRITE(V3)
{
  led4State = param.asInt();
  digitalWrite(led4,led4State);
}

void loop() 
{
  Blynk.run();
  timer.run();
}
