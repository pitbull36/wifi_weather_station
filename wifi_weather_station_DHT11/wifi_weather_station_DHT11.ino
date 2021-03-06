/*
   -- New project --
   
   This source code of graphical user interface 
   has been generated automatically by RemoteXY editor.
   To compile this code using RemoteXY library 2.4.3 or later version 
   download by link http://remotexy.com/en/library/
   To connect using RemoteXY mobile app by link http://remotexy.com/en/download/                   
     - for ANDROID 4.5.1 or later version;
     - for iOS 1.4.1 or later version;
    
   This source code is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.    
*/

//////////////////////////////////////////////
//        RemoteXY include library          //
//////////////////////////////////////////////

// RemoteXY select connection mode and include library 
#define REMOTEXY_MODE__ESP8266_HARDSERIAL_POINT

#include <RemoteXY.h>
#include <dht.h>
dht DHT;

#define DHT11_PIN 7

#include <RemoteXY.h>

// RemoteXY connection settings 
#define REMOTEXY_SERIAL Serial
#define REMOTEXY_SERIAL_SPEED 115200
#define REMOTEXY_WIFI_SSID "Weather_Station"
#define REMOTEXY_WIFI_PASSWORD "solopernoi"
#define REMOTEXY_SERVER_PORT 6377


// RemoteXY configurate  
#pragma pack(push, 1)
uint8_t RemoteXY_CONF[] =
  { 255,0,0,32,0,104,0,10,24,0,
  66,130,64,6,23,18,20,26,66,132,
  69,11,13,10,20,24,68,50,3,31,
  94,30,8,2,166,84,101,109,112,101,
  114,97,116,117,114,101,0,72,117,109,
  105,100,105,116,121,0,129,0,9,9,
  24,4,17,84,101,109,112,101,114,97,
  116,117,114,101,58,0,129,0,10,17,
  17,4,21,72,117,109,105,100,105,116,
  121,58,0,67,5,36,9,16,4,2,
  24,11,67,5,36,17,16,4,2,24,
  11 };
  
// this structure defines all the variables and events of your control interface 
struct {

    // output variables
  int8_t arch; // =0..100 level position 
  int8_t lancetta; // =0..100 level position 
  float graph_var1;
  float graph_var2;
  char temp[11];  // string UTF8 end zero 
  char hum[11];  // string UTF8 end zero 

    // other variable
  uint8_t connect_flag;  // =1 if wire connected, else =0 

} RemoteXY;
#pragma pack(pop)

/////////////////////////////////////////////
//           END RemoteXY include          //
/////////////////////////////////////////////

void setup() 
{
  RemoteXY_Init (); 
  
  // TODO you setup code
}

void loop() 
{ 
  RemoteXY_Handler ();
  
  // TODO you loop code
  // use the RemoteXY structure for data transfer
  // do not call delay() 

  int chk = DHT.read11(DHT11_PIN);
  delay(5000);
  int t = DHT.temperature;
  int h = DHT.humidity;

  sprintf (RemoteXY.temp, "%d", t);
  sprintf (RemoteXY.hum, "%d", h);

  RemoteXY.arch = t;
  RemoteXY.lancetta = h;
  
  RemoteXY.graph_var1 = t;
  RemoteXY.graph_var2 = h;


}
