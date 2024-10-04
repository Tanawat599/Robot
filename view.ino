void view() 
{
  for (uint8_t i = 0; i < Unit_sensor; i++)
  {
    readsensor();
    Serial.print(sensor_pin[i]);
    Serial.print(" ");
  }
//  Serial.print(position1());
    Serial.println('\t');
//  Serial.println(analog(5));
//  Serial.println(" ");
//  delay(200);
}
//----------------------------------------------------
void readsensor() {
  sensor_pin[0] = analog(0);
  sensor_pin[1] = analog(1);
  sensor_pin[2] = analog(2);
  sensor_pin[3] = analog(3);
  sensor_pin[4] = analog(4);
  sensor_pin[5] = analog(5);
  sensor_pin[6] = analog(6);
  sensor_pin[7] = analog(7);
}
