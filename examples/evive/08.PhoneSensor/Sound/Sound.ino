/*
  Sound sensor gives decibal value of sound that is sensed by your mobile's microphone.
  Explore more on: https://thestempedia.com/docs/dabble/phone-sensors-module/
 */
#define CUSTOM_SETTINGS
#define INCLUDE_SENSOR_MODULE
#include <evive.h>
#include <Dabble.h>  

void setup() {
  Serial.begin(250000);
  Dabble.begin(115200);    //Enter baudrate of your bluetooth.Connect bluetooth on Bluetooth port present on evive.
}

void loop() {
  Dabble.processInput();             //this function is used to refresh data obtained from smartphone.Hence calling this function is mandatory in order to get data properly from your mobile.
  print_Sound_data();
}

void print_Sound_data()
{
  Serial.print("SOUND: ");
  Serial.println(Sensor.getdata_Sound(),3);
  Serial.println();
}



