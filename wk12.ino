const int buttonpin=2;
const int ledpin=13;
void setup() {
  Serial.begin(9600);
  pinMode(buttonpin, INPUT);
  pinMode(ledpin, OUTPUT);
  //digitalWrite(buttonpin,HIGH);
}

void loop() {
  int buttonstate=digitalRead(buttonpin);
  Serial.println(buttonstate);
  delay(1);
  if(buttonstate == HIGH){
    digitalWrite(ledpin,HIGH);
    }else{
      digitalWrite(ledpin,LOW);
      }
}
