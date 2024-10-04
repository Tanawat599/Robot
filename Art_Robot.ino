#include <POP32.h>
uint8_t Unit_sensor = 8;
int x = 50;
int count = 0;
int target;

void setup()
{
  Serial.begin(9600);
  waitSW_OK();
  delay(500);
  beep();
  
  movetb(70 , 70 , -40 , -40 , 310);
  delay(x);
  turnLeftMD(65 , 65 , 300);
  delay(x);
  resetBack(40 , 40);//ริมขอบ
  delay(x);
  movetb(70 , 70 , -40 , -40 , 300);
  delay(x);
  turnRightMD(65 , 65 , 300);
  delay(x);
  resetBack(40 , 40);//ริมขอบ
  delay(x);
  movetbTimenb(50 , 50 , 2800); //chopstik
  delay(x);
  movetb(70 , 70 , -40 , -40 , 250);
  delay(x);
  turnLeftMD(65 , 65 , 290);
  delay(x);
  movetbgreen(70 , 70 , -25 , -25 , 300); //drop
  delay(x);
  movetbTimebk(50 , 50 , 400); //---
  delay(x);
  turnLeftMD(65 , 65 , 300);
  delay(x);
  resetBack(40 , 40);
  delay(x);
  movetbTime(70 , 70 , 620);
  delay(x);
  turnLeftMD(65 , 65 , 300);
  delay(x);
  movetbgreen(70 , 70 , -25 , -25 , 300); //drop
  delay(x);
  
  movetbTimebk(50 , 50 , 400);
  delay(x);
  turnRightMD(65 , 65 , 600);
  delay(x);
  resetBack(40 , 40);
  delay(x);
  movetb(70 , 70 , -40 , -40 , 260);
  delay(x);
  turnLeftMD(65 , 65 , 300);
  delay(x);
  resetBack(25 , 25);
  delay(x);
  movetbTime(70 , 70 , 1000);
  delay(x);
  turnLeftMD(65 , 65 , 300);
  delay(x);
  resetBack(25 , 25);
  delay(x);
  movetbTime(25 , 25 , 300);
  delay(x);
  turnRightMD(65 , 65 , 300);
  delay(x);
  movetbTime(70 , 70 , 1000);
  delay(x);
  turnLeftMD(65 , 65 , 300);
  delay(x);
  resetBack(25 , 25);
  delay(x);
  movetbTime(25 , 25 , 300);
  delay(x);
  turnRightMD(65 , 65 , 300);
  delay(x);
  movetb(70 , 70 , -40 , -40 , 300);
  delay(x);
  turnLeftMD(65 , 65 , 300);
  delay(x);
  resetBack(40 , 40);
  delay(x);
  
  movetbgreen(70 , 70 , -25 , -25 , 300); //drop
  delay(x);
  movetback(70 , 70 , -25 , -25 , 0);
  delay(x);
  movetbTime(70 , 70 , 300);
  delay(x);
  turnLeftMD(65 , 65 , 300);
  delay(x);
  movetback(70 , 70 , -25 , -25 , 0);
  delay(x);
  movetbTime(70 , 70 , 1500);
  delay(x);
  turnRightMD(65 , 65 , 300);
  delay(x);
  resetBack(40 , 40);
  delay(x);
  movetbgreen(70 , 70 , -25 , -25 , 300); //drop
  delay(x);
  movetback(70 , 70 , -25 , -25 , 0);
  delay(x);
  movetbTime(25 , 25 , 300);
  delay(x);
  turnLeftMD(65 , 65 , 300);
  delay(x);
  movetb(70 , 70 , -40 , -40 , 250);
  delay(x);
  turnRightMD(65 , 65 , 300);
  delay(x);
  resetBack(40 , 40);
  delay(x);
  movetbTime(70 , 70 , 800);
  delay(x);
  turnRightMD(65 , 65 , 300);
  delay(x);
  movetbTimenb(50 , 50 , 2000); //chopstik
  delay(x);
  movetb(70 , 70 , -40 , -40 , 250);
  delay(x);
  turnLeftMD(65 , 65 , 300);
  delay(x);
  resetBack(40 , 40);
  delay(x);
  movetb(70 , 70 , -40 , -40 , 250);
  delay(x);
  turnRightMD(65 , 65 , 300);
  delay(x);
  resetBack(40 , 40);
  delay(x);
  movetbTime(70 , 70 , 1000);
  delay(x);
  
  /*
  movetbTimenb(70 , 70 , 500);// 4BLOCK
  movetbTimenb(100 , 100 , 500);
  movetb(70 , 70 , -40 , -40 , 310);
  delay(x);
  turnRightMD(65 , 65 , 300);
  delay(x);
  resetBack(40 , 40);
  delay(x);
  movetbTimenb(100 , 100 , 400);
  movetb(70 , 70 , -40 , -40 , 310);
  turnRightMD(65 , 65 , 300);
  delay(x);
  resetBack(40 , 40);//ริมขอบ
  delay(x);
  movetbTimenb(100 , 100 , 900);
  movetbgreen(70 , 70 , -25 , -25 , 300); //drop
  delay(x);
  turnLeftMD(65 , 65 , 570);
  delay(x);
  
  movetbTimenb(100 , 100 , 200);
  movetbTimenb(70 , 70 , 600);

  delay(x);
  turnRightMD(65 , 65 , 300);
  delay(x);
  resetBack(40 , 40);
  delay(x);
  movetb(70 , 70 , -40 , -40 , 310);
  delay(x);
  turnLeftMD(65 , 65 , 300);
  delay(x);
  
  movetbgreen(70 , 70 , -25 , -25 , 300); //drop
  delay(x);
  turnRightMD(65 , 65 , 600);
  delay(x);
  movetbTimenb(70 , 70 , 300);
  delay(x);
  resetBack(40 , 40);
  delay(x);
  movetbTimenb(70 , 70 , 1400);
  delay(x);
  turnRightMD(65 , 65 , 620);//check point
  delay(x);
  movetbTimenb(70 , 70 , 1050);
  delay(x);
  turnLeftMD(65 , 65 , 300);
  delay(x);
  resetBack(40 , 40);
  delay(x);
  movetbTimenb(70 , 70 , 700);
  delay(x);
  turnLeftMD(65 , 65 , 300);
  delay(x);
  movetb(70 , 70 , -40 , -40 , 310); //bridge
  delay(x);
  turnRightMD(65 , 65 , 300);
  delay(x);
  movetb(70 , 70 , -40 , -40 , 310);
  delay(x);
  turnLeftMD(65 , 65 , 300);
  delay(x);
  resetBack(40 , 40);
  delay(x); //leave bridge
  movetbTimenb(70 , 70 , 1300);
  delay(x);
  turnLeftMD(65 , 65 , 300);
  delay(x);
  resetBack(40 , 40);
  delay(x);
  movetb(70 , 70 , -40 , -40 , 310);
  delay(x);
  turnRightMD(65 , 65 , 300);
  delay(x);
  resetBack(40 , 40);
  delay(x);
  movetbTimenb(70 , 70 , 600);
  delay(x);
  turnRightMD(65 , 65 , 570); //check point
  delay(x);
  movetb(70 , 70 , -40 , -40 , 310);
  delay(x);
  turnLeftMD(65 , 65 , 300);
  delay(x);
  resetBack(40 , 40);
  delay(x);
  movetbTimenb(70 , 70 , 950);
  delay(x);
  turnLeftMD(65 , 65 , 300);
  delay(x);
  resetBack(40 , 40);
  delay(x);
  
  movetbgreen(70 , 70 , -25 , -25 , 300); //drop
  delay(x);
  
  resetBack(40 , 40);
  delay(x);
  movetbTimenb(70 , 70 , 200);
  delay(x);
  turnRightMD(65 , 65 , 300);
  delay(x);
  movetb(70 , 70 , -40 , -40 , 310);
  delay(x);
  turnRightMD(65 , 65 , 300);
  delay(x);
  movetbTimenb(70 , 70 , 550);
  delay(x);
  turnRightMD(65 , 65 , 300);
  delay(x);
  resetBack(40 , 40);
  delay(x);
  movetbTimenb(50 , 50 , 1000); //chopstick
  delay(x);
  movetbgreen(70 , 70 , -25 , -25 , 300); //drop
  delay(x);
  movetbTimebknb(50 , 50 , 1100); //chopstick
  delay(x);
  movetback(70 , 70 , -25 , -25 , 0);
  delay(x);
  movetbTimenb(70 , 70 , 300);
  delay(x);
  resetBack(40 , 40);
  delay(x);
  movetbTimenb(70 , 70 , 300);
  delay(x);
  turnLeftMD(65 , 65 , 300);
  delay(x);
  movetb(70 , 70 , -40 , -40 , 310);
  delay(x);
  turnRightMD(65 , 65 , 300);
  delay(x);
  resetBack(40 , 40);
  delay(x);
  movetb(70 , 70 , -40 , -40 , 310);
  delay(x);
  turnLeftMD(65 , 65 , 300);
  delay(x);
  resetBack(40 , 40);
  delay(x);
  movetb(70 , 70 , -40 , -40 , 310);
  delay(x);
  turnLeftMD(65 , 65 , 300);
  delay(x);
  movetb(70 , 70 , -40 , -40 , 310);
  delay(x);
  turnRightMD(65 , 65 , 300);
  delay(x);
  movetb(70 , 70 , -40 , -40 , 310);
  delay(x);
  turnLeftMD(65 , 65 , 300);
  delay(x);
  movetb(70 , 70 , -40 , -40 , 310);
  delay(x);
  turnLeftMD(65 , 65 , 300);
  delay(x);
  movetb(70 , 70 , -40 , -40 , 310);
  delay(x);
  */
  //resetFront(20 , 20);
  //turnRightMD(30 , 30 , 300);
  //delay(1000);
  //turnLeftMD(30 , 30 , 300);
  //movetb(30 , 30 , -25 , -25 , 300);
  //movetbgreen(30 , 30 , -25 , -25 , 170);
  //resetBack(20 , 20);
  //turnLeftMD(30 , 30 , 515);
 
  ao();
  delay(200);
  beep();
 
}
void loop()
{
  //movef(-20,20);
  //PD_move(0.055 , 0 , 0.7 , 40); //check
  //position1();
  //view();
  //PD_move(0.017 , 0 , 0 , 40);
  //Serial.println(analog(8));
  //Serial.println(position1());
}
