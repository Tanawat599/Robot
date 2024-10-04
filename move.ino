void movefmd(float m4 , float m3)
{
  int motorR = m3 * -1; //mR
  int motorL = m4; //mL
  
  if (motorL >= 100) {
    motorL = 100;
  }
  if (motorR >= 100)
  {
    motorR = 100;
  }
  if (motorL <= -100)
  {
    motorL = -100;
  }
  if (motorR <= -100)
  {
    motorR = -100;
  }

  motor(1, motorL);
  motor(2, motorR);
  motor(3, motorL);
  motor(4, motorR);
}
void moveM(float m1 , float m2)
{
  int motorF = m1 * 1; //mR
  int motorB = m2; //mL
  
  if (motorF >= 100) {
    motorF = 100;
  }
  if (motorB >= 100)
  {
    motorB = 100;
  }
  if (motorF <= -100)
  {
    motorF = -100;
  }
  if (motorB <= -100)
  {
    motorB = -100;
  }

  motor(1, motorF);
  motor(2, motorF);
  motor(3, motorB);
  motor(4, motorB);
}
void turnLeftMD(float m4 , float m3 , float dellay)
{
  movefmd(m4* -1  , m3);
  delay(dellay);
  ao();
}
void turnRightMD(float m4 , float m3 , float dellay)
{
  movefmd(m4, m3 * -1);
  delay(dellay);
  ao();
}
void movetb(float m4 , float m3 , float b4 , float b3 , float dbk)
{
  readsensor();
  while ((sensor_pin[1] < 3000) && (sensor_pin[2] < 3000))
  {
    readsensor();
    movefmd(m4, m3);
  }
  ao();
  delay(200);
  movefmd(b4, b3);
  delay(dbk);
  ao();

}
void movetback(float m4 , float m3 , float b4 , float b3 , float dbk)
{
  readsensor();
  while ((sensor_pin[5] < 3000) && (sensor_pin[6] < 3000))
  {
    readsensor();
    movefmd(m4 * -1, m3 * -1);
  }
  ao();
  delay(200);
  movefmd(b4, b3);
  delay(dbk);
  ao();

}
void movetb2(float m4 , float m3 , float b4 , float b3 , float dbk)
{
  readsensor();
  while ((sensor_pin[1] < 2600) && (sensor_pin[2] < 2600))
  {
    readsensor();
    movefmd(m4, m3);
  }
  ao();
  delay(200);
  movefmd(b4, b3);
  delay(dbk);
  ao();

}
void movetbgreen(float m4 , float m3 , float b4 , float b3 , float dbk)
{
  readsensor();
  while ((sensor_pin[1] < 2100) || (sensor_pin[2] < 2100))
  {
    readsensor();
    movefmd(m4, m3);
  }
  ao();
  delay(100);
  movefmd(b4, b3);
  delay(dbk);
  ao();
  delay(200);
  dropS();
  delay(350);
  closeS();
  ao();
}
void resetBack(float m4 , float m3)
{
  readsensor();
  while ((sensor_pin[5] < 2300) && (sensor_pin[6] < 2300))
  {
    readsensor();
    movefmd(-1 * m4, -1 * m3);
  }
  ao();
  delay(200);
  readsensor();
  while (sensor_pin[4] < 2300)
  {
    readsensor();
    movefmd(m4 * -1 , 0);
  }
  ao();
  delay(200);
  readsensor();
  while (sensor_pin[7] < 2300)
  {
    readsensor();
    movefmd(0 , -1 * m3);
  }
  ao();
}
void resetFront(float m4 , float m3)
{
  readsensor();
  while ((sensor_pin[1] < 2000) && (sensor_pin[2] < 2000))
  {
    readsensor();
    movefmd(m4, m3);
  }
  ao();
  delay(200);
  readsensor();
  while (sensor_pin[0] < 2000)
  {
    readsensor();
    movefmd(m4 , 0);
  }
  ao();
  delay(200);
  readsensor();
  while (sensor_pin[3] < 2000)
  {
    readsensor();
    movefmd(0 , m3);
  }
  ao();
}
void movetbTime(float m4 , float m3 , float timing)
{
long now_times = millis();
  while(millis() - now_times < timing)
  {
    readsensor();
    if((sensor_pin[1] < 2000) && (sensor_pin[2] < 2000))
    {
      readsensor();
      movefmd(m4 , m3);
    }
  }
  ao();
}
void movetbTimebk(float m4 , float m3 , float timing)
{
long now_times = millis();
  while(millis() - now_times < timing)
  {
    readsensor();
    if((sensor_pin[5] < 3000) && (sensor_pin[6] < 3000))
    {
      readsensor();
      movefmd(m4 * -1 , m3 * -1);
    }
  }
  ao();
}
void movetbTimenb(float m4 , float m3 , float timing)
{
long now_times = millis();
  while(millis() - now_times < timing)
  {
      movefmd(m4 , m3);
  }
  ao();
}
void movetbTimebknb(float m4 , float m3 , float timing)
{
long now_times = millis();
  while(millis() - now_times < timing)
  {
    movefmd(m4 * -1 , m3 * -1);
  }
  ao();
}
void movetbTimeRES(float m4 , float m3 , float timing)
{
long now_times = millis();
  while(millis() - now_times < timing)
  {
    readsensor();
    if((sensor_pin[1] < 2000) && (sensor_pin[2] < 2000))
    {
      readsensor();
      movefmd(m4 , m3);
    }
  }
  ao();
}
