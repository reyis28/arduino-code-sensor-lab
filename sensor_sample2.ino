int mq = A0;
int x;
void setup() {
  
pinMode( A0, INPUT);
Serial.begin(9600);
}

void loop() {
  if (x=analogRead(A0))
  {
 
 Serial.println(x);
  }
  

delay(500);

}
