void setup() 
{
  pinMode(13, OUTPUT);//用13管脚测试
}

void loop() 
{
  //使LED以60Hz闪烁
  digitalWrite(13, HIGH);  
  delay(16);             
  digitalWrite(13, LOW);   
  delay(16);             
}
