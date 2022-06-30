//initializations of all the parameters along with their port numbers wrt arduino board
int LED = 12; 
int BUZZER = 13;
int LPG_sensor = A0;
int LPG_detected; // final output ka variable

 // specify output ports and input ports 
void setup()
{
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(BUZZER, OUTPUT);
  pinMode(LPG_sensor, INPUT);
}

// main functionality of the code where we specify the conditions for the detection
void loop()
{
  // since we have connected analog pin with the ckt it will read it in analog format and give values in binary i.e. 0 and 1
  LPG_detected = analogRead(LPG_sensor);
  Serial.println(LPG_detected);

// if lpg detected ka condition we give as 1 then it is detected
  if (LPG_detected == 1)
  {
        Serial.println("LPG detected!! Take action immediatelyyyy");
    digitalWrite(LED, HIGH);
    digitalWrite(BUZZER, HIGH);
   
  }

  else
  {
  
  
    Serial.println("NO LPG detected!!");
    digitalWrite(LED, LOW);
    digitalWrite(BUZZER, LOW);
  }
  
}
