int greenled=0;
int yellowled=8;
int redled=12;

void setup()
{
  pinMode(greenled, OUTPUT);
  pinMode (yellowled, OUTPUT);
  pinMode (redled,OUTPUT);
 
}

void loop()
{ 
  digitalWrite (greenled,HIGH);
  delay (7000);
  digitalWrite (greenled,LOW );
  digitalWrite( yellowled,HIGH);
  delay (5000);
  digitalWrite(yellowled,LOW);
  digitalWrite (redled,HIGH);
  delay(9000);
  digitalWrite (redled,LOW);
  digitalWrite (yellowled,LOW);
 
}

