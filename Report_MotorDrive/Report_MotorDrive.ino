int m1d1 = 2;
int m1a = 3;
int m1d2 = 4;
int m2a = 5;
int m2d2 = 6;
int m2d1  = 7;
int m3d1 = 8;
int m3d2 = 9;
int m3a  = 10;
int val = 0;
int led = 13;

void setup() {
  pinMode(m1d1,OUTPUT);
  pinMode(m1d2,OUTPUT);
  pinMode(m1a,OUTPUT);
  pinMode(m2d1,OUTPUT);
  pinMode(m2d2,OUTPUT);
  pinMode(m2a,OUTPUT);
  pinMode(m3d1,OUTPUT);
  pinMode(m3d2,OUTPUT);
  pinMode(m3a,OUTPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  if(Serial.available()>0){
    val = Serial.read();
    Serial.println(val);
    if(val == '1');{
      digitalWrite(m1d1,HIGH);
      digitalWrite(m1d2,LOW);
      analogWrite(m1a,255);//3
    }
    if(val=='2'){
       digitalWrite(m2d1,HIGH);
       digitalWrite(m2d2,LOW);
       analogWrite(m2a,255);//5
    }
     if(val=='3')
       digitalWrite(m3d1,HIGH);
       digitalWrite(m3d2,LOW);
       analogWrite(m3a,255);//10
 
  
  // put your main code here, to run repeatedly:
  }
}
