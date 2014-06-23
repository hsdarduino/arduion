//数字端口必须接在3上
//红外发射实验测试程序
#include <IRremote.h>
//numArray[]={0x23448B7,0x234906F,0x234B847,ox234F807,0x234B04F,0x2349867,0x234D827,0x2348877,0x234A857,0x234E817};

IRsend irsend;


void setup()
{
  pinMode(3,OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
    irsend.sendNEC(0x23448B7,  HEX); // 发送数字电视机顶盒遥控器上的数字0
  Serial.println('0x23448B7');
  delay(3000);
}

