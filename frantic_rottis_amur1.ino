#define N1 7
#define N2 6
#define N3 5
#define N4 4
int left_motor1 = 7;      
int left_motor2 = 6;      
int right_motor1  =5;      
int right_motor2 = 4;
char reading;
void setup()
{
  Serial.begin(9600);
  for (int i=4;i<=7;i++)
  { pinMode(i,OUTPUT);}
  pinMode(left_motor1, OUTPUT);
  pinMode(left_motor2, OUTPUT);
  pinMode(right_motor1, OUTPUT);
  pinMode(right_motor2, OUTPUT);
}

void loop()
{
 if (Serial.available()>0)
 {
   reading=Serial.read();
   switch (reading)
   {
     case'F': digitalWrite(N1,HIGH);
              digitalWrite(N2,LOW);
              digitalWrite(N3,HIGH);
              digitalWrite(N4,LOW);
     break;
     case'B': digitalWrite(N1,LOW);
              digitalWrite(N2,HIGH);
              digitalWrite(N3,LOW);
              digitalWrite(N4,HIGH);
     break;
     case'R': digitalWrite(N1,HIGH);
              digitalWrite(N2,LOW);
              digitalWrite(N3,LOW);
              digitalWrite(N4,LOW);
     break;
     case'L': digitalWrite(N1,LOW);
              digitalWrite(N2,LOW);
              digitalWrite(N3,HIGH);
              digitalWrite(N4,LOW);
     break;
      case'S': digitalWrite(N1,LOW);
              digitalWrite(N2,LOW);
              digitalWrite(N3,LOW);
              digitalWrite(N4,LOW);
     break;
   }
 }
     
     
     
}
