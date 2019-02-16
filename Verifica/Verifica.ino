int rosso = 12;
int giallo = 6;
int bianco = 8;
int verde = 10;
int trossogiallo = 0;
int tbiancoverde = 0;

void setup() {
  // put your setup code here, to run once:
pinMode(rosso,OUTPUT);
pinMode(giallo,OUTPUT);
pinMode(bianco,OUTPUT);
pinMode(verde,OUTPUT);
TempoRossoGiallo();
TempoBiancoVerde();

}

void loop() {
  // put your main code here, to run repeatedly:
 digitalWrite(bianco,LOW);
 digitalWrite(verde,LOW);
 digitalWrite(rosso,HIGH);
 digitalWrite(giallo,HIGH);
 delay(trossogiallo);
 digitalWrite(bianco,HIGH);
 digitalWrite(verde,HIGH); 
 digitalWrite(rosso,LOW);
 digitalWrite(giallo,LOW);
 delay(tbiancoverde);
}


void TempoRossoGiallo()
{
  Serial.begin(9600);
  Serial.println("Quanto durano il rosso e il giallo(in millisecondi)?");
  while(Serial.available()==0){};
  trossogiallo = Serial.readString().toInt();
}

void TempoBiancoVerde()
{
  Serial.begin(9600);
  Serial.println("Quanto durano il bianco e il verde(in millisecondi)?");
  while(Serial.available()==0){};
  tbiancoverde = Serial.readString().toInt();
}





