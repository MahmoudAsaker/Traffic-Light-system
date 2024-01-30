int red=9;
int yellow=10;
int green=11;

int on =500; //delay
int off =500; //delay

void setup (){
  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(green,OUTPUT);

}
void loop (){
digitalWrite(red,HIGH);
delay(2000);
digitalWrite(yellow,HIGH);
delay(on);
digitalWrite(yellow,LOW);
delay(off);
digitalWrite(yellow,HIGH);
delay(on);
digitalWrite(yellow,LOW);
delay(off);
digitalWrite(yellow,HIGH);
delay(on);
digitalWrite(yellow,LOW);
delay(off);
digitalWrite(red,LOW);
digitalWrite(green,HIGH);
delay(2000);
digitalWrite(green,LOW);
}