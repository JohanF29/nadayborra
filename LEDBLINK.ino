                                                                                           void setup() {
  // put your setup code here, to run once:

pinMode(LED_BUILTIN, OUTPUT);

}

void loop() {

  //int i;
  // put your main code here, to run repeatedly:
for(int i=1;i<=10;i++)
{
   
   digitalWrite(13, HIGH);
   delay(1000);
   digitalWrite(13, LOW);
   delay(1000); 
}

for(int i=1;i<=1000;i++)
{
digitalWrite(13, HIGH);
delay(10);
digitalWrite(13, LOW);
delay(100);
}



digitalWrite(13, HIGH);
delay(10000);
//digitalWrite(13, LOW);

//delay(1000);
}
