#include <FlexiTimer2.h >

void flash() 
{
  i++;
  if(i==50)
  {
    digitalWrite(13,HIGH);
    i=0;
  }
  else
  {digitalWrite(13,LOW);}
}

void setup() 
{
  int i=0;
  pinMode(13, OUTPUT); 
  //两种中断计时方式
  //void set(unsigned long ms, void (*f)());
  //void set(unsigned long units, double resolution, void (*f)());
  FlexiTimer2::set(100, 1.0/1000,flash); //
  FlexiTimer2::start();
}

void loop() 
{
  
}
