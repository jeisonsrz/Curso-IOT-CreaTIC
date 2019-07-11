int LED=10;
int Button=6;
int Buzzer=5;
boolean state= true;

void setup()
{
    Serial.begin(9600);
   pinMode(LED,OUTPUT);
   pinMode(Button,INPUT);
       
}

void loop()
{
state = digitalRead(Button);
Serial.print(digitalRead(Button));

if(state=!true)
{
digitalWrite(LED,HIGH);  
digitalWrite(Buzzer,HIGH);
}
else
{
digitalWrite(LED,LOW);
digitalWrite(Buzzer,LOW);
}

    
}