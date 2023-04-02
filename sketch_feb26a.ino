void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
pinMode(11,OUTPUT);
pinMode(10,OUTPUT);
pinMode(9,OUTPUT);
pinMode(8,OUTPUT);
pinMode(7,OUTPUT);

Serial.begin(9600);
}
int index=0;
String number[]={"0000001","1001111","0010010","0000110","1001100","0100100","0100000","0001111","0000000","0000100"};
void loop() {
  // put your main code here, to run repeatedly:
  int counter=0;
  
  for(int i=13;i>=7;i--){
  digitalWrite(i,String(number[index][counter]).toInt());
  counter++;  
  }
  delay(1000);
index++;
  if(index==10)
  {
    index=0;
    }


}
