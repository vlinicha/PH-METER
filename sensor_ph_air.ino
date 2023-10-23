#include <DFRobot_PH.h>
const int PO  = A0;
float Po = 0;  

void setup() {
  // put your setup code here, to run once:
     pinMode (PO, INPUT); 
     Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
     int nilaiPengukuranPh = analogRead(PO);
     Serial.print("Nilai ADC Ph: ");
     Serial.println(nilaiPengukuranPh);
    double TeganganPh = 5 / 1024.0 * nilaiPengukuranPh;
    Serial.print("TeganganPh: ");
    Serial.println(TeganganPh, 3);
    Serial.print(TeganganPh);
    //Po = 7.00 + ((teganganPh7 - TeganganPh) / PhStep);
    Po = 7.00 + ((2.6 - TeganganPh) / 0.17);
    Serial.print("Nilai PH cairan: ");
    Serial.println(Po, 3);
    Serial.print(Po);
    delay(1000);
}
