#include <Arduino.h>


const int knap_9 = 3;
const int knap_8 = 4;
const int knap_7 = 5;
const int knap_6 = 6;
const int knap_5 = 7;
const int knap_4 = 8;
const int knap_3 = 9;
const int knap_h = A1;
const int knap_2 = A2;
const int knap_1 = A3;
const int knap_0 = A4;
const int knap_s = 2;
const int knap_p = 10;

void setup() {
  pinMode(knap_9, INPUT_PULLUP);
  pinMode(knap_8, INPUT_PULLUP);
  pinMode(knap_7, INPUT_PULLUP);
  pinMode(knap_6, INPUT_PULLUP);
  pinMode(knap_5, INPUT_PULLUP);
  pinMode(knap_4, INPUT_PULLUP);
  pinMode(knap_3, INPUT_PULLUP);
  pinMode(knap_2, INPUT_PULLUP);
  pinMode(knap_1, INPUT_PULLUP);
  pinMode(knap_0, INPUT_PULLUP);
  pinMode(knap_h, INPUT_PULLUP);
  pinMode(knap_s, INPUT_PULLUP);
  pinMode(knap_p, INPUT_PULLUP);
  Serial.begin(9600);


}

void loop () {

  int knap_9_state = digitalRead(knap_9);
  int knap_8_state = digitalRead(knap_8);
  int knap_7_state = digitalRead(knap_7);
  int knap_6_state = digitalRead(knap_6);
  int knap_5_state = digitalRead(knap_5);
  int knap_4_state = digitalRead(knap_4);
  int knap_3_state = digitalRead(knap_3);
  int knap_2_state = digitalRead(knap_2);
  int knap_1_state = digitalRead(knap_1);
  int knap_0_state = digitalRead(knap_0);
  int knap_h_state = digitalRead(knap_h);
  int knap_s_state = digitalRead(knap_s);
  int knap_p_state = digitalRead(knap_p);


  if (knap_9_state == LOW){
    delay(50);
    Serial.println(4);
    while(!digitalRead(knap_9));
    delay(50);
  }
  if (knap_8_state == LOW){
    delay(50);
    Serial.println(0);
    while(!digitalRead(knap_8));
    delay(50);
  }
  if (knap_7_state == LOW){
    delay(50);
    Serial.println(6);
    while(!digitalRead(knap_7));
    delay(50);
  }
  if (knap_6_state == LOW){
    delay(50);
    Serial.println('#');
    while(!digitalRead(knap_6));
    delay(50);
  }
  if (knap_5_state == LOW){
    delay(50);
    Serial.println(9);
    while(!digitalRead(knap_5));
    delay(50);
  }
  if (knap_4_state == LOW){
    delay(50);
    Serial.println(8);
    while(!digitalRead(knap_4));
    delay(50);
  }
  if (knap_3_state == LOW){
    delay(50);
    Serial.println(5);
    while(!digitalRead(knap_3));
    delay(50);
  }
  if (knap_2_state == LOW){
    delay(50);
    Serial.println(2);
    while(!digitalRead(knap_2));
    delay(50);
  }
  if (knap_1_state == LOW){
    delay(50);
    Serial.println(1);
    while(!digitalRead(knap_1));
    delay(50);
  }
   if (knap_0_state == LOW){
    delay(50);
    Serial.println(5);
    while(!digitalRead(knap_0));
    delay(50);
    
  }
    
   if (knap_h_state == LOW){
    delay(50);
    Serial.println(3);
    while(!digitalRead(knap_h));
    delay(50);
    
  }
   if (knap_s_state == LOW){
    delay(50);
    Serial.println(7);
    while(!digitalRead(knap_s));
    delay(50);
    
  }
   if (knap_p_state == LOW){
    delay(50);
    Serial.println('*');
    while(!digitalRead(knap_p));
    delay(50);
    
  }
  //Serial.println("loop");
  //delay(1000);
}