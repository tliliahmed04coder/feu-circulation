// C++ code
const int ledRougePin = 6;
const int ledOrangePin = 5;
const int ledVertPin = 4;



void setup()
{
  pinMode(ledVertPin, OUTPUT);
  pinMode(ledOrangePin, OUTPUT);
  pinMode(ledRougePin, OUTPUT);
}



void loop()
{
  for (int i = 0;i<6;i++){
  if (ledRougePin == 6 ){
  digitalWrite(ledRougePin, HIGH);
  delay(2000); // Wait for 1000 millisecond(s)
  digitalWrite(ledRougePin, LOW);
  }
  
  if (ledOrangePin == 5){
  digitalWrite(ledOrangePin, HIGH);
  delay(200); // Wait for 1000 millisecond(s)
  digitalWrite(ledOrangePin, LOW);
  }
  if(ledVertPin == 4){
  digitalWrite(ledVertPin, HIGH);
  delay(2000); // Wait for 1000 millisecond(s)
  digitalWrite(ledVertPin, LOW);
  }
  }
  
}
