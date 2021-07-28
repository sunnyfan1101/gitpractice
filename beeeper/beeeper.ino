#define pin 4
int frequency[7]={262,294,330,369,415,466,523};
void setup() {
  // put your setup code here, to run once:
pinMode(pin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<7;i++)
  {
    tone(pin,frequency[i]);
    delay(100);
    noTone(pin);
  }
}
