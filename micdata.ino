#define IN1 35    //alias
float avg(float value);  //function declaration

void setup() 
{
  // put your setup code here, to run once:
pinMode(IN1,INPUT);                       //initialization
Serial.begin(19200);
}

void loop() 
{
  // put your main code here, to run repeatedly:

Serial.println(avg(analogRead(IN1)));
}

float avg(float value)
{
 volatile static int maxvalue=50;
 volatile float advalue;
 volatile static float store1[]={0,0,0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0,0,0};
 volatile static float aver;
 volatile static int i;
 advalue=value;
 if(i==maxvalue)
 {
  i=0;
 }
aver-=store1[i];
store1[i]=advalue;
aver+=advalue;
i++;
return (aver/(float)maxvalue);
}
