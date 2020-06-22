void setup()
{
  pinMode(2, OUTPUT);// the output signal form arduino
}

void loop()
{
  digitalWrite(2, HIGH); //the the motor will move counter clockwise
  delay(5000); 
  digitalW2000rite(2, LOW);
  delay(3000); //the the motor will move clockwise
}
