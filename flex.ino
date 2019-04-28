   //pin 3 has PWM funtion
const int flexPin1 = A0;
const int flexpin2=A1;
const int flexpin3=A2;
const int flexpin4=A3; 
 const int pipin1=7;
  const int pipin2=8;
  const int pipin3=2;
  const int pipin4=4;
//Variables:
int value1;
int value2;
int value3;
int value4;

//save analog value
int x,y,z,w;

void setup(){
  
 //Set pin 3 as 'output'
  Serial.begin(9600);       //Begin serial communication

}

void loop(){
  
  value1 = analogRead(flexPin1);
  value2=analogRead(flexpin2);
  
  value3=analogRead(flexpin3);
  value4=analogRead(flexpin4);
  //Read and save analog value from potentiometer
                 //Print value
  value1 = map(value1, 700, 900, 0, 255);
  value2=map(value2,700,900,0,255);
    value3=map(value3,700,900,0,255);
      value4=map(value4,700,900,0,255);
  
  
  Serial.println(value1);
  Serial.println(value2);
  Serial.println(value3);
  Serial.println(value4);
  if(value1<300)
  {
    //Serial.println(value1);
    digitalWrite(pipin1,LOW);
    x=digitalRead(pipin1);
    Serial.println("pipin1");
    Serial.println(x);
    
  }
  
 //Serial.println(value);
  if(value1>300)
  {
    //Serial.println(value1);
    digitalWrite(pipin1,HIGH);
    
    x=digitalRead(pipin1);
    Serial.println("pipin1");
    Serial.println(x);
    
  }
   
  if(value2<300)
  {
    //Serial.println(value1);
    digitalWrite(pipin2,LOW);
    y=digitalRead(pipin2);
    Serial.println("pipin2");
    Serial.println(y);
    
  }
  
 //Serial.println(value);
  if(value2>300)
  {
    //Serial.println(value1);
    digitalWrite(pipin2,HIGH);
    y=digitalRead(pipin2);
    Serial.println("pipin2");
    Serial.println(y);
    
  }
  delay(1000);
   if(value3<300)
  {
    //Serial.println(value1);
    digitalWrite(pipin3,LOW);
    z=digitalRead(pipin3);
    Serial.println("pipin3");
    Serial.println(z);
    
  }
  
 //Serial.println(value);
  if(value3>300)
  {
    //Serial.println(value1);
    digitalWrite(pipin3,HIGH);
    z=digitalRead(pipin3);
    Serial.println("pipin3");
    Serial.println(w);
    
  }
  delay(1000);
   if(value4<200)
  {
    //Serial.println(value1);
    digitalWrite(pipin4,LOW);
    w=digitalRead(pipin4);
    Serial.println("pipin4");
    Serial.println(x);
    
  }
  
 //Serial.println(value);
  if(value4>300)
  {
    //Serial.println(value1);
    digitalWrite(pipin4,HIGH);
    w=digitalRead(pipin4);
    Serial.println("pipin4");
    Serial.println(x);
    
  }
 
  //Map value 0-1023 to 0-255 (PWM)
  delay(1000);
                                    //Small delay
  
}

