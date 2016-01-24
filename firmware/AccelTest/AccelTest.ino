/*
 Accelerometer Test
 Nathan Seidle
 SparkFun Electronics
 2/23/2013

 License: This code is public domain but you buy me a beer if you use this and we meet someday (Beerware license).

 Used to test the accelerometer

 */

#include <Wire.h> // Used for I2C


void setup()
{
  //By default .begin() will set I2C SCL to Standard Speed mode of 100kHz
  //Wire.setClock(400000); //Optional - set I2C SCL to High Speed Mode of 400kHz
  Wire.begin(); //Join the bus as a master

  Serial.begin(57600);
  Serial.println("Accel test");

  initMMA8452(); //Test and intialize the MMA8452
}

void loop()
{
  float currentMagnitude = getAccelData();

  Serial.print("Accel: ");
  Serial.println(currentMagnitude, 2);

  delay(10);
}



